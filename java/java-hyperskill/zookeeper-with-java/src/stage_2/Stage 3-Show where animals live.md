## Work on project. Stage 3/4:Show where animals live

Project: [Zookeeper with Java](https://hyperskill.org/projects/229)

## Show where animals live

## Description

The third stage requires you to increase the capabilities of your software. Now it should be able to recognize the number of a specific habitat from the input and show the animals living there.

Add all of the variables from the template to a single variable with the list type. The order of variables matters: they must appear on the list in the order in which they're defined in the code. The list must contain all of the variables with no duplicates.

## Objectives

In this stage your program should:

1. Ask for the number of the desired habitat using the following phrase: `Please enter the number of the habitat you would like to view:`
2. Use the input number as an index of your habitats to print its content.
3. End with the following phrase:

```no-highlight
---
You've reached the end of the program. To check another habitat, please restart the watcher.
```

## Examples

The greater-than symbol followed by a space (`> `) represents the user input. Notice that it's not part of the input.

**Example 1**

```no-highlight
Please enter the number of the habitat you would like to view: > 5

Switching on the camera in the rabbit habitat...
         ,
        /|      __
       / |   ,-~ /
      Y :|  //  /
      | jj /( .^
      >-"~"-v"
     /       Y
    jo  o    |
   ( ~T~     j
    >._-' _./
   /   "~"  |
  Y     _,  |
 /| ;-"~ _  l
/ l/ ,-"~    \
\//\/      .- \
 Y        /    Y
 l       I     !
 ]\      _\    /"\
(" ~----( ~   Y.  )
It looks like we will soon have more rabbits!
---
You've reached the end of the program. To check another habitat, please restart the watcher.
```

**Example 2**

```no-highlight
Please enter the number of the habitat you would like to view: > 4

Switching on the camera in the bat habitat...
_________________               _________________
 ~-.              \  |\___/|  /              .-~
     ~-.           \ / o o \ /           .-~
        >           \\  W  //           <
       /             /~---~\             \
      /_            |       |            _\
         ~-.        |       |        .-~
            ;        \     /        i
           /___      /\   /\      ___\
                ~-. /  \_/  \ .-~
                   V         V
This bat looks like it's doing fine.
---
You've reached the end of the program. To check another habitat, please restart the watcher.
```