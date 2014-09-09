import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;


public class Main {

    /**
     * @param args
     * @throws IOException 
     */
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String g = br.readLine();
        StringBuilder sb = new StringBuilder(g);
        String gg = sb.reverse().toString();
        StringTokenizer st = new StringTokenizer("X"+g+"X","BCDEFGJKLNPQRSZ");
        
        if(g.equals(gg) && st.countTokens()==1){
            System.out.println("YES");
        }else{
            System.out.println("NO");
        }
        System.exit(0);

    }

}
