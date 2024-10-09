package part_02._05_Interfaces._11_Solution;

public class Main {

	public static void main(String[] args) {
		var video = new Video();
		video.setFileName("birthday.mp4");
		video.setTitle("Jennifer's birthday");
		video.setUser(new User("john@domain.com"));

		var encoder = new VideoEncoder();
		var database = new VideoDatabase();
		var service = new EmailService();

		var processor = new VideoProcessor(encoder, database, service);
		processor.process(video);
	}

}
