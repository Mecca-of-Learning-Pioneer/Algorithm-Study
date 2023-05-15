package Round05;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Stack;
import java.util.StringTokenizer;

public class bj_10828 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Stack<Integer> stack = new Stack<>();
        int N = Integer.parseInt(br.readLine());
        System.out.println();
        for (int i=0; i<N; i++){
            StringTokenizer st = new StringTokenizer(br.readLine());
            String s = st.nextToken();

            if (s.equals("push"))
                stack.push(Integer.parseInt(st.nextToken()));
            if (s.equals("pop")){
                if (stack.isEmpty())
                    System.out.println("-1");
                else
                    System.out.println(stack.pop());
            }
            if (s.equals("size"))
                System.out.println(stack.size());
            if (s.equals("empty")){
                if (stack.isEmpty())
                    System.out.println("1");
                else
                    System.out.println("0");
            }
            if (s.equals("top")){
                if (stack.isEmpty()){
                    System.out.println("-1");
                }
                else System.out.println(stack.peek());
            }

        }
    }
}
