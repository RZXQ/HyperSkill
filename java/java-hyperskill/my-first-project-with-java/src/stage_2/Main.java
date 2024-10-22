package stage_2;

public class Main {

	public static void main(String[] args) {
		int bubbleGumTotal = 202;
		int toffeeTotal = 118;
		int iceCreamTotal = 2250;
		int milkChocolateTotal = 1680;
		int doughnutTotal = 1075;
		int pancakeTotal = 80;

		double totalEarning;
		totalEarning = bubbleGumTotal + toffeeTotal + iceCreamTotal + milkChocolateTotal + doughnutTotal + pancakeTotal;

		System.out.println("Earned amount: ");
		System.out.println("Bubblegum: " + "$" + bubbleGumTotal);
		System.out.println("Toffee: " + "$" + toffeeTotal);
		System.out.println("Ice cream: " + "$" + iceCreamTotal);
		System.out.println("Milk chocolate: " + "$" + milkChocolateTotal);
		System.out.println("Doughnut: " + "$" + doughnutTotal);
		System.out.println("Pancake: " + "$" + pancakeTotal);
		System.out.println();
		System.out.println("Income: " + "$" + totalEarning);
	}

}
