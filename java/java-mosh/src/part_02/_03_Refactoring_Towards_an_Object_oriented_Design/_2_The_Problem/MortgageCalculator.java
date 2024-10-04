package part_02._03_Refactoring_Towards_an_Object_oriented_Design._2_The_Problem;

import java.text.NumberFormat;
import java.util.Scanner;

/// Detailed Explanation of Method Ordering:
/// 1. Main Method (main method):
/// Position: Placed at the very top.
/// Reason: The main method is the entry point of the program. It is the first method called when the program starts. Placing it at the top makes it easy to locate and understand the starting point of the application.
///
/// 2. Public Methods:
/// Position: Placed after the main method.
/// Reason: Public methods form the external interface of the class. These methods are intended to be called from outside the class. Placing them next helps readers understand how the class is intended to be used from an outside perspective.
///
/// 3. Primary Functionality Methods:
/// Position: Placed after the public methods.
/// Reason: These methods implement the core functionality of the class. By placing them after the public methods, readers can first see how the class interfaces with the outside world and then delve into the main functionality. Examples of these in the provided code are printMortgage and printPaymentSchedule.
///
/// 4. Utility Methods:
/// Position: Placed after the primary functionality methods.
/// Reason: Utility methods support the implementation of the primary functionality. These methods are usually private and only used within the class. Placing them at the bottom allows readers to look at the main logic first and then refer to these helper methods as needed. Examples are calculateMortgage and calculateBalance.
public class MortgageCalculator {

	static final byte MONTHS_IN_YEAR = 12;
	static final byte PERCENT = 100;

	public static void main(String[] args) {
		int principal = (int) readNumber("Principal: ", 1000, 1_000_000);
		float annualInterest = (float) readNumber("Annual Interest Rate: ", 1, 30);
		byte years = (byte) readNumber("Period (Years): ", 1, 30);

		printMortgage(principal, annualInterest, years);
		printPaymentSchedule(years, principal, annualInterest);
	}

	public static double readNumber(String prompt, double min, double max) {
		Scanner scanner = new Scanner(System.in);
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

	private static void printMortgage(int principal, float annualInterest, byte years) {
		double mortgage = calculateMortgage(principal, annualInterest, years);
		String mortgageFormatted = NumberFormat.getCurrencyInstance().format(mortgage);
		System.out.println();
		System.out.println("MORTGAGE");
		System.out.println("--------");
		System.out.println("Monthly Payments: " + mortgageFormatted);
	}

	private static void printPaymentSchedule(byte years, int principal, float annualInterest) {
		System.out.println();
		System.out.println("PAYMENT SCHEDULE");
		System.out.println("----------------");
		for (short month = 0; month < years * MONTHS_IN_YEAR; month++) {
			double balance = calculateBalance(principal, annualInterest, years, month);
			System.out.println(NumberFormat.getCurrencyInstance().format(balance));
		}
	}

	private static double calculateMortgage(int principal, float annualInterest, byte years) {
		float monthlyInterest = annualInterest / PERCENT / MONTHS_IN_YEAR;
		short numberOfPayments = (short) (years * MONTHS_IN_YEAR);
		return principal * (monthlyInterest * Math.pow(1 + monthlyInterest, numberOfPayments))
				/ (Math.pow(1 + monthlyInterest, numberOfPayments) - 1);
	}

	private static double calculateBalance(int principal, float annualInterest, byte years,
			short numberOfPaymentsMade) {
		float monthlyInterest = annualInterest / PERCENT / MONTHS_IN_YEAR;
		short numberOfPayments = (short) (years * MONTHS_IN_YEAR);
		double balance = principal
				* (Math.pow((1 + monthlyInterest), numberOfPayments)
						- (Math.pow((1 + monthlyInterest), numberOfPaymentsMade)))
				/ (Math.pow((1 + monthlyInterest), numberOfPayments) - 1);
		return balance;
	}

}