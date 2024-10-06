package part_02._03_Refactoring_Towards_an_Object_oriented_Design._8_Moving_Away_from_Static_Members;

import java.util.Scanner;

public class Console {

	private static Scanner scanner = new Scanner(System.in);

	public static double readNumber(String prompt) {
		return scanner.nextDouble();
	}

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