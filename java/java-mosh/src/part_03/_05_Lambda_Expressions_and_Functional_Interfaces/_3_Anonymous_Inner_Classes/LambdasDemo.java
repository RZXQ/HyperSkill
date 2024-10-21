package part_03._05_Lambda_Expressions_and_Functional_Interfaces._3_Anonymous_Inner_Classes;

public class LambdasDemo {

	public static void show() {
		greet(new ConsolePrinter());
	}

	public static void greet(Printer printer) {
		printer.print("Hello World");
	}

}
