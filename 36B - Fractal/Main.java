import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.StringTokenizer;


public class Main {
	private static BufferedReader br;

	/**
	 * @param args
	 * @throws IOException 
	 */
	public static void main(String[] args) throws IOException {
		br = new BufferedReader(new FileReader("input.txt"));
		StringTokenizer st = new StringTokenizer(br.readLine());
		int n = Integer.parseInt(st.nextToken());
		int k = Integer.parseInt(st.nextToken());
		fractal f = new fractal('.');
        char[][] ff = new char[n][];
        for(int i=0;i<n;++i){
        	ff[i]=br.readLine().toCharArray();
        }
        fractal.fractal_model = ff;
        for(int i=0;i<k;i++){
        	f.multiply();
        }
        BufferedWriter bw = new BufferedWriter(new FileWriter("output.txt"));
        st = new StringTokenizer(f.toString(),"\n");
        while(st.hasMoreTokens()){
        	bw.append(st.nextToken());
        	bw.newLine();
        }
        bw.flush();
        bw.close();
        System.exit(0);
	}

}

class fractal {
    static char[][] fractal_model;
    char in;
    fractal[][] f;
    boolean solo;

    public fractal(char in) {
        this.in = in;
        solo = true;
    }

    public void multiply() {
        int w = fractal_model.length;
        int h = fractal_model[0].length;
        if (solo) {
            solo = false;
            f = new fractal[w][h];
            if (in == '.') {
                for (int i = 0; i < w; i++) {
                    for (int j = 0; j < h; j++) {
                        f[i][j] = new fractal(fractal_model[i][j]);
                    }
                }
            } else {
                for (int i = 0; i < w; i++) {
                    for (int j = 0; j < h; j++) {
                        f[i][j] = new fractal('*');
                    }
                }
            }
        } else {
            for (int i = 0; i < w; i++) {
                for (int j = 0; j < h; j++) {
                    f[i][j].multiply();
                }
            }
        }
    }

    @Override
    public String toString() {
        if (solo) {
            return "" + in;
        } else {
            int nl = f[0][0].toString().split("\n").length;
            String[][][] fff = new String[fractal_model.length][fractal_model[0].length][nl];
            for (int i = 0; i < fractal_model.length; i++) {
                for (int j = 0; j < fractal_model[0].length; j++) {
                    fff[i][j] = f[i][j].toString().split("\n");
                }
            }
            String tor = "";
            for (int i = 0; i < fractal_model.length; i++) {
                for (int k = 0; k < nl; k++) {
                    for (int j = 0; j < fractal_model[0].length; j++) {
                        tor += fff[i][j][k];
                    }
                    tor += "\n";
                }
            }
            return tor.trim();
        }
    }
}