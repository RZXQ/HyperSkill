# Calling methods

You may remember that a method is a sequence of [statements](https://hyperskill.org/learn/step/10973) that can be invoked or referred to by its name. Nothing special, huh? But what if we tell you that you can use it in a program anytime you need and anywhere you want just by invoking it with one line of code? Hope that we have caught your attention now!

To get started, we will call any method:

```java
getVolume(a, b, h);
```

Here, `getVolume` is the name of the method that, for example, calculates a volume of some geometric shape, and the variables `a`, `b` and `h` are its parameters. Technically, the parameter of a method is some value that is used inside the method. The combination of the name and method parameters in parentheses is the way we call or invoke the method. Let's focus on it in more detail.

## What is calling a method

Let's say that there exists a method, that calculates a volume of a box:

```java
static void calculateVolume(int length, int width, int height) {
    int volume = length * width * height;
    System.out.println(volume);
}
```

Don't worry, for now, you don't need to fully understand the entire code. That's called a method [declaration](https://hyperskill.org/learn/step/10973) and will be discussed in further topics. However, for a more detailed understanding let's break it down:

- The method is called `calculateVolume`, and we'll use this name when we want to **call** it later.
- The part in parentheses is where we [declare](https://hyperskill.org/learn/step/10973)some [variables](https://hyperskill.org/learn/step/10973) that the method will use in its code, we set the values for these variables when we **call** a method. In example above there are three of them: length, width and height of a box.
- The code inside curly brackets is a sequence of statements that will be executed when we **call**this method. In the example it just multiplies three values passed as parameters and prints the result.

If you want to call (or invoke) a method in your program, you should write its name and pass the values of its parameters in parentheses. Here's how it can be done:

```java
public class Main {
    public static void main(String[] args) {
        calculateVolume(3, 7, 2);
    }

    static void calculateVolume(int length, int width, int height) {
        int volume = length * width * height;
        System.out.println("The volume of a box is equal to " + volume);
    }
}
```

Here we call a `calculateVolume` method with three parameters: **3**, **7** and **2.** This basically means that the `length`, `width`, and `height` variables are set to these values respectively. Next, the code within the curly brackets is executed, calculating the volume and printing the result. Therefore, the execution of the whole program results in the following output:

```java
The volume of a box is equal to 42
```

That said, to call a method means to instruct the program to execute a specific set of code within that method. It involves using the method's name and providing the necessary arguments.

## Invoking a method with different parameters

Since the method we're calling (or invoking) depends on the passed parameters, if we pass other values to it, the result of the program will also change:

```java
public class Main {
    public static void main(String[] args) {
        calculateVolume(3, 7, 2); // The volume of a box is equal to 42
        calculateVolume(14, 6, 8); // The volume of a box is equal to 672
        calculateVolume(2, 2, 2); // The volume of a box is equal to 8
    }

    static void calculateVolume(int length, int width, int height) {
        int volume = length * width * height;
        System.out.println("The volume of a box is equal to " + volume);
    }
}
```

However, when calling a method you should always provide the correct number and types of arguments that the method expects. That said, the following calls will produce a compile error:

- `calculateVolume(1, 2);`
- `calculateVolume("Hello", true, 6);`

Let's say there is another method that takes a student's name and average score as parameters and prints them:

```java
static void printStudent(String name, double averageScore) {
    System.out.println("Name: " + name);
    System.out.println("Average score: " + averageScore);
}
```

In this case, the method expects us to pass two values of different types. Therefore, the correct usage example of this method will be:

```java
printStudent("John", 3.14); 
// Name: John
// Average score: 3.14
```

Not all methods expect any parameters; some are designed to operate without any provided data. When invoking such methods, you don't need to provide any arguments, so just leave the parentheses empty as follows: `doSomething()`.

## Different ways

Some methods are called in a slightly different ways. Let's take a look at some of them.

To call a method from outside the class it belongs to, you need to indicate a class as a prefix. Check these methods:

```java
Math.round(79.378); // method with Math class name
Character.isLetter('a'); // method with Character class name
```

Let's try to perform a small task by invoking a method:

```java
double weight = 63.85;
weight = Math.round(weight); // now weight equals 64.0
```

Methods that operate on specific instances are called [instance methods](https://hyperskill.org/learn/step/10973). Methods like this require an object to be invoked. Take a look:

```java
String s = "HellO, WoRlD!";
s = s.toLowerCase(); // hello, world!
```

Before we called the `toLowerCase()` method, we created an object of the `String` type called `s`, since the method in question deals with strings. Now we can call the method for this particular instance*,* which results in decapitalizing all the letters from our string.

As you see, this method requires an instance to be created before it can be called, that's why it is known as an **instance method**. We will talk about this type of method later.

## Built-in methods

Why do you need to rewrite algorithms that have already been written? Of course, we're not talking about some special cases like educational tasks. Still, it is more efficient to use pre-defined methods that are always available to the user. That is why there are two types of methods in Java: **built-in** and **user-defined** methods.

[Built-in methods](https://hyperskill.org/learn/step/10973) belong to the Standard Java library. Now there are a lot of built-in methods that convert or compare values, round doubles, find the maximum or the minimum value, and do a lot of useful operations. We've already dealt with the `round()` and `isLetter()` methods, but the number of built-in methods is huge and constantly growing. You can find the method you need in the Oracle documentation. For example, check out the link to the [Math library](https://docs.oracle.com/javase/8/docs/api/java/lang/Math.html).

In contrast to built-in methods, user-defined methods are created by the programmer. It is a common practice to create a customized subprogram for a specific purpose. Later on, we will learn why it is a good practice to use user-defined methods and how to actually create them.

## Conclusion

Generally, a method is a necessary tool for a programmer who is aiming for a neat and reusable code style. With the help of methods, you can perform any specific task you need. They make the program look more readable, and you don't need to repeat routine code lines over and over. Some tasks are wrapped in special built-in methods that are part of the standard Java library. Also, there are user-defined methods that are created by the programmer. We will discuss these methods in other topics.