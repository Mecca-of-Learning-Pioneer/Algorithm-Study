package Round02;
//시간초과
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class bj_1269 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int A = Integer.parseInt(st.nextToken());
        int B = Integer.parseInt(st.nextToken());

        String[] Aset = new String[A];
        String[] Bset = new String[B];

        st = new StringTokenizer(br.readLine());
        for (int i=0; i<A; i++){
            Aset[i] = st.nextToken();
        }

        st = new StringTokenizer(br.readLine());
        for (int i=0; i<B; i++){
            Bset[i] = (st.nextToken());
        }

        int countA = 0;
        for (int i=0; i<B; i++){
            for (int j=0; j<A; j++){
                if (Aset[j].equals(Bset[i]))
                    countA++;
            }
        }

        int countB = 0;
        for (int i=0; i<A; i++){
            for (int j=0; j<B; j++){
                if (Bset[j].equals(Aset[i]))
                    countB++;
            }
        }

        System.out.print(Aset.length-countA+Bset.length-countB);

    }
}
