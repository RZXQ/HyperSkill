package part_02._05_Interfaces._11_Solution;

public class EmailService implements Service{

	public void sendEmail(User user) {
		System.out.println("Notifying " + user.getEmail() + "...");
		System.out.println("Done!\n");
	}

}
