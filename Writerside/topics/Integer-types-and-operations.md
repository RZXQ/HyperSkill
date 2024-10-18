# Integer types and operations

Java provides several types which represent integer numbers including positive, negative, and zero. In practice, the most used types are `int` and `long`. The first type can store numbers from a smaller range than the second one, but it is often enough (especially, in this topic). You can perform all [arithmetic operations](https://hyperskill.org/learn/step/3565) (`+`, `-`, `*`, `/`, `%`) with variables of integer types.

## Integer types: the basics

Let's look at some examples below.

```java
int two = 2;
int ten = 10;

int twelve = two + ten; // 12
int eight = ten - two;  // 8
int twenty = two * ten; // 20
int five = ten / two;   // 5
int zero = ten % two;   // 0, no remainder

int minusTwo = -two; // -2
```

This code demonstrates how to assign values to int variables as well as how to perform arithmetic operations with them.

To improve the readability of your code, the special underscore character `_` can be used to separate groups of digits within a number.

```java
int million = 1_000_000;
```

You may also print a value of an `int` [variable](https://hyperskill.org/learn/step/3565):

```java
int number = 100;
System.out.println(number); // 100
```

All arithmetic operations work with the `long` type as well.

```java
long one = 1L;
long twentyTwo = 22L; // L or l is a literal for longs
long bigNumber = 100_000_000_000L;

long result = bigNumber + twentyTwo - one; 
System.out.println(result); // 100000000021
```

If a number ends with the letter `L` or `l`, it is considered as `long`, otherwise, it is `int`.

Look at the following examples:

```java
int bigNumber = 5_000_000_000; //won't compile due to the value exceeding the maximum capacity of an int
long bigNumber = 5_000_000_000L; //compiles successfully
```



We recommend that you use the uppercase letter `L`because the lower case letter `l` is very similar to the digit `1`.







> Use `long` numbers only if it is really necessary (when you deal with numbers larger than two billion). In other situations, prefer `int` numbers.









## The forms of the assignment operator

Suppose you want to add some value to a variable. You may write something like this:

```java
int n = 10;
n = n + 4; // 14
```

The [assignment operator](https://hyperskill.org/learn/step/3565) `=` has several forms which combine it with an operation to avoid repeating the variable:

```java
int n = 10;
n += 4; // 14
```

As you can see, this form looks more concise. There are a few other possible forms such as `*=`, `/=`, `%=`.

## Reading numbers from the standard input

As a rule, to solve a problem you need to read some data from the outside world, process it, and output the result. The following program reads two numbers from the standard input, adds them, and prints the sum.

```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int a = scanner.nextInt();
        int b = scanner.nextInt();

        int sum = a + b;

        System.out.println(sum);
    }
}
```

This simple code uses `Scanner` to read data.

If we know that the input numbers can be quite large, we can read `long`s instead of `int`s:

```java
long a = scanner.nextLong();
long b = scanner.nextLong();

long sum = a + b;
```

See? No more lines need to be changed in this code.

## Conclusion

In this topic, you learned about using integer types `int`and `long` to perform various arithmetic operations. Now you have enough knowledge to write useful programs that process data. You may use the template above for solving this topic's code challenges. Try to give meaningful names to variables when solving problems.