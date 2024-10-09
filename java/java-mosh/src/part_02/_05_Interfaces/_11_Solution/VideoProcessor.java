package part_02._05_Interfaces._11_Solution;

public class VideoProcessor {

	private Encoder encoder;

	private Database database;

	private Service service;

	public VideoProcessor(Encoder encoder, Database database, Service service) {
		this.encoder = encoder;
		this.database = database;
		this.service = service;
	}

	public void process(Video video) {
		encoder.encode(video);
		database.store(video);
		service.sendEmail(video.getUser());
	}

}
