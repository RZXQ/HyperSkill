package part_02._02_Classes._15_Static_Members;

/// 1. A class can have two types of members: instance members and static members.
/// 2. Instance members belong to individual instances (objects) of the class.
/// 3. Static members belong to the class itself and are shared across all instances of the class.
///    - Static fields are shared among all objects of the class.
///    - Static methods can be called on the class itself and can access other static fields and methods directly.
/// 4. The "main" method is declared as static because the JVM calls it without needing to instantiate an object of the class.

public class _15_Static_Members {

	public static void main(String[] args) {
		Employee employee1 = new Employee(50_000, 20);
		Employee.printNumberOfEmployees();

		int wage = employee1.calculateWage();
		System.out.println(wage);
	}

}