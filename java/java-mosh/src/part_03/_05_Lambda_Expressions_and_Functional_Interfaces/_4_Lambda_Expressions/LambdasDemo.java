package part_03._05_Lambda_Expressions_and_Functional_Interfaces._4_Lambda_Expressions;

public class LambdasDemo {

	public static void show() {
		greet(new Printer() {
			@Override
			public void print(String message) {
				System.out.println(message);
			}
		});
	}

	public static void greet(Printer printer) {
		printer.print("Hello World");
	}

}