package Round03;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

public class bj_5052 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));


        int t = Integer.parseInt(br.readLine());
        StringBuilder sb = new StringBuilder();

        while (t-- > 0){
            int n = Integer.parseInt(br.readLine());
            String[] nums = new String[n];
            for (int i=0; i<n; i++){
                nums[i] = br.readLine();
            }
            Arrays.sort(nums);
            boolean check = true;
            for (int j=1; j<n; j++){
                if (nums[j].startsWith(nums[j-1])){
                    check = false;
                    break;
                }
            }

            if (!check) sb.append("NO").append("\n");
            else sb.append("YES").append("\n");

        }
        System.out.println(sb);

    }
}
