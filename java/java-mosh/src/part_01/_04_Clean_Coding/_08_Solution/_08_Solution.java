package part_01._04_Clean_Coding._08_Solution;

import java.text.NumberFormat;
import java.util.Scanner;

public class _08_Solution {

	static final byte MONTHS_IN_YEAR = 12;

	static final byte PERCENT = 100;

	public static void main(String[] args) {
		int principal = (int) readNumber("Principal: ", 1000, 1_000_000);
		float annualInterest = (float) readNumber("Annual Interest Rate: ", 1, 30);
		byte years = (byte) readNumber("Period (Years): ", 1, 30);

		double mortgage = calculateMortgage(principal, annualInterest, years);
		String mortgageFormatted = NumberFormat.getCurrencyInstance().format(mortgage);
		System.out.println();
		System.out.println("MORTGAGE");
		System.out.println("--------");
		System.out.println("Monthly Payments: " + mortgageFormatted);

		System.out.println();
		System.out.println("PAYMENT SCHEDULE");
		System.out.println("----------------");
		for (short month = 0; month < years * MONTHS_IN_YEAR; month++) {
			double balance = calculateBalance(principal, annualInterest, years, month);
			System.out.println(NumberFormat.getCurrencyInstance().format(balance));
		}
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
			System.out.println("Enter a value between " + min + "and " + max);
		}

		return value;
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
