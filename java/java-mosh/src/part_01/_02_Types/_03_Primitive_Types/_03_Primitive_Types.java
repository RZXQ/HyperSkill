package part_01._02_Types._03_Primitive_Types;

/// Variable types:
/// - primitive type: for storing simple values
/// - reference type: for storing complex objects
///
/// ---
///
/// Bytes and range:
///
/// | Primitive Type | Size     | Range                                                |
/// |----------------|----------|------------------------------------------------------|
/// | byte           | 8-bit    | -128 to 127                                          |
/// | short          | 16-bit   | -32,768 to 32,767                                    |
/// | int            | 32-bit   | -2^31 to 2^31 - 1 (-2,147,483,648 to 2,147,483,647)  |
/// | long           | 64-bit   | -2^63 to 2^63 - 1 (-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807) |
/// | float          | 32-bit   | Approximately ±3.40282347E+38F (6-7 significant decimal digits)              |
/// | double         | 64-bit   | Approximately ±1.79769313486231570E+308 (15 significant decimal digits)     |
/// | char           | 16-bit   | 0 to 65,535 (Unsigned, represents Unicode characters)                        |
/// | boolean        | N/A      | true or false                                                                 |
public class _03_Primitive_Types {

	public static void main(String[] args) {
		byte age = 30;
		long viewsCount = 3_123_456_789L;
		float price = 10.99F;
		char letter = 'A';
		boolean isEligible = false;
	}

}
