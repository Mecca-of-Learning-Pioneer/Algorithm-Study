//단어뒤집기

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.Stack;

public class Main {
    public static void main(String[] args) throws IOException {
    	BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    	BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
    	int T = Integer.parseInt(br.readLine());
    	while(T>0) {
    		Stack<Character> stack = new Stack<>();
    		String str = br.readLine()+"\n";
    		for(char ch : str.toCharArray()) {
    			if(ch==' '||ch=='\n') {
    				while(!stack.isEmpty()) {
    					bw.write(stack.pop());
    				}
    				bw.write(ch);
    			}else stack.push(ch);
    		}
    		T--;
    	}
    	bw.close();
    }
}
