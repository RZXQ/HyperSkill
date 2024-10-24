package part_03._05_Lambda_Expressions_and_Functional_Interfaces._10_The_Supplier_Interface;

import java.util.function.Supplier;

/// This class demonstrates the usage of the Supplier functional interface
/// In this example, a Supplier is used to generate a random number.
///
/// You might wonder: why not just use `System.out.println(Math.random());`?
/// That's a good question! Here's why using a Supplier can be useful:
///
/// 1. **Reusability**:
///    - By creating a Supplier, you can reuse the code to generate a random number in different places.
///    - For instance, if you need a random number in multiple methods, you can use the same Supplier instead of writing `Math.random()` everywhere.
///
/// 2. **Testability**:
///    - In testing, you might want to replace the random number generator with a fixed number to make tests predictable.
///    - Using a Supplier makes it easy to replace the random number generation logic with a fixed value or different logic when testing.
///
/// 3. **Separation of Concerns**:
///    - Using a Supplier separates the logic of generating a random number from the logic of using it.
///    - This makes your code cleaner and easier to understand. You know exactly where the random number generation is happening.
///
/// 4. **Delayed Execution**:
///    - With `Math.random()`, the number is generated immediately.
///    - With the Supplier, the number is generated only when you call the `get()` method.
///    - This can be useful if you want to delay the generation of the random number until a specific point in your code.
public class LambdasDemo {

	public static void show() {
		/// Creates a Supplier that generates a random double value
		Supplier<Double> getRandom = () -> Math.random();
		/// Retrieves the random double value by calling the get method of the Supplier
		var random = getRandom.get();
		/// Prints the random double value to the console
		System.out.println(random);
	}

}