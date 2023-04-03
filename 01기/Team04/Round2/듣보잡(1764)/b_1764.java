//듣보잡
package b;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashMap;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;
import java.util.StringTokenizer;

public class b_1764 {
    public static void main(String[] args) throws IOException {

    	BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    	StringTokenizer st = new StringTokenizer(br.readLine());
    	int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());

        String names[]=new String[N+M];
        for(int i=0; i<N+M; i++) {
            names[i] = br.readLine();
        }

        HashMap<String, Integer> map = new HashMap<>();
        for(int i=0; i<names.length; i++) {
            if(map.containsKey(names[i])) {
                int count = (int)map.get(names[i]);
                map.put(names[i], count+1);
            }else {
            	map.put(names[i], 1);
            }
        }
        int both_count = 0;
        List<Map.Entry<String, Integer>> entryList = new LinkedList<>(map.entrySet());
        entryList.sort(HashMap.Entry.comparingByKey());
        for(Map.Entry<String, Integer> entry : entryList){
            if(entry.getValue()==2) both_count ++;
        }
        System.out.println(both_count);
        for(Map.Entry<String, Integer> entry : entryList){
            if(entry.getValue()==2) {
            	System.out.println(entry.getKey());
            }
        }
        br.close();
    }
}