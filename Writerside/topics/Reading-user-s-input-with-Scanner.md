# Reading user's input with Scanner

The **standard input** is a data stream going into a program and supported by the operating system. By default, the standard input acquires data from keyboard input, but it can be redirected from a file.

Not every program needs to use the standard input, but you'll use it frequently here to help master your programming skills! The typical approach to solving programming problems is:

1. Read data from the standard input (System.in);
2. Process data to obtain a result;
3. Output the result to the standard output (System.out).

This type of code challenge can be eaily tested with different input data formats, so we'll use them often.

## Reading data with a scanner

The simplest method to obtain data from the standard input is using the standard class `Scanner`. It allows a program to read values of various types, like strings or numbers, from the standard input. In this topic, we consider reading data from the input.

To use this class, you should add the following import statement at the top of your file with the [source code](https://hyperskill.org/learn/step/9055).

```java
import java.util.Scanner;
```





> In Java, the `import` [statement](https://hyperskill.org/learn/step/9055) is used to bring in external classes and packages into your program, simplifying the use of these classes and avoiding the need to use their fully qualified names every time. By importing a class or package, you make it available for use in your code, which enhances readability and maintainability.



After the import, add a class with this construction:

```java
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        sc.close();
    }
}
```

In the `main` method, we set up the `Scanner` class and telling it to listen for answers from the keyboard (which is represented by `System.in`). So, whenever you want to get input, you're using it to read what someone types in. You'll need this line exactly as it is for now.

Note that you should close it after use. When you use a `Scanner` in Java, it’s like opening a notebook to take notes or read from it. When you’re done using the notebook, you close it to keep things tidy and make sure it’s properly put away. Closing the `Scanner` with `scanner.close()` is like closing that notebook. It tells your program that you’re finished using the `Scanner`, so it can clean up and release any resources it was using. This helps keep things organized and avoids problems later on.

## Reading string values

The `Scanner` class offers various ways to read inputs. If your input is an integer number or a single word, you can use the `next()` method. For example, the following code snippet reads the user's name and prints a *hello* message:

```java
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String name = sc.next();

        System.out.println("Hello, " + name + "!");

        sc.close();
    }
}
```

For example, if the user enters their name as James, the program's output will be:

```no-highlight
Hello, James!
```

If you enter an integer number like 123 as the user's input, the program will output this number. Remember that the `next()` method will store 123 or some other integer number as a string, even if we know that this string represents a number.

```no-highlight
Hello, 123!
```

Now, what if a user inputs a compound name like Erich Maria? The program will only output the first word:

```no-highlight
Hello, Erich!
```

In this case, you'll need to invoke the `next()` method again:

```java
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String firstName = sc.next(); // "Erich"
        String lastName = sc.next(); // "Maria"

        System.out.println("Hello, " + firstName + " " + lastName  + "!");

        sc.close();
    }
}
```

However, it would be more efficient to use another method, the `nextLine()` method, which reads and outputs the entire line:

```no-highlight
Hello, Erich Maria!
```

You may notice that the `next()` method only reads a single word and excludes any whitespace. On the other hand, the `nextLine()` method includes all space characters it encounters.

Note that in Java, **whitespace** includes not just the space character, but also everything that appears empty when printed: a tab, the newline character, and other non-printing characters.

In this article, we'll discuss space and newline characters: essentially, we create a corresponding character when we press Enter and start a new line. The term "whitespace" refers to either of these. A more correct term for what we've been calling a "word" is a **[token](https://hyperskill.org/learn/step/9055)**, which can be described as a piece of text surrounded by whitespace. So we can say that the `next()` method locates and returns the next token, while the `nextLine()` reads all data till the end of the current line.

## Reading other data types

In the previous paragraph, you learned how to read string values. Even if you enter a number, both `next()` and `nextLine()` read it as a string. But what if you need to input other types? For this purpose, Java provides us with alternatives of `next()`:

```java
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        double b = sc.nextDouble();
        boolean c = sc.nextBoolean();

        sc.close();
    }
}
```

Each of these works similarly to `next()`, but instead of reading the input as a string, they scan the input as their corresponding [data types](https://hyperskill.org/learn/step/9055). So, while `next()`always returns a string, these methods directly give you the specific type of value you need, making it easier to work with numerical and boolean data.

## Reading a multiline input

Reading multiline input might be a bit complicated; you need to consider the cursor's position and the behavior of the reading methods.

Let's explore this with an example:

```no-highlight
|This is a simple

multiline input,

that is being read
```

**|** indicates the cursor's position before reading the input.

If we call the `next()` method, the program will read the input up to the whitespace:

```no-highlight
This| is a simple

multiline input,

that is being read
```

After invoking the `nextLine()` method, the program reads the remaining line starting from the whitespace. If there is such a line in your input, the `nextLine()` places the cursor at the start of the new line:

```no-highlight
This is a simple

|multiline input,

that is being read
```

Next, let's invoke the `next()` method two times. The first input is indicated by the position of the cursor which is right after the word and before the whitespace:

```no-highlight
This is a simple

multiline| input,

that is being read
```

We're now invoking the `next()` method once again. The program outputs the second word in the line *without* any whitespace. The number of space characters doesn't matter, as the `next()` method will skip the whitespace until it finds the next token.

As you'll see, the cursor's position remains at the current line, just before the new line and after the comma:

```no-highlight
This is a simple

multiline input,|

that is being read
```

Here's a tricky thing about the `nextLine()` method, which also shows a major difference between `next()` and `nextLine()` methods. As you know already, the program will read input from the cursor's position to the new line (again, if such a line exists in your input). In this example, the cursor is placed before the new line. This means the `nextLine()`method will return an empty line ("") and place the cursor at the start of a new line.

```no-highlight
This is a simple

multiline input,

|that is being read
```

To sum it all up, let's look at the entire code and consider what variables we've just read:

```java
import java.util.Scanner; 

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);  

        String word1 = sc.next(); // "This"
        String line1 = sc.nextLine(); // " is a simple" 
        String word2 = sc.next(); // "multiline"
        String word3 = sc.next(); // "input,"
        String line2 = sc.nextLine(); // "" 

        sc.close();
    }
}
```

This example may seem a bit artificial, but it should assist you in understanding the difference between these two methods—remember that usually, variables have more expressive names.

## Conclusion

You can read data from the standard input with a specialized `Scanner` class. The `next()` and `nextLine()` methods help you read strings. Both are used for gathering input, but they act differently. The `next()` method reads input until the next whitespace, while the `nextLine()` method reads input to the end of the line.

We suggest using the `Scanner` class when solving programming challenges—it is one of the simplest ways to obtain values from the standard input.