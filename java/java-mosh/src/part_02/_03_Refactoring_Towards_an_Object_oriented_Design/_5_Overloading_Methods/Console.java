package part_02._03_Refactoring_Towards_an_Object_oriented_Design._5_Overloading_Methods;

import java.util.Scanner;

public class Console {

	/// 1. Why static ? single Instance: By making it static, there is only one instance
	/// of Scanner shared by all methods in the Console class. This avoids the overhead of
	/// creating a new Scanner object each time a method is called.
	///
	///
	/// 2. Thread issue:
	/// there will be one static Scanner object in memory that is shared and used by both
	/// methods in the Console class.
	/// However, the behavior of this static Scanner object when accessed simultaneously
	/// by multiple methods depends on the context in which these methods are invoked.
	///
	/// In a typical single-threaded application, there won't be an issue because method
	/// calls will be executed
	/// sequentially, and the same Scanner object will handle the input. However, in a
	/// multithreaded environment, where
	/// multiple threads might call readNumber(String) and readNumber(String, double,
	/// double) concurrently, there could be
	/// conflicts. Since the Scanner object is not thread-safe, simultaneous access by
	/// multiple threads can lead to
	/// unpredictable behavior, such as input being read incorrectly or input being read
	/// by the wrong thread.
	///
	/// Here is how you might address this issue:
	/// Locking: Synchronize access to the scanner to ensure that only one thread uses it
	/// at a time.
	/// Thread-local Scanner:
	/// Use separate Scanner instances for each thread.
	private static Scanner scanner = new Scanner(System.in); // using private because
																// scanner object is used
																// internally inside
																// this class

	public static double readNumber(String prompt) {
		return scanner.nextDouble();
	}

	// Why using static ? because we don't have multiple consoles, it's better to use
	// static
	public static double readNumber(String prompt, double min, double max) {
		double value;
		while (true) {
			System.out.print(prompt);
			value = scanner.nextDouble();
			if (value >= min && value <= max) {
				break;
			}
			System.out.println("Enter a value between " + min + " and " + max);
		}
		return value;
	}

}