package part_03._06_Streams._2_Imperative_vs_Functional_Programming;

// Functional Interface: an interface with a single abstract method
// The default keyword in interface: provides a default implementation for a method
public interface Printer {

	// This is a functional interface with one abstract method

	void print(String message);

	// Default method providing a default implementation
	default void printTwice(String message) {
		System.out.println(message);
		System.out.println(message);
	}

}