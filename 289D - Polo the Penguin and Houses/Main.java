import java.math.BigInteger;
import java.util.Scanner;


public class Main {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		Scanner sc= new Scanner(System.in);
		int n=sc.nextInt(), k=sc.nextInt();
		BigInteger big=BigInteger.valueOf(n-k);
		big=big.modPow(big, BigInteger.valueOf(1000000007));
		BigInteger big2=BigInteger.valueOf(k);
		big2=big2.modPow(big2.subtract(BigInteger.ONE), BigInteger.valueOf(1000000007));
		System.out.println(big.multiply(big2).mod(BigInteger.valueOf(1000000007)));
	}

}