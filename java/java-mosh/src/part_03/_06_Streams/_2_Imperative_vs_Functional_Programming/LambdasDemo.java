package part_03._06_Streams._2_Imperative_vs_Functional_Programming;

public class LambdasDemo {

	public static void show() {
		greet(new ConsolePrinter());
	}

	public static void greet(Printer printer) {
		printer.print("Hello World");
	}

}
