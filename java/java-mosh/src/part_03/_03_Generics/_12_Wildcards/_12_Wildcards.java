package part_03._03_Generics._12_Wildcards;

public class _12_Wildcards {

	public static void main(String[] args) {
		User user = new Instructor(10);
		Utils.printUser(new Instructor(10));

		var users = new GenericList<User>();
		Utils.printUsersExtends(users);

		var instructors = new GenericList<Instructor>();
		Utils.printUsersExtends(instructors);
	}

}