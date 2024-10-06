package part_02._03_Refactoring_Towards_an_Object_oriented_Design._10_Extracting_Duplicate_Logic;

import java.text.NumberFormat;

public class MortgageReport {

	private MortgageCalculator calculator;

	public MortgageReport(MortgageCalculator calculator) {
		this.calculator = calculator;
	}

	public void printMortgage() {
		double mortgage = calculator.calculateMortgage();
		String mortgageFormatted = NumberFormat.getCurrencyInstance().format(mortgage);
		System.out.println();
		System.out.println("MORTGAGE");
		System.out.println("--------");
		System.out.println("Monthly Payments: " + mortgageFormatted);
	}

	public void printPaymentSchedule() {
		System.out.println();
		System.out.println("PAYMENT SCHEDULE");
		System.out.println("----------------");
		for (short month = 1; month <= calculator.getYears() * MortgageCalculator.MONTHS_IN_YEAR; month++) {
			double balance = calculator.calculateBalance(month);
			System.out.println(NumberFormat.getCurrencyInstance().format(balance));
		}
	}

}
