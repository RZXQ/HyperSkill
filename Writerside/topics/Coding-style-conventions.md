# Coding style conventions

There's a question that you bump into when moving from simple single-line programs to more complicated ones: how to write code that is clean and easy to read? This is trickier than it may seem at the beginning, and this is quite important: in real life, programming is a process that involves a lot of people that work together. In fact, you often spend more time reading code than writing it. Even when you're working alone and writing a program "for yourself", after a while, it may become difficult for you to understand your own program if it's badly written.

That is why you need to follow common best practices concerning programming style. This way, other programmers and yourself can read your code easily. Writing good code may help you get your first job and make a good impression on your colleagues.



> Good coding style is like correct punctuation: you can manage without it, butitsuremakesthingseasiertoread. – The Tidyverse Style Guide by Hadley Wickham



## Java Conventions

A list of recommendations on how to write code for some particular language is usually called a **coding style guide** or **style conventions**. The conventions help developers standardize and support well-readable code. They are more like recommendations than strict rules, but by following them a programmer creates code that is clean and consistent so that other developers will be happy to work with it.

In most cases, companies and individual developers do not create their own style conventions. There are two generally accepted Java conventions that are used all over the world:

- [Oracle Code Conventions](https://www.oracle.com/technetwork/java/codeconventions-150003.pdf)
- [Google Style Guide](https://google.github.io/styleguide/javaguide.html)

Sometimes they could be modified or extended by a particular company to meet their needs.



> In all our code examples and exercises, we will follow the [Oracle Code Conventions](https://www.oracle.com/technetwork/java/codeconventions-150003.pdf) and we urge you to do the same while learning here. After completing the course, you can follow any conventions you want. Actually, it doesn't really matter which one to follow, the main point is to be consistent across your code.



There is no need to learn all the conventions at once: just remember to open them from time to time after learning some new syntactic concepts. We will provide the information throughout the course when needed.

Now let's look at some of the most basic Java conventions according to the [Oracle Code Conventions](https://www.oracle.com/technetwork/java/codeconventions-150003.pdf).

## The number of spaces

The first convention is to use 4 spaces as the unit of indentation in the whole program code. You have already seen our code examples before and you might note that we used this value there.

Good:

```java
public class NumberOfSpacesExample {

    public static void main(String[] args) {
        System.out.println("Hi!");
        System.out.println("I'm a Java program.");
    }
}
```

Very bad:

```java
public class NumberOfSpacesExample {

   public static void main(String[] args) {
         System.out.println("Hi!");
System.out.println("I'm a Java program.");
 }
  }
```

As you can see, the second code example – with its irregular indentation – looks ugly and requires some effort to be read.



> Sometimes tabulation is used to create an indentation. However, `tab` may correspond to 8 spaces instead of 4 in some IDEs, that is why we recommend you stick to spaces in this course.



## The location of curly braces

Some time ago, developers were arguing a lot about where to put opening and closing [curly braces](https://hyperskill.org/learn/step/12411) in C-like programming languages. The next convention describes what to do in Java:

1. Put the **opening curly brace** at the **end of the line** where the block begins.
2. Put the **closing curly brace** at the **beginning of the next line**.

There are two examples below which illustrate these rules.

Good:

```java
public class NumberOfSpacesExample {

    public static void main(String[] args) {
        System.out.println("Hi!");
        System.out.println("I'm a Java program.");
    }
}
```

Not that bad, but not Java-way:

```java
public class NumberOfSpacesExample 
{
    public static void main(String[] args) 
    {
        System.out.println("Hi!");
        System.out.println("I'm a Java program.");
    }
}
```

Here, the second code example doesn't look ugly, but it is just not how it is generally done in Java. Most of the common conventions follow the first example.

## Avoid extra spaces

Sometimes you may add some spaces even if you don't really need them. This will reduce the readability of your code.

- **Avoid extra spaces within parentheses.**

Good:

```java
System.out.println("Hello!");
```

Bad:

```java
System.out.println( "Hello!" );
```

- **Avoid an extra space before an open parenthesis.**

Good:

```java
System.out.println("OK");
```

Bad:

```java
System.out.println ("Shifted braces");
```

- **Avoid extra spaces before a semicolon:**

Good:

```java
System.out.println("No extra spaces");
```

Bad:

```java
System.out.println("It has an extra space") ;
```

## The length of a line

The last recommendation concerns the maximum length of a line. The [Oracle Code Conventions](https://www.oracle.com/technetwork/java/codeconventions-150003.pdf) propose avoiding lines longer than 80 characters. Plenty of developers consider this restriction as outdated since modern monitors can easily display longer lines, whereas others would go on following this rule, which is handy, for example, if laptops are used.

Keeping ourselves off this dispute, we will use 80 characters in the course to avoid scrollbars in our examples and web code editor. We recommend that you do the same while learning here, but keep in mind that you can violate this limitation after you start working on a real project or learning elsewhere.

Other popular limit values are 100, 120, and sometimes even 140 characters.

> As you start writing more complex code, you'll have the opportunity to work with real-life JetBrains tools, just like professional developers. These tools offer many smart features, including [code review](https://hyperskill.org/learn/step/12411) and AI-powered assistance. We've integrated these tools to ensure a smooth experience, helping you adhere to best coding practices and style conventions.
> {style="note"}

## Conclusion

Style guides provide the conventions to help create well-readable and consistent code. For Java, the two most popular ones are the Oracle Code Conventions and Google style guide. One of their main objectives is to provide an effective way for developers to work together on code. Because of that, it is not as important to strictly follow one of the existing style guides as to stay consistent within the project. Later on, you will learn a lot of things about Java and become a skillful programmer, but maintaining the code style will always remain important. Do not worry, though: you do not need to learn all the conventions at once. In all the following topics, we will follow the Oracle Code Conventions and encourage you to do it with us!