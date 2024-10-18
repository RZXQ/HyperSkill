# Arithmetic operations

In real life, we often perform [arithmetic operations](https://hyperskill.org/learn/step/3519). They help us to determine the change from a purchase, calculate the area of a room, count the number of people in a queue, and so on. The same operations are used in programs.

## Binary arithmetic operators

The Java programming language provides operators to perform arithmetic operations:

- addition `+`
- [subtraction](https://hyperskill.org/learn/step/3519) `-`
- multiplication `*`
- division `/`
- remainder `%`

The operators are called binary because they take two values as operands.

The following example prints the results of **addition**, **subtraction**, and **multiplication**.

```java
System.out.println(13 + 25); // prints 38
System.out.println(20 + 70); // prints 90

System.out.println(70 - 30); // prints 40
System.out.println(30 - 70); // prints -40

System.out.println(21 * 3);  // prints 63
System.out.println(20 * 10); // prints 200
```

The `/` operator returns the integer part of the division of two integer numbers, and any fractional part is discarded.

```java
System.out.println(8 / 3); // prints 2
System.out.println(41 / 5); // prints 8
```

The `%` in Java is the modulus or remainder operator. It returns the remainder of the division of two numbers. Note, that when the dividend is less than the divisor, the quotient is zero and the remainder equals the dividend. If you still feel uneasy about the modulo operation, check out [this topic](https://hyperskill.org/learn/step/10586).

```kotlin
System.out.println(10 % 3); // prints 1, because 10 divided by 3 leaves a remainder of 1
System.out.println(12 % 4); // prints 0, because 12 divided by 4 leaves no remainder
System.out.println(5 % 9); // prints 5, because 5 divided by 9 leaves a remainder of 5
```

## Writing complex expressions

The operations can be combined to write more complex [expressions](https://hyperskill.org/learn/step/3519):

```java
System.out.println(1 + 3 * 4 - 2); // prints 11
```

The order of operations follows the standard arithmetic rules. Multiplication has a higher priority level than addition and subtraction, so the operation `3 * 4` is calculated first.

To specify the order of execution we can use **parentheses**:

```java
System.out.println((1 + 3) * (4 - 2)); // prints 8
```

As in arithmetic, **parentheses** can be nested. You can also use them for clarity.

## Unary operators

A [unary operator](https://hyperskill.org/learn/step/3519) takes a single value as the operand.

- The **unary plus** operator indicates a positive value. It's an optional operator.

```java
System.out.println(+5); // prints 5
```



- The **unary minus** operator negates a value or an expression.

```java
System.out.println(-8);  // prints -8
System.out.println(-(100 + 4)); // prints -104
```

They both have a higher level of [precedence](https://hyperskill.org/learn/step/3519) than the **multiplication** and **division** operators.

## The precedence order

There is a precedence order of all [arithmetic operators](https://hyperskill.org/learn/step/3519), including parentheses. The list below is sorted from the highest to the lowest precedence level.

- parentheses;
- unary plus/minus;
- multiplication, division, the remainder;
- addition, subtraction.