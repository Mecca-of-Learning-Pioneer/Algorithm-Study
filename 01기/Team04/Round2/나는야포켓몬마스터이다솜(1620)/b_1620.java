//포켓몬
package b;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashMap;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;
import java.util.StringTokenizer;

public class b_1620 {
    public static void main(String[] args) throws IOException {

    	BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    	StringTokenizer st = new StringTokenizer(br.readLine());
    	int N = Integer.parseInt(st.nextToken())+1;
        int M = Integer.parseInt(st.nextToken());

        String pocketmon[]=new String[N+1];
        HashMap<String, Integer> map = new HashMap<>();
        for(int i=1; i<N; i++) {
        	pocketmon[i] = br.readLine();
        	map.put(pocketmon[i], i);
        }
        String quiz[]=new String[M];
        for(int i=0; i<M; i++) {
        	quiz[i] = br.readLine();
        }

        List<Map.Entry<String, Integer>> entryList = new LinkedList<>(map.entrySet());
        for(int i=0; i<M; i++) {
            for(Map.Entry<String, Integer> entry : entryList){
                    if(quiz[i].equals(entry.getKey())) {
                    	System.out.println(entry.getValue());
                    	break;
                    }else if(quiz[i].matches("-?\\d+(\\.\\d+)?")==true&&entry.getValue()==Integer.parseInt(quiz[i])) {
                    	System.out.println(entry.getKey());
                    	break;
                    }else continue;
            }
        }
        br.close();
    }
}