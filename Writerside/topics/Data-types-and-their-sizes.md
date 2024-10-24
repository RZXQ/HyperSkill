# Data types and their sizes

This topic teaches the classification and properties of [primitive types](https://hyperskill.org/learn/step/3532) provided by Java. Maybe you already know some of them. There are several groups of basic types divided by meaning. Types from the same group operate similarly, but they have different sizes and, as a result, represent different ranges of values.

You do not need to know all this information by heart because it is easy to find it in the documentation or Google it. But a common understanding of these concepts is essential in job interviews and practice.

## Numbers

Java provides several types for **integers** and **fractional** numbers. These types are often used in [arithmetic expressions](https://hyperskill.org/learn/step/3532).

**Integer numbers** (0, 1, 2, ...) are represented by the following four types: `long`, `int`, `short`, and `byte` (from the largest to the smallest). These types have different sizes and may represent different ranges of values. The range of an integer type is calculated as −(2<sup>n−1</sup>) to (2<sup>n−1</sup>)-1, where *n* is the number of bits. The range includes 0, so we subtract 1 from the upper bound.

- `byte`: size 8 bits (1 byte), ranging from −(2<sup>7</sup>) to (2<sup>7</sup>)-1;
- `short`: size 16 bits (2 bytes), ranging from −(2<sup>15</sup>) to (2<sup>15</sup>)-1;
- `int`: size 32 bits (4 bytes), ranging from −(2<sup>31</sup>) to (2<sup>31</sup>)-1;
- `long`: size 64 bits (8 bytes), ranging from −(2<sup>63</sup>) to (2<sup>63</sup>)-1.

The sizes of types are always the same. They do not depend on the operating system or hardware and cannot be changed.

The most commonly used integer types are `int` and `long`. Try to use `int` if it suits your purposes. Otherwise, use `long`.

```java
int one = 1;
long million = 1_000_000L;
```

**[Floating-point types](https://hyperskill.org/learn/step/3532)** represent numbers with fractional parts. Java has two such types: `double` (64 bits) and `float` (32 bits). These types can store only a limited number of significant decimal digits (~6-7 for `float` and ~14-16 for `double`). Usually, you will use the `double` type in practice.

```java
double pi = 3.1415;
float e = 2.71828f;
```

When you declare and initialize a `float` variable, mark the assigned value with the special letter `f`. Similarly, a `long` value is marked with the letter `L`.

## Characters

Java has a type named `char` to represent letters (uppercase and lowercase), digits, and other symbols. Each character is just a single letter enclosed in single quotes. This type has the same size as the `short` type (2 bytes = 16 bits).

```java
char lowerCaseLetter = 'a';
char upperCaseLetter = 'Q';
char dollar = '$';
```

Characters represent symbols from many alphabets, including hieroglyphs and other special symbols.

## Booleans

Java provides a type called `boolean`, which can store only two values: `true` and `false`. It represents only one bit of information, but its size is not precisely defined.

```java
boolean enabled = true;
boolean bugFound = false;
```

You will often use this type in conditionals and as a result of comparing two numbers.

## Conclusion

- There are several types of integers and fractional numbers;
- Integer numbers are represented by `long`, `int`, `short`, and `byte`;
- Floating-point types represent numbers with fractional parts: `double` (64 bits) and `float` (32 bits);
- `char` type represents letters (uppercase and lowercase), digits, and other symbols;
- `boolean` stores only `true` and `false` values.

Remember that knowledge of sizes and ranges of [data types](https://hyperskill.org/learn/step/3532) may help you with interviews.