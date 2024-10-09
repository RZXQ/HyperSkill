package part_02._05_Interfaces._13_Static_Methods;

public abstract class AbstractTaxCalculator implements TaxCalculator {

	// what if we need to reuse this logic across all classes? use abstract class
	protected double getTaxableIncome(double income, double expenses) {
		return income - expenses;
	};

}
