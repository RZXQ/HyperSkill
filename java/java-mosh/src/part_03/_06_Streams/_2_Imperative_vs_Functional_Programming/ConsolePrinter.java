package part_03._06_Streams._2_Imperative_vs_Functional_Programming;

public class ConsolePrinter implements Printer {

	@Override
	public void print(String message) {
		System.out.println(message);
	}

}
