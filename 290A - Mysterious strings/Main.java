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
		String[] nombres = {"Washington",
				"Adams", 
				"Jefferson", 
				"Madison", 
				"Monroe",
				"Adams",  
				"Jackson",
				"Van Buren", 
				"Harrison",
				"Tyler",
				"Polk",
				"Taylor",
				"Fillmore",
				"Pierce",
				"Buchanan",
				"Lincoln",
				"Johnson",
				"Grant",
				"Hayes" ,
				"Garfield",
				"Arthur",
				"Cleveland",
				"Harrison",
				"Cleveland",
				"McKinley",
				"Roosevelt",
				"Taft",
				"Wilson",
				"Harding" ,
				"Coolidge" ,
				"Hoover",
				"Roosevelt",
				"Truman",
				"Eisenhower",
				"Kennedy",
				"Johnson" ,
				"Nixon",
				"Ford",
				"Carter",
				"Reagan",
				"Bush" ,
				"Clinton" ,
				"Bush",
				"Obama"};
		int n=Integer.parseInt(ln.readLine());
		System.out.println(nombres[n-1]);
		System.exit(0);
	}
}