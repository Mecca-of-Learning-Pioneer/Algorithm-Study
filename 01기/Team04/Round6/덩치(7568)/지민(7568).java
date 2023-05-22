import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
 public static void main(String args[]) throws IOException {
	 BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	 StringTokenizer st = new StringTokenizer(br.readLine());
	 
	 int N = Integer.parseInt(st.nextToken());
	 int[][] p = new int [N][2];
	 
	 for(int i=0; i<N; i++){
		 st = new StringTokenizer(br.readLine());
		 for(int j=0; j<2 ;j++){
			 p[i][j] = Integer.parseInt(st.nextToken());
		 }
	 }
	 
	 for(int i=0; i<N; i++){
		 int rank = 1;
		 for(int j=0; j<N; j++) {
			 if(p[i][0]<p[j][0] && p[i][1]<p[j][1]) {
				 rank++;
			 }
		 }
		 System.out.print(rank + " ");
	 } 
	br.close();
 }
}
