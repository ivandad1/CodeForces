import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Scanner;


public class Main {
	static BufferedReader ln;

	/**
	 * @param args
	 * @throws IOException 
	 * @throws NumberFormatException 
	 */
	public static void main(String[] args) throws NumberFormatException, IOException {
		Scanner sc= new Scanner(System.in);
		long a,b,c;
		a=sc.nextLong();
		b=sc.nextLong();
		c=a+b;
		String at=""+a;
		String bt=""+b;
		String ct=""+c;
		at=at.replaceAll("0", "");
		bt=bt.replaceAll("0", "");
		ct=ct.replaceAll("0", "");
		a=Long.parseLong(at);
		b=Long.parseLong(bt);
		c=Long.parseLong(ct);
		if(a+b==c)System.out.println("YES");
		else System.out.println("NO");
		System.exit(0);
	}
}