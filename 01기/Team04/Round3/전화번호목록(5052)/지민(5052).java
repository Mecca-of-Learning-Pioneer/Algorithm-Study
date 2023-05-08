//오류...
package b;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.Arrays;

public class b_5052 {
    public static void main(String[] args) throws IOException {
    	BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    	BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
    	int t = Integer.parseInt(br.readLine());
    	for(int i=0; i<t; i++){
            int n = Integer.parseInt(br.readLine());
            String number[]=new String[n];
            
            for(int j=0; j<n; j++) {
            	number[j] = br.readLine();
            }
            Arrays.sort(number);
            
            if(check(n,number)){
            	bw.write("Yes\n");
            }else  bw.write("No\n");
    	}
    br.close();
    bw.close();
    }
    public static boolean check(int n, String[] number) {
        for(int i=0; i<n-1; i++) {
            if(number[i+1].startsWith(number[i])) {
            	return false;
            }
        }
        return true;
    }
}
