## Work on project. Stage 5/5:Play a simple quiz together

Project: [Simple Chat Bot with Java](https://hyperskill.org/projects/113)

## Play a simple quiz together

## Description

At the final stage, you will improve your simple bot so that it can give you a test and check your answers. The test should be a multiple-choice quiz about programming with any number of options. Your bot has to repeat the test until you answer correctly and congratulate you upon completion.

## Objective

Your bot can ask anything you want, but there are two rules for your output:

- the line with the test should end with the question mark character;
- an option starts with a digit followed by the dot (`1.`, `2.`, `3.`, `4.`)

If a user enters an incorrect answer, the bot may print a message:

```no-highlight
Please, try again.
```

The program should stop on the correct answer and print `Congratulations, have a nice day!` at the end.

## Example

The greater-than symbol followed by a space (`> `) represents the user input. Note that it's not part of the input.

**Example 1:** *a dialogue with the final version of your bot*

```no-highlight
Hello! My name is Aid.
I was created in 2023.
Please, remind me your name.
> Max
What a great name you have, Max!
Let me guess your age.
Enter the remainders of dividing your age by 3, 5 and 7.
> 1
> 2
> 1
Your age is 22: that's a good time to start programming!
Now I will prove to you that I can count to any number you want.
> 3
0!
1!
2!
3!
Let's test your programming knowledge.
Why do we use methods?
1. To repeat a statement multiple times.
2. To decompose a program into several small subroutines.
3. To determine the execution time of a program.
4. To interrupt the execution of a program.
> 4
Please, try again.
> 2
Congratulations, have a nice day!
```

The program must end with the `Congratulations, have a nice day!`message.

Use the provided template to simplify your work. You can change the text if you want. Please note that we use functions to make it easy to understand the program and add new code to it or edit later.