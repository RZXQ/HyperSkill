package part_02._03_Refactoring_Towards_an_Object_oriented_Design._5_Overloading_Methods;

import java.util.Scanner;

public class Console {

	/// 1. Why static ? single Instance: By making it static, there is only one instance
	/// of Scanner shared by all methods in the Console class. This avoids the overhead of
	/// creating a new Scanner object each time a method is called.
	///
	/// a. Static Fields and Methods:
	/// Single Copy: Static fields and methods have a single copy that is shared across
	/// all instances of the class (or even if there are no instances at all).
	/// Class Level: They belong to the class itself rather than any specific instance.
	/// When the class is loaded into memory, the static fields and static methods are
	/// initialized.
	/// Access: Static methods cannot directly access instance (non-static) fields or
	/// methods. They can only directly access other static fields or methods.
	///
	/// b. Non-Static (Instance) Fields and Methods:
	/// Separate Copies: Each instance of the class has its own copy of the instance
	/// fields.
	/// Instance Level: These fields and methods belong to the specific instance. They are
	/// allocated in memory when the instance is created.
	/// Access: Instance methods can access both instance fields and methods, as well as
	/// static fields and methods.
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