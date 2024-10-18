# Naming variables

In the world of Java programming, [variables](https://hyperskill.org/learn/step/3513) are like containers that store information. Now, imagine if all these containers were just labeled as "box1," "box2," and so on. That would be confusing, right? Well, the same goes for naming **variables** in Java. It's not just about giving them any name; it's about giving them the right name. This topic is all about the art of naming variables in Java, making your code more understandable and your programming life a bit easier. This topic will teach you how to name variables in Java properly.

## Why is naming important?

Experienced programmers put a lot of care into naming to make their programs easy to understand. It is important because programmers spend a lot of their time getting through the code written by other programmers. If variables have bad names, even your own code will seem unclear to you in a few months.

Always try to give descriptive and concise names to all variables. As a result, any programmer will enjoy your code for a long time.

In addition, there are two sets of rules that restrict the possible names for variables.

## Rules for naming variables

Java has some rules for naming variables:

- names are case-sensitive;
- a name can include [Unicode](https://en.wikipedia.org/wiki/Unicode) letters, digits, and two special characters (`$`, `_`);
- a name cannot start with a digit;
- a name must not be a keyword (`class`, `static`, `int`, etc. are illegal names).

Based on these rules, you may conclude that whitespaces are not allowed in the name of a variable.



**It is important** not to break these rules; otherwise, the program will not work.



Here are some valid names of variables:

```java
number, $ident, bigValue, _val, abc, k, var
```



**Note** that to keep backward compatibility the word `var`can be used as a variable name even after Java 10 was released.



And here are some invalid ones:

```java
@ab, 1c, !ab, class
```

Since Java 9 the single character `_` is an invalid name for a variable, but` _a` and `__` (a double `_` ) are legal names.

## Naming conventions for variables

Also, there are the following conventions for naming variables:

- if a variable name is a single word it should be in lowercase (for instance: `number`, `price`);
- if a variable name includes multiple words it should be in `lowerCamelCase`, i.e. the first word should be in lowercase and each word after the first should have its first letter written in uppercase (for instance: `numberOfCoins`);
- variable names should not start with `_` and `$`characters, although they are allowed;
- choose a name that makes sense, e.g. `score` makes more sense than `s`, although they are both valid.

These conventions are optional, but it is strongly recommended to follow them. As we mentioned at the beginning of this lesson, they make your code more readable for you and other Java programmers.

## Conclusion

Following naming rules and conventions is not just a matter of compliance, but also a practice that significantly enhances code readability and maintainability, both for yourselves and your fellow programmers. By putting in a little extra effort in choosing clear and descriptive variable names, you can make your code more accessible and user-friendly.