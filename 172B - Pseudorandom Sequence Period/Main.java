import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;


public class Main {
	static BufferedReader ln;

	/**
	 * @param args
	 * @throws IOException 
	 */
	public static void main(String[] args) throws IOException {
		ln=new BufferedReader(new InputStreamReader(System.in));
		String[] g=ln.readLine().split(" ");
		int a=Integer.parseInt(g[0]);
		int b=Integer.parseInt(g[1]);
		int m=Integer.parseInt(g[2]);
		int r=Integer.parseInt(g[3]);
		long[] nums=new long[100001];
		long p=0;
		while(true){
			p++;
			r=(a*r+b)%m;
			if(nums[r]==0)nums[r]=p;		
			else{
				System.out.println((p-nums[r]));
				break;
			}
		}
		System.exit(0);
	}

}
