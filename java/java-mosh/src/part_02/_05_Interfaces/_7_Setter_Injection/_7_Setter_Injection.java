package part_02._05_Interfaces._7_Setter_Injection;

public class _7_Setter_Injection {

	public static void main(String[] args) {
		var calculator = new TaxCalculator2024(10_000);
		var report = new TaxReport(calculator);
		report.show();

		// reset the implementation of TaxCalculator
		report.setCalculator(new TaxCalculator2025());
		report.show();
	}

}
