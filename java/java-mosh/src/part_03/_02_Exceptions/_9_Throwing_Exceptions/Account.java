package part_03._02_Exceptions._9_Throwing_Exceptions;

public class Account {

	public void deposit(float value) {
		// This method demonstrates defensive programming by validating input.
		// Key points:
		// - Defensive programming involves anticipating and handling potential errors
		// early.
		// - Validate method arguments to prevent improper use of the method.
		// - Use appropriate exceptions to indicate the type of error encountered.

		if (value <= 0) {
			// Throw an IllegalArgumentException if the deposit amount is zero or
			// negative.
			// This is an unchecked exception.
			throw new IllegalArgumentException("Deposit amount must be positive.");
		}

		// Proceed with deposit operation...
	}

}
