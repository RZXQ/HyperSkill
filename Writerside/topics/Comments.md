# Comments

Inside a Java program, you can write a special text that will be ignored by the Java [compiler](https://hyperskill.org/learn/step/3520) — known as the **comment**. Comments allow you to exclude code from the compilation process (disable it) or clarify a piece of code to yourself or other developers. In our materials, we use comments in the theory and practice lessons to explain how and why our code works.

The Java programming language supports three kinds of comments.

## End-of-line comments

The Java compiler ignores any text from `//` to the end of the line.

```java
class Program {
    public static void main(String[] args) {
        // The line below will be ignored
        // System.out.println("Hello, World");
        // It prints the string "Hello, Java"
        System.out.println("Hello, Java"); // Here can be any comment
    }
}
```

In the example above the text after `//` is ignored by the compiler.

## Multi-line comments

The compiler ignores any text from `/*` to the nearest `*/`. It can be used for multiple and single-line comments.

```java
class Program {
    public static void main(String[] args) {
        /* This is a single-line comment */
        /*  This is an example of
            a multi-line comment */
  }
}
```

You can nest end-of-line comments inside multi-line comments:

```java
class Program {
    public static void main(String[] args) {
        /*
        System.out.println("Hello"); // print "Hello"
        System.out.println("Java");  // print "Java"
        */
    }
}
```

The part of the code above is ignored by the compiler because of the `/* ... */` characters.

## Java documentation comments

The compiler ignores any text from `/**` to `*/` just like it ignores multi-line comments.

These kinds of comments can be used to automatically generate documentation about your [source code](https://hyperskill.org/learn/step/3520) by using the **javadoc** tool. Usually, these comments are placed above [declarations](https://hyperskill.org/learn/step/3520) of classes, interfaces, methods and so on. Some special labels such as `@param` or `@return` are often used for controlling the tool. However, they are optional and we will not deal with them for now. Just don't be surprised in case you see them.

See the example below.

```java
class Program {
    /**
     * The main method accepts an array of string arguments
     *
     * @param args from the command line
     */
    public static void main(String[] args) {
        // do nothing
    }
}
```

Do not be afraid if you have not understood **the documentation comments** completely. This will be considered in other topics.