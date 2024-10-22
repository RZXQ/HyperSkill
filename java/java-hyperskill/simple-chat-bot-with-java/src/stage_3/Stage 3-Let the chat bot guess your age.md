## Work on project. Stage 3/5:Let the chat bot guess your age

Project: [Simple Chat Bot with Java](https://hyperskill.org/projects/113)

## Let the chat bot guess your age

## Description

Keep improving your bot by developing new skills for it. We suggest a simple guessing game that will predict the age of a user.

It's based on a simple math trick. First, take a look at this formula:

```
age = (remainder3 * 70 + remainder5 * 21 + remainder7 * 15) % 105
```

The numbers `remainder3`, `remainder5`, and `remainder7` are the remainders of the division of `age` by 3, 5, and 7 respectively.

It turns out that for each number ranging from *0* to *104,* the calculation will result in the number itself. This perfectly fits the ordinary age range, doesn't it? Ask the user for the remainders and use them to guess the age!

## Objective

In this stage, you will introduce yourself to the bot. It will greet you by your name and then try to guess your age using arithmetic operations.

Your program should print the following lines:

```no-highlight
Hello! My name is Aid.
I was created in 2023.
Please, remind me your name.
What a great name you have, Max!
Let me guess your age.
Enter remainders of dividing your age by 3, 5 and 7.
Your age is {yourAge}; that's a good time to start programming!
```

Read three numbers from the standard input. Assume that all the numbers will be given on separate lines.

Instead of `{yourAge}`, the bot will print the age determined according to the special formula discussed above.

## Example

The greater-than symbol followed by a space (`> `) represents the user input. Note that it's not part of the input.

**Example 1:** *a dialogue with the bot*

```no-highlight
Hello! My name is Aid.
I was created in 2023.
Please, remind me your name.
> Max
What a great name you have, Max!
Let me guess your age.
Enter remainders of dividing your age by 3, 5 and 7.
> 1
> 2
> 1
Your age is 22; that's a good time to start programming!
```

Use the provided template to simplify your work. You can change the text but not the number of printed lines.