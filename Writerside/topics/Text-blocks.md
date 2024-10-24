# Text blocks

Anyone who has ever written a Java program that deals with a lot of text has likely run into the nightmare of working with Java Strings that span more than one line. When a string fits on a single line, Java does not give us any trouble. But when we paste in a longer String that spans multiple lines, the dark underbelly of this ancient language comes to light. If you use an IDE like IntelliJ, the String will automatically be formatted for you when you paste it in between quotes. However, it is most definitely not a pretty sight, nor is it a pleasure to read. Java Text Blocks are Java 15's solution to these problems. Text Blocks are multi-line string literals that make our code easier to read and write, with more predictable formatting.

## The good, the bad, and the ugly

Imagine for a second that you are programming a computer game set in Ancient Greece. You set the mood of the story with some poetic quotations from Homer's *The Iliad*, painting a picture of the main character Achilles. You assign the following String to a variable named `iliadQuote` for ease of reference.





> If you paste your String in between two quotation marks, IntelliJ will automatically format the String with required [escape characters](https://hyperskill.org/learn/step/17316) and concatenations.





```java
String iliadQuote = "\"But raging still, amidst his navy sat\n" +
                    "The stern Achilles, stedfast in his hate;\n" +
                    "Nor mix’d in combat, nor in council join’d;\n" +
                    "But wasting cares lay heavy on his mind:\n" +
                    "In his black thoughts revenge and slaughter roll,\n" +
                    "And scenes of blood rise dreadful in his soul.\"";
```

As code goes, this isn't as terrible to read as it could be. The escaped quotation marks at the beginning and the end of the String, however, look a bit messy. Likewise, the quotation marks, the escaped newline character, and the concatenation operators in each line detract from the readability of the text.

If the quotation from *The Iliad* was "the bad," then the following SQL query is without question "the ugly." You don't need to know anything about SQL, or databases in general, to recognize that this String is a nuisance to read:

```java
String query = "SELECT \"EMP_ID\", \"LAST_NAME\" FROM \"EMPLOYEE_TB\"\n" +
               "WHERE \"CITY\" = 'INDIANAPOLIS'\n" +
               "ORDER BY \"EMP_ID\", \"LAST_NAME\";\n";
```

Because SQL queries are conventionally written with the column names in quotes and spread over multiple lines, the above code is a mess of escaped quotation marks and escaped newlines characters. For a final example of a difficult to work with String, let's look at a block of properly indented HTML code that could be returned as a String from a Java server endpoint:

```java
String html = "<html>\n" +
              "    <body>\n" +
              "        <p>Hello, world</p>\n" +
              "    </body>\n" +
              "</html>\n";
```

Now that we've been properly traumatized by the bad and the ugly, let's take a look at "the good."

## The Java Text Block

Java [text blocks](https://hyperskill.org/learn/step/17316) simplify multiline Strings by using a group of three quotes at the beginning and end. Almost every character in between does not need to be escaped, no explicit newlines are required, and no concatenation operators are needed. Look how pleasant and clean the quote from *The Iliad* looks in a Java 15 text block:

```java
String iliadQuote = """
    "But raging still, amidst his navy sat
    The stern Achilles, stedfast in his hate;
    Nor mix’d in combat, nor in council join’d;
    But wasting cares lay heavy on his mind:
    In his black thoughts revenge and slaughter roll,
    And scenes of blood rise dreadful in his soul."
    """;
```

Note that in earlier Java versions (up to 15), such a string with triple quotes will not be compiled.

Likewise, the SQL query is improved significantly. If you don't know anything about SQL, just know that the String in the following code block is written exactly as a native SQL query would be. Where the traditional Java way of writing the query obscured the meaning of the code, the Java 15 text block could not make it any clearer.

```java
String query = """
    SELECT "EMP_ID", "LAST_NAME" FROM "EMPLOYEE_TB"
    WHERE "CITY" = 'INDIANAPOLIS'
    ORDER BY "EMP_ID", "LAST_NAME";
    """;
```

## Indentation and whitespace

Writing the HTML code as a text block brings us to an important question yet to be addressed. How do Java text blocks sort out String indentation when they themselves are also indented in the Java source code? The short answer is that the Java compiler makes a distinction between **incidental whitespace**and **essential whitespace**. Incidental whitespace is the whitespace added in the IDE to make the code easier to read, which the developer does not want to be a part of the String. Another source of incidental whitespace is copying text from a source document with unnecessarily added extra trailing spaces.

By contrast, essential whitespace is written when the developer intentionally wants the whitespace to be stored as part of the String. A common example of essential whitespace is a String of properly indented HTML code. The Java compiler counts the number of leading spaces that all the lines have in common and then subtracts them from the String. Any additional leading spaces are left in the String. The trailing spaces are also removed after that. Then the compiler concatenates all the lines together so that it conforms to the standard Java String type.





> If the closing delimiter (`"""`) occurs on its own line at the bottom of the String, a newline character is automatically included. However, if it occurs at the end of the final line with text preceding it, nothing will be added.





This text block containing a String of HTML code is very readable in the Java [source code](https://hyperskill.org/learn/step/17316).

```java
String html = """
    <html>
        <body>
            <p>Hello, world</p>
        </body>
    </html>
    """;
```

If we print `html` to the standard output, we will see the perfectly indented text below:

```html
<html>
    <body>
        <p>Hello, world</p>
    </body>
</html>
```

## Beyond the basics

Now that we have a handle on the basics of text blocks, let's look at a few extra features. One of the benefits of text blocks is that we don't have to escape quotation marks. However, because the closing delimiter of a text block is a triple quote, we cannot put an unescaped triple quote inside our text block; the compiler would incorrectly assume this is the end of the String. We only need to escape one of the quotes, because we are trying to prevent the total of unescaped quotes from reaching three in a row.

If you want the enhanced readability of text blocks but don't want the new line character automatically added, you can add `\` as a new line character suppresser at the end of each line. You can also use `\s` at the end of a line to add a space that won't be stripped and to prevent the compiler from removing trailing spaces occurring before the `\s`.

```java
String example = """
    You can use "single" or ""double"" quotes any time you like. 
    But you must escape one if you want triple quotes: \"""
    or \"\""" if you want four. 
    The line after me will be directly concatenated onto the same line\
    But this line will preserve a single trailing space at the end\s
    And this line will keep six trailing spaces     \s 
    """;
```

Text blocks do not directly support String interpolation, but since a text block is still a String type, you can use the `format` static method of `String` class to create a new String with interpolated values. `replace` method can be used for the same purpose but `format` is more efficient if you are inserting multiple values. There is a newer and slightly simpler String instance method `formatted(Object... args)` that you can use instead of the static `format` method. Both of them have the same method body, so they are completely interchangeable.

Internally, two new String methods are called during the process of compiling text blocks. They are `stripIndent` and `translateEscapes`. As you might guess from their names, the compiler strips the whitespace indentation with the first method and uses the second to make escaped characters appear properly. We do not need to use them directly with text blocks because they are already being called under the hood, but we do have access to them in case we want to utilize their functionality.

## Conclusion

In this topic, we looked at how Java handles long multi-line strings. In order to make them less cluttered and more visually appealing to developers, Java 15 introduced text blocks. Java text blocks remove the need for concatenating multiple lines of strings and for the vast majority of escape characters. A text block is defined with an opening and closing pair of triple quotes. Aside from stripping the leading and trailing indentation, all of the whitespaces are kept as they are, and there is no need to escape them.

Because escaped characters are processed after indented whitespace, you can use the new escape characters `\` and `\s` to override the `stripIndent`algorithm when needed. Adding `\` to the end of a line indicates that the newline character is only meant for more readable Java code and not to be kept in the resulting String. `\s` will alter how the trailing whitespace is stripped; any whitespace to the left of the `\s` is kept in the string. String interpolation can be achieved by using `replace`, `format`, or `formatted`. While their use is not necessary, the `stripIndent` and `translateEscapes` of `String`class expose the inner text block algorithms to the developer if needed. 