package Round02;
//시간초과
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class bj_1764_2 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());
        int count = 0;

        HashSet<String> notH = new HashSet<>();
        for (int i=0; i<N; i++){
            notH.add(br.readLine());
        }

        ArrayList<String> both = new ArrayList<>();

        for (int i=0; i<M; i++){
            String s = br.readLine();
            if (notH.contains(s)){
                both.add(s);
                count++;
            }
        }
        Collections.sort(both);
        System.out.println(count);
        for (String s : both) {
            System.out.println(s);
        }



    }
}
