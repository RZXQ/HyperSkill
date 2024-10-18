# Writing first program

In this topic, we will build our very first Java program. Our program will simply print **"Hello, World!"** on the
screen (a tradition by most programmers when learning new languages). Our code may not seem too exciting at first,
however, we will learn about the basic template that all Java programs need to follow.

## The Hello World program

Here is the Java code of this program:

```java
public class Main {
    public static void main(String[] args) {
        System.out.println("Hello, World!");
    }
} 
```

You can type this code in the **Your Code** section [here](https://www.jdoodle.com/online-java-compiler)and then press
the **execute** button. In the **result**section, you will see:

```java
Hello,World!
```

If you have already installed Java, you can run the program on your computer. If not, there is no need to install it
right now. We will do that later.

## The basic terminology

Now that you have seen the result, let's learn some basic terminology and then try to understand this program.

- **Program** – a sequence of instructions (called [statements](https://hyperskill.org/learn/step/3521)), which are
  executed one after another in a predictable manner. [Sequential](https://hyperskill.org/learn/step/3521) flow is the
  most common and straightforward sequence of statements, in which statements are executed in the order that they are
  written – from top to bottom in a sequential manner;
- **Statement** – a single action (like print some text) terminated by a semicolon (`;`);
- **Block** – a group of zero, one or more statements enclosed in a pair of braces `{...}`; There are two such blocks in
  the program above;
- **Method** – a sequence of statements that represents a high-level operation (also known as a subprogram or
  procedure);
- **Syntax** – a set of rules that define how a code needs to be written in order to be valid; Java has its own
  specific [syntax](https://hyperskill.org/learn/step/3521) that we will learn.
- **Keyword** – a word that has a special meaning in the programming language (`public`, `class`, and many others).
  These words cannot be used as variable names in your own program;
- **Identifier or name** – a word that refers to something in a program (such as
  a [variable](https://hyperskill.org/learn/step/3521) or a function name);
- **Comment** – a textual explanation of what the code does. Java comments start with `//` or `/*`;
- **Whitespace** – all characters that are not visible (space, tab, newline, etc.).

## The Hello World program under a microscope

The **Hello World** program illustrates the basic elements of Java programs. For now, we will discuss only the most
important elements.

1. **The** **public class**. It is the basic unit of a program. Every Java program must have at least one class. The
   definition of a class consists of the `class` keyword followed by the class name. A class can have any name, such as
   `App`, `Main`, or `Program`, but it must not start with a digit. A set of braces `{...}` encloses the body of a
   class.

```java
public class Main {
    // ...
}
```

The text after `//` is just a comment, not a part of the program. We will learn about comments in detail in later
topics.

**2. The** **main method**. To make the program runnable, we put a method named `main` inside a class, otherwise, it
will not run. It is the entry point for a Java program. Again, the braces `{...}` enclose the body of the method, which
contains programming statements.

```java
public static void main(String[] args) {
    // statements go here
}
```

The keywords `public`, `static`, and `void` will be discussed later, so just remember them for now. The name of this
method (`main`) is predefined and should always be the same. Capitalization matters: if you name your first method *
*Main**, **MAIN** or something else, the program cannot start.

The element `String[] args` represents a sequence of arguments passed to the program from the outside world. Don't worry
about them right now.

**3. Printing "Hello, World!"**. The body of the method consists of programming statements that determine what the
program should do after starting. Our program prints the string **"Hello, World!"** using the following statement:

```java
System.out.println("Hello, World!"); //  each statement has to end with ;
```

This is one of the most important things to understand from the **Hello World** program. We invoke a special method
`println` to display a string followed by a new line on the screen. We will often use this approach to print something
of interest to the screen. The text is printed without double quotes.





> It is important that **"Hello, World!"** is not a keyword or an identifier; it is just some text to be printed.
> {style="note"}

## Keywords

As you can see, even a simple Java program consists of many elements, including **keywords** that are parts of the
language. In total, Java provides more than 50 keywords which you will gradually learn on this platform. The full list
is [here](https://en.wikipedia.org/wiki/List_of_Java_keywords), though you don't need to remember all of them at this
moment.





> Note, `main` is outside the given list because it is not a keyword.



Congratulations on learning how to create your first Java program! This simple "Hello, World!" example is just the
beginning. As you progress, you'll build more complex projects that you can add to your portfolio on GitHub and showcase
to potential employers. Feel free to complete projects you enjoy and share them with others. Remember, learning is a
journey, and we're here to help you every step of the way!

## Conclusion

We have discussed the simplest program you can write in Java. It has a single class with a single `main`method. Every
Java program must have a `main`method as it is the first to be executed when the program runs. Don't worry about
memorizing every single term used in the topic (syntax, statement, block). These terms will reappear in further
materials. Do not forget to use the provided **Hello World**program as a template in your own programs.