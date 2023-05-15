package Round05;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class bj_9093 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();

        int T = Integer.parseInt(br.readLine());

        for (int k = 0; k < T; k++) {
            StringTokenizer st = new StringTokenizer(br.readLine());
                while (st.hasMoreTokens()){
                   StringBuilder sbb = new StringBuilder(st.nextToken());
                   sb.append(sbb.reverse()+" ");

            }
                sb.append("\n");
        }
        System.out.println(sb);
    }
}
