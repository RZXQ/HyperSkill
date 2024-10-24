package stage_3;

import java.util.Scanner;

public class Zookeeper {

	public static void main(String[] args) {
		String camel = """
				Switching on the camera in the camel habitat...
				 ___.-''''-.
				/___  @    |
				',,,,.     |         _.'''''''._
				     '     |        /           \\
				     |     \\    _.-'             \\
				     |      '.-'                  '-.
				     |                               ',
				     |                                '',
				      ',,-,                           ':;
				           ',,| ;,,                 ,' ;;
				              ! ; !'',,,',',,,,'!  ;   ;:
				             : ;  ! !       ! ! ;  ;   :;
				             ; ;   ! !      ! !  ; ;   ;,
				            ; ;    ! !     ! !   ; ;
				            ; ;    ! !    ! !     ; ;
				           ;,,      !,!   !,!     ;,;
				           /_I      L_I   L_I     /_I
				Look at that! Our little camel is sunbathing!""";

		String lion = """
				Switching on the camera in the lion habitat...
				                                               ,w.
				                                             ,YWMMw  ,M  ,
				                        _.---.._   __..---._.'MMMMMw,wMWmW,
				                   _.-""        '''           YP"WMMMMMMMMMb,
				                .-' __.'                   .'     MMMMW^WMMMM;
				    _,        .'.-'"; `,       /`     .--""      :MMM[==MWMW^;
				 ,mM^"     ,-'.'   /   ;      ;      /   ,       MMMMb_wMW"  @\\
				,MM:.    .'.-'   .'     ;     `\\    ;     `,     MMMMMMMW `"=./`-,
				WMMm__,-'.'     /      _.\\      F'''-+,,   ;_,_.dMMMMMMMM[,_ / `=_}
				"^MP__.-'    ,-' _.--""   `-,   ;       \\  ; ;MMMMMMMMMMW^``; __|
				           /   .'            ; ;         )  )`{  \\ `"^W^`,   \\  :
				          /  .'             /  (       .'  /     Ww._     `.  `"
				         /  Y,              `,  `-,=,_{   ;      MMMP`""-,  `-._.-,
				        (--, )                `,_ / `) \\/"")      ^"      `-, -;"\\:
				The lion is roaring!""";

		String deer = """
				Switching on the camera in the deer habitat...
				   /|       |\\
				`__\\       //__'
				   ||      ||
				 \\__`\\     |'__/
				   `_\\   //_'
				   _.,:---;,._
				   \\_:     :_/
				     |@. .@|
				     |     |
				     ,\\.-./ \\
				     ;;`-'   `---__________-----.-.
				     ;;;                         \\_\\
				     ';;;                         |
				      ;    |                      ;
				       \\   \\     \\        |      /
				        \\_, \\    /        \\     |\\
				          |';|  |,,,,,,,,/ \\    \\ \\_
				          |  |  |           \\   /   |
				          \\  \\  |           |  / \\  |
				           | || |           | |   | |
				           | || |           | |   | |
				           | || |           | |   | |
				           |_||_|           |_|   |_|
				          /_//_/           /_/   /_/
				Our 'Bambi' looks hungry. Let's go to feed it!""";

		String goose = """
				Switching on the camera in the goose habitat...

				                                    _
				                                ,-"" "".
				                              ,'  ____  `.
				                            ,'  ,'    `.  `._
				   (`.         _..--.._   ,'  ,'        \\    \\
				  (`-.\\    .-""        ""'   /          (  d _b
				 (`._  `-"" ,._             (            `-(   \\
				 <_  `     (  <`<            \\              `-._\\
				  <`-       (__< <           :
				   (__        (_<_<          ;
				    `------------------------------------------
				The goose is staring intently at you... Maybe it's time to change the channel?""";

		String bat = """
				Switching on the camera in the bat habitat...
				_________________               _________________
				 ~-.              \\  |\\___/|  /              .-~
				     ~-.           \\ / o o \\ /           .-~
				        >           \\  W  //           <
				       /             /~---~\\             \\
				      /_            |       |            _\\
				         ~-.        |       |        .-~
				            ;        \\     /        i
				           /___      /\\   /\\      ___\\
				                ~-. /  \\_/  \\ .-~
				                   V         V
				This bat looks like it's doing fine.""";

		String rabbit = """
				Switching on the camera in the rabbit habitat...
				         ,
				        /|      __
				       / |   ,-~ /
				      Y :|  //  /
				      | jj /( .^
				      >-"~"-v"
				     /       Y
				    jo  o    |
				   ( ~T~     j
				    >._-' _./
				   /   "~"  |
				  Y     _,  |
				 /| ;-"~ _  l
				/ l/ ,-"~    \\
				\\//\\/      .- \\
				 Y        /    Y
				 l       I     !
				 ]\\      _\\    /"\\
				(" ~----( ~   Y.  )
				It looks like we will soon have more rabbits!""";

		String[] zoos = { camel, lion, deer, goose, bat, rabbit };

		System.out.print("Please enter the number of the habitat you would like to view:");
		Scanner scanner = new Scanner(System.in);
		int viewNum = scanner.nextInt();

		switch (viewNum) {
			case 0:
				System.out.println(zoos[0]);
				break;
			case 1:
				System.out.println(zoos[1]);
				break;
			case 2:
				System.out.println(zoos[2]);
				break;
			case 3:
				System.out.println(zoos[3]);
				break;
			case 4:
				System.out.println(zoos[4]);
				break;
			case 5:
				System.out.println(zoos[5]);
				break;

		}

		System.out.println("""
				---
				You've reached the end of the program. To check another habitat, please restart the watcher.""");
	}

}