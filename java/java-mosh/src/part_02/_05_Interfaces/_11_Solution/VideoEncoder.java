package part_02._05_Interfaces._11_Solution;

public class VideoEncoder implements Encoder {

	public void encode(Video video) {
		System.out.println("Encoding video...");
		System.out.println("Done!\n");
	}

}
