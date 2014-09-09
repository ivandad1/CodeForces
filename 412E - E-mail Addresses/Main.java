import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;


public class Main {
	static BufferedReader ln;
	/**
	 * @param args
	 * @throws IOException 
	 */	
	public static void main(String[] args) throws IOException{
		ln=new BufferedReader(new InputStreamReader(System.in));
		String g = ln.readLine();	
		char[] cad = g.toCharArray();
		int leng = g.length();
		long total = 0;
		for(int i=1;i<leng;++i){
			if(cad[i]=='@'){
				int j=i-1;
				while(j>-1 && (Character.isLowerCase(cad[j]) || (Character.isDigit(cad[j])) || cad[j]=='_')){
					j--;
				}
				j++;
				boolean ok = true;
				while(!Character.isLowerCase(cad[j])){
					j++;
					if(j==leng){
						ok = false;
						break;
					}
				}			
				if(!(ok && i>j)){
					continue;
				}	
					
				int k=i+1;
				while(k<leng && (Character.isLowerCase(cad[k]) || Character.isDigit(cad[k]))){
					k++;
				}		
				if(k==leng){
					continue;
				}
				if(cad[k]!='.'){
					continue;
				}
				if(k==i+1){
					continue;
				}
				int l = k+1;
				while(l<leng && Character.isLowerCase(cad[l])){
					l++;
				}
				l--;
				long li = 0;
				for(int p=j;p<i;p++){
					if(Character.isLowerCase(cad[p]))
						li++;
				}				
				total+=li*(l-k);
			}
		}
		System.out.println(total);		
		System.exit(0);		
	}
}
