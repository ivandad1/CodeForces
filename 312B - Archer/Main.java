import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;


public class Main {

	/**
	 * @param args
	 * @throws IOException 
	 * @throws NumberFormatException 
	 */
	public static void main(String[] args) throws NumberFormatException, IOException {		
		Scanner sc = new Scanner(System.in);
		double a,b,c,d;
		a = sc.nextInt();
		b = sc.nextInt();
		c = sc.nextInt();
		d = sc.nextInt();
		double a1 = a/b;
		double b1 = 1-a1;
		double c1 = 1-c/d;
		double ans = a1*(1/(1-(b1*c1)));
		System.out.println(ans);
		System.exit(0);
	}

}