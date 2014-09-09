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
        ln=new BufferedReader(new InputStreamReader(System.in));
        int n=Integer.parseInt(ln.readLine());
        if(n>2 && n%2==0)System.out.println("YES");
        else System.out.println("NO");
        System.exit(0);

    }

}