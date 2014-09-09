import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;


public class Main {
	static BufferedReader ln;	

	/**
	 * @param args
	 * @throws IOException 
	 * @throws NumberFormatException 
	 */
	public static void main(String[] args) throws NumberFormatException, IOException {
		String a = "lala.", b = "miao.", c="OMG>.< I don't know!";
		ln = new BufferedReader(new InputStreamReader(System.in));
		int n= Integer.parseInt(ln.readLine());
		for(int i=0;i<n;i++){
			String g = ln.readLine();
			if(g.startsWith(b) && g.endsWith(a))System.out.println(c);
			else{
				if(g.startsWith(b)){
					System.out.println("Rainbow's");
				}else if(g.endsWith(a)){
					System.out.println("Freda's");
				}else{
					System.out.println(c);
				}
			}
		}
		System.exit(0);
	}
}