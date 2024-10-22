package stage_3;

import java.util.Scanner;

public class Main {

	private static final Scanner scanner = new Scanner(System.in);

	public static void main(String[] args) {
		int totalEarnings = getTotalEerned();
		int totalExpenses = getTotalExpenses();
		int netIncome = totalEarnings - totalExpenses;
		System.out.printf("Net income: $%d", netIncome);
	}

	private static int getTotalExpenses() {
		System.out.println("Staff expenses:");
		int staffExpenses = scanner.nextInt();
		System.out.println("Other expenses:");
		int otherExpenses = scanner.nextInt();
		return staffExpenses + otherExpenses;
	}

	private static int getTotalEerned() {
		int bubbleGumTotal = 202;
		int toffeeTotal = 118;
		int iceCreamTotal = 2250;
		int milkChocolateTotal = 1680;
		int doughnutTotal = 1075;
		int pancakeTotal = 80;
		int totalEarnings = bubbleGumTotal + toffeeTotal + iceCreamTotal + milkChocolateTotal + doughnutTotal
				+ pancakeTotal;

		System.out.println("Earned amount:");
		System.out.printf("Bubblegum: $%d\n", bubbleGumTotal);
		System.out.printf("Toffee: $%d\n", toffeeTotal);
		System.out.printf("Ice cream: $%d\n", iceCreamTotal);
		System.out.printf("Milk chocolate: $%d\n", milkChocolateTotal);
		System.out.printf("Doughnut: $%d\n", doughnutTotal);
		System.out.printf("Pancake: $%d\n", pancakeTotal);
		System.out.println();
		System.out.printf("Income: $%d\n", totalEarnings);
		return totalEarnings;
	}

}
