# Boolean type and operations. True and false

The `boolean` [data type](https://hyperskill.org/learn/step/3516) in Java is used to represent logical values, which can have only two possible states: `true` and `false`. It is used for creating conditions and logic in programs, allowing programmers to make decisions based on Boolean conditions.

This data type is particularly useful for implementing logic related to binary states, such as on/off, yes/no, and similar situations.

## Boolean type

The `boolean` is a data type that has only two possible values: `false` and `true`. This is also known as the **logical type**.

This type is a common way in programming languages to represent something that has only two opposite states like *on* or *off*, *yes* or *no*, etc.

![true or false choose image](https://ucarecdn.com/50cbf6b2-6d44-44d6-b5ef-b1426bdde305/)

If you are writing an application that keeps track of opening and closing a door you'll find it natural to use a `boolean` to store the current door state.

```java
boolean open = true;
boolean closed = false;

System.out.println(open);   // true
System.out.println(closed); // false
```











> Important, you cannot assign an integer value to a `boolean` variable. In Java, 0 is not the same as `false`.
{style="note"}










## Logical operators

[Variables](https://hyperskill.org/learn/step/3516) of the `boolean` type are often used to build [logical expressions](https://hyperskill.org/learn/step/3516) using [logical operators](https://hyperskill.org/learn/step/3516). Java has four logical operators **NOT**, **AND**, **OR** and **[XOR](https://hyperskill.org/learn/step/3516):**

- **NOT** is a [unary operator](https://hyperskill.org/learn/step/3516) that reverses the boolean value. It is denoted as `!`.

```java
boolean f = false; // f is false
boolean t = !f;    // t is true
```

- **AND** is a [binary operator](https://hyperskill.org/learn/step/3516) that returns `true` if both operands are `true`, otherwise, it returns `false`. It is denoted as `&&`.

```java
boolean b1 = false && false; // false
boolean b2 = false && true;  // false
boolean b3 = true && false;  // false
boolean b4 = true && true;   // true 
```

- **OR** is a binary operator that returns `true` if at least one operand is `true`, otherwise, it returns `false`. It is denoted as `||`.

```java
boolean b1 = false || false; // false
boolean b2 = false || true;  // true
boolean b3 = true || false;  // true
boolean b4 = true || true;   // true
```

- **XOR** (**exclusive OR**) is a binary operator that returns `true` if boolean operands have different values, otherwise, it returns `false`. It is denoted as `^`.

```java
boolean b1 = false ^ false; // false
boolean b2 = false ^ true;  // true
boolean b3 = true ^ false;  // true
boolean b4 = true ^ true;   // false
```

The **XOR** operator is used less often than the others. Just remember that Java has it. If you really need it, you can use it.

## The precedence of logical operators

Here are the logical operations sorted in order of decreasing priorities in expressions: `!` (NOT), `^`(XOR), `&&` (AND), `||` (OR).

The following variable is `true`:

```java
boolean b = true && !false; // true, because !false is evaluated before &&
```

To change the order of execution you can use parentheses `(...)`.

## An example: trekking

As an example, let's write a complex [boolean expression](https://hyperskill.org/learn/step/3516) that determines the possibility of trekking in summer and in other seasons. Let's suppose that the right conditions for trekking are dry warm weather in any season or dry weather in summer.

```java
boolean cold = false;
boolean dry = true;
boolean summer = false; // suppose now is autumn

boolean trekking = dry && (!cold || summer); // true, let's go trekking!
```

Do not get confused in the expression above, otherwise, you will go trek in bad weather! A programmer should understand not only arithmetic but also logical operations.

## Short-circuiting evaluation

An interesting thing is that the `&&` and `||` operators don't evaluate the second argument if it isn't necessary. When the first argument of the `&&`operator evaluates to `false`, the overall value must be `false`; and when the first argument of the `||`operator evaluates to `true`, the overall value must be `true`. So:

- `false && ...` -> `false`, since it is not necessary to know what the right-hand side is;
- `true || ...` -> `true`, since it is not necessary to know what the right-hand side is.

This behavior is known as **[short-circuit evaluation](https://hyperskill.org/learn/step/3516)** (do not confuse it with [an electrical short circuit](https://en.wikipedia.org/wiki/Short_circuit)). It reduces the computation time, but can also be used to avoid some errors in programs. We will discuss this in the following topics.

## Conclusion

The `boolean` data type has only two possible values: `false` and `true`, and is used to represent logical states. The use of logical operators `!` , `^` , `&&`, `||`allows for the creation of complex logical expressions that take into account multiple factors. Understanding the [precedence](https://hyperskill.org/learn/step/3516) of these operators enables proper organization of expressions and helps avoid errors.