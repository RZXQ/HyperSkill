package part_03._03_Generics._9_Generic_Methods;

import org.jetbrains.annotations.Contract;

/// 1. **Generic Methods**:
///    - A generic method is a method that has its own type parameter(s).
///    - You can declare a generic method inside a non-generic class.
///    - This allows the method to operate on different types specified by the type parameter.
///
/// 2. **Using the Comparable Interface**:
///    - To compare two objects of a generic type `T`, `T` must implement the `Comparable` interface.
///    - This ensures that the `compareTo` method is available for comparing objects of type `T`.
///    - We specify this constraint with `<T extends Comparable<T>>`.
///
/// 3. **Understanding `@Contract(pure = true)`**:
///    - The `@Contract` annotation comes from the JetBrains annotations library.
///    - `pure = true` indicates that the method has no side effects; it doesn't modify any objects or fields.
///    - This helps code analysis tools (like IntelliJ IDEA) optimize and understand the code.
public class Utils {

	@Contract(pure = true)
	public static <T extends Comparable<T>> T max(T first, T second) {
		return first.compareTo(second) < 0 ? second : first;
	}

}
