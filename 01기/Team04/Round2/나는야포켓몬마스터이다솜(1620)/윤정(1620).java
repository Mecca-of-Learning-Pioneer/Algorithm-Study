package Round02;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashMap;
import java.util.Map;
import java.util.StringTokenizer;

public class bj_1620 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());

        Map<String, String > poketmon = new HashMap<>();

        for (int i=1; i<=N; i++){
            String s = br.readLine();
            poketmon.put(s, Integer.toString(i));
            poketmon.put(Integer.toString(i), s);
        }

        StringBuilder sb = new StringBuilder(M);
        for (int i=0; i<M; i++){
            String s = br.readLine();
            sb.append(poketmon.get(s) + "\n");
        }
        System.out.print(sb);
    }
}
