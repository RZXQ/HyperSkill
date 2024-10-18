# Printing data

When you write programs, you often need to print calculation results, text, or any other type of data. Also, throughout this educational platform, you will write a lot of programs that print data on the screen. Let's learn how to do that using a standard approach in Java.

## Displaying text using println() and print()

**Standard output** is a receiver to which a program can send information as text. It is supported by all common operating systems. Java provides a special `System.out` object to work with the standard output. We will often use it to print data.

The `println` method displays the passed string followed by a new line on the screen (**print-line**). For example, the following code snippet prints four lines.

```java
System.out.println("I ");
System.out.println("know ");
System.out.println("Java ");
System.out.println("well.");
```

Here is the output we get:

```no-highlight
I
know
Java
well.
```

All the strings were printed as they are, without double quotes.

This method allows you to print an empty line when no string is given:

```java
System.out.println("Java is a popular programming language.");
System.out.println(); // prints empty line
System.out.println("It is used all over the world!");
```

And here is the output:

```no-highlight
Java is a popular programming language.

It is used all over the world!
```

The `print` method displays the value that was passed in and places the cursor (the position where we display a value) after it. For example, the code below outputs all strings in a single line.

```java
System.out.print("I ");
System.out.print("know ");
System.out.print("Java ");
System.out.print("well.");
```

We receive the following output:

```no-highlight
I know Java well.
```

Pay attention to the spaces between words. We pass them to the method for printing.



> 4 letters **sout** and pressing the **Tab** key in the IntelliJ IDEA development environment will automatically write `System.out.println()` for you



## New line using escape characters

In many programming languages, including Java, you can use an [escape character](https://hyperskill.org/learn/step/3749) `\n`which moves the cursor to the beginning of the next line of output. When you include `\n` in a string passed to `System.out.print`, it breaks the text at that point and continues printing on the following line. For example, the statement `System.out.print("Hello\nWorld");` will output the following:

```bash
Hello
World
```

This option is useful when you need to break a long text into new lines in multiple places or when you need to have multiple new lines:

```bash
Hello



World
```

The following can be achieved by using three `\n` characters:

```java
System.out.print("Hello\n\n\nWorld");
```

## Printing numbers and characters

Both `println` and `print` methods allow a program to print not only strings and characters, but also numbers.

Let's print two secret codes.

```java
System.out.print(108);   // printing a number
System.out.print('c');   // printing a character that represents a letter
System.out.print("Q");   // printing a string
System.out.println('3'); // printing a character that represents a digit

System.out.print(22);
System.out.print('E');
System.out.print(8);
System.out.println('1');
```

Here is our output:

```no-highlight
108cQ3
22E81
```

As is the case with strings, none of the printed characters contain quotes.

## Concatenating data

In practice, you may need to concatenate strings or other literals inside `System.out.println`into a single output. This can be achieved by simply placing them adjacent to each other and use the + operator to join them. For example, if you want to print a greeting with a name, you might write the following:

```java
public class Main {
    public static void main(String[] args) {
        String name = "John";

        System.out.println("Hello, " + name + "!"); // Hello, John!
    }
}
```

The `+` operator merges these elements into one cohesive string, which is then passed to `System.out.println` to display the result on the console. Similarly, you can concatenate strings with integers or other types:

```java
public class Main {
    public static void main(String[] args) {
        int age = 33;

        System.out.println("Hello, I am " + age + " years old."); // Hello, I am 33 years old.
    }
}
```

In such cases, the value of that type will be converted to a string and merged with the string to the left of the `+` operator.

Take in account that when you concatenate a string with multiple integers in Java, the integers are converted to their string representations and concatenated in sequence. Here’s how it works step-by-step:

```java
public class Main {
    public static void main(String[] args) {
        System.out.println("Hello, I am " + 3 + 3 + " years old."); // Hello, I am 33 years old.
    }
}
```

You might expect the result to be "**Hello, I am 6 years old**" but when you concatenate the first integer with the string, you get "**Hello, I am 3**" as a result. The second `+` operator then merges this string with another `3`, converting the integer to a string again.

## Conclusion

In Java, you can print data via the standard output using the `System.out` object. You can use the `println` method to display the passed string in a print-line and the `print` method to output all passed strings in a single line. Both of these methods also allow for printing numbers as well as characters.