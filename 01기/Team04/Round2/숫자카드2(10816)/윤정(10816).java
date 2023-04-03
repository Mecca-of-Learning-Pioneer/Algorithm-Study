package Round02;
//시간초과
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collections;
import java.util.StringTokenizer;

public class bj_10816 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        ArrayList<Integer> myCard = new ArrayList<>(); //가지고 있는 카드
        ArrayList<Integer> card = new ArrayList<>(); //주어지는 카드
        ArrayList<Integer> frequencyT = new ArrayList<>(); //빈도수 저장

        int N = Integer.parseInt(st.nextToken());
        st = new StringTokenizer(br.readLine());
        for (int i=0; i<N; i++){
            myCard.add(Integer.parseInt(st.nextToken()));
        }

        st = new StringTokenizer(br.readLine());
        int M = Integer.parseInt(st.nextToken());
        st = new StringTokenizer(br.readLine());
        for (int i=0; i<M; i++){
            card.add(Integer.parseInt(st.nextToken()));
        }

        for (int i=0; i<M; i++){
            int time = Collections.frequency(myCard, card.get(i));
            frequencyT.add(time);
        }
        for(int num : frequencyT) {
            System.out.print(num+" ");
        }

    }
}
