import java.util.Scanner;

public class Hulk {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		String res = "";
		for (int i = 1; i <= n; i++) {
			if ((i & 1) == 0)
				res += "I love";
			else
				res += "I hate";
			if (i != n)
				res += " that ";
			else
				res += " it";
		}
		System.out.println(res);
	}

}
