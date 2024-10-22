# Comparing values. Relational operators

[Relational operators](https://hyperskill.org/learn/step/3512) in Java are used for comparing values. They help in determining relationships between variables, such as checking if one value is greater than another or if two values are equal. These operators are essential for making decisions and controlling program flow based on specific conditions.

## List of relational operators

Java provides six relational operators to compare numbers:

- `==` (equal to)
- `!=` (not equal to)
- `>` (greater than)
- `>=` (greater than or equal to)
- `<` (less than)
- `<=` (less than or equal to)

The result of applying a relational operator to its operands will be boolean (`true` or `false`) regardless of the types of operands.

## Comparing integer numbers

Relational operators allow you to easily compare, among other things, two integer numbers. Here are some examples:

```java
int one = 1;
int two = 2;
int three = 3;
int four = 4;

boolean oneIsOne = one == one; // true

boolean res1 = two <= three; // true
boolean res2 = two != four;  // true
boolean res3 = two > four;   // false
boolean res4 = one == three; // false
```

Relational operators can be used in mixed [expressions](https://hyperskill.org/learn/step/3512) together with [arithmetic operators](https://hyperskill.org/learn/step/3512). In such expressions, relational operators have lower priorities than arithmetic operators.

In the following example, first of all, two sums are calculated, and then they are compared using the operator `>`.

```java
int number = 1000;
boolean result = number + 10 > number + 9; // 1010 > 1009 is true
```

The `result` is `true`.

## Joining relational operations using logical operators

In Java, you cannot write an expression like **a <= b <= c**. Instead, you should join two boolean expressions using [logical operators](https://hyperskill.org/learn/step/3512) like `||` and `&&`.

Here is an example:

```java
number > 100 && number < 200; // it means 100 < number < 200 
```

Also, we can write parts of the expression in parentheses to improve readability:

```java
(number > 100) && (number < 200);
```

But parentheses are not necessary here because relational operators have a higher priority than logical operators.

Here is a more general example of [variables](https://hyperskill.org/learn/step/3512).

```java
int number = ...             // it has a value
int low = 100, high = 200;   // borders

boolean inRange = number > low && number < high;  // joining two expressions using AND.
```

The code checks if the value of `number` belongs to a range.

So, logical operators allow you to join a sequence of relational operations into one expression.

## An example of a program

Suppose there are three children in the sports class. You want to check if their heights are arranged in descending order. The following program reads three integer numbers `h1`, `h2`, and `h3` and then checks if `h1 >= h2` and `h2 >= h3`. Note that **h** means **the height of a child**.

```java
import java.util.Scanner;

public class CheckDescOrder {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int h1 = scanner.nextInt();
        int h2 = scanner.nextInt();
        int h3 = scanner.nextInt();

        boolean descOrdered = (h1 >= h2) && (h2 >= h3);

        System.out.println(descOrdered);
    }
}
```

Here are several input-output pairs:

**Input 1**

```java
185 178 172
```

**Output 1**

```java
true
```

**Input 2**

```java
181 184 177
```

**Output 2**

```java
false
```

It is possible not to use an additional variable to store the boolean result before output:

```java
System.out.println((h1 >= h2) && (h2 >= h3));
```

But when your condition is quite long, it is hard to understand what the code does without some explanations. A variable with a good name provides such an explanation.

## Conclusion

Java's six relational operators `==`, `!=`, `>`, `>=`, `<`, `<=` are powerful tools for comparing numeric values, always resulting in a boolean (`true `or `false`) outcome. They allow for straightforward comparisons of integer numbers and can be seamlessly integrated into mixed expressions with arithmetic operators. Relational operators in Java are fundamental tools for creating conditional logic and decision-making processes in Java programs.