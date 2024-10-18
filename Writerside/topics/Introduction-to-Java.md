# Introduction to Java

Ever wondered why Java's logo is a steaming cup of coffee? The creators of Java, while brainstorming a name for their
new language, chose 'Java', a slang term for 'coffee'. Just as coffee fuels our day, Java powers the tech world with its
robust and versatile features.

In this topic, we will explore why Java has been a popular choice among developers for over two decades and how it has
brewed success in various domains. We will also introduce you to your very first Java program. So, grab your cup of
coffee and join us on this exciting journey into the world of Java!

![Java logo](https://ucarecdn.com/6b2b0c7a-8b69-4701-947c-b869bef018ba/)

**The logo of the Java language**

## What is Java

**Java** is a high-level, class-based, [object-oriented](https://hyperskill.org/learn/step/38627)programming language.
James Gosling at Sun Microsystems (now part of Oracle Corporation) designed it, and it was released in 1995. The
language was developed with the "**Write Once, Run Anywhere**" (WORA) philosophy. This principle underscores Java's key
feature - **platform independence**, allowing the same Java program to run on multiple platforms without modifications.

Java is designed to be both **simple** and **powerful**. It borrows
its [syntax](https://hyperskill.org/learn/step/38627) from C and C++, but eliminates certain low-level programming
complexities, such as explicit memory management and multiple inheritance found in C++. Unlike these two languages, Java
does not require you to manually clean the application memory, as it has a garbage collector that performs this task
automatically. Known for its robustness, security, and simplicity, Java has become a popular choice among developers
worldwide. It supports different programming techniques, including generic programming, multithreaded and concurrent
programming, and functional programming.

## Where is Java Applied

Let's go through a typical day and see how Java impacts our lives without us even realizing it.

Imagine waking up to your Android alarm. As you reach out to snooze it, you're interacting with an application built
using Java. You decide to work on a project using a development tool like IntelliJ IDEA or Eclipse. As you write
and [compile](https://hyperskill.org/learn/step/38627) your code, Java is there, forming the backbone of these
development tools. During lunch, you enjoy a Netflix show or Spotify music, both services powered by Java. Later, you
finish the project and receive payment. Behind the scenes, Java is working diligently, processing your request. In the
evening, you unwind with a game of Minecraft, yet another Java-based application.

Java is like a silent friend, aiding us and making our lives easier in numerous ways, from the moment we wake up till we
call it a day.

## A sample of Java

Let's create the classic "Hello, World!" program, a friendly greeting from your computer.

Here's the program:

```java
public class HelloWorld {
    public static void main(String[] args) {
        System.out.println("Hello, World!");
    }
}
```

Don't worry if it looks a bit cryptic now. You'll get the hang of it soon.

This program simply prints the phrase "Hello, World!" to the console. But there's a lot going on here:

- **public class HelloWorld** -In Java, all the code you write will be inside classes. We're telling Java we're creating
  a new public class (a kind of blueprint) and we're naming it HelloWorld. Every Java application has to have at least
  one class.
- **public static void main(String[] args)** - This is the heart of our program, where the execution begins.
- **System.out.println("Hello, World!");** - These are our program's first words!
  This [command](https://hyperskill.org/learn/step/38627)instructs Java to print "Hello, World!" to the console via the
  `System.out.println()`method, providing instant feedback.

> Note that in Java code, we use different types of brackets, and if you open any bracket, you are required to close it.

And there you have it, your first Java program! It's a modest step, but it marks the beginning of an exciting journey
into Java programming.

## Conclusion

Java, known for its robust features and platform independence, stands as a top programming language. Its clear syntax
and automatic memory management contribute to its popularity. As you progress in your learning, you'll explore Java's
key concepts and methods more deeply. With Hyperskill to guide you, you're on your way to doing great things with Java!