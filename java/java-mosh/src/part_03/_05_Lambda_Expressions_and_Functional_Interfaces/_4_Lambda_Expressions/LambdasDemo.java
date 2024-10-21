package part_03._05_Lambda_Expressions_and_Functional_Interfaces._4_Lambda_Expressions;

public class LambdasDemo {

	public static void show() {
		// #1. Full version of a lambda expression:
		// This lambda expression explicitly defines the parameter type (String) and uses
		// a block body.
		greet((String message) -> {
			System.out.println(message);
		});

		// #2. Simplified version of a lambda expression:
		// Here, the parameter type is inferred and a single-line expression is used,
		// removing the need for curly braces.
		greet(message -> System.out.println(message));

		// #3. Method reference:
		// Instead of using a lambda expression, we use a method reference to achieve the
		// same result.
		// This is a shorthand that refers to an existing method by name and type.
		greet(System.out::println);

		// #4. Assign anonymous inner class (as a lambda):
		// Demonstrating that lambda expressions are objects, we can assign a lambda to a
		// variable.
		Printer printer = message -> System.out.println(message);
	}

	public static void greet(Printer printer) {
		// This method accepts a Printer interface and calls its print method.
		printer.print("Hello World");
	}

}