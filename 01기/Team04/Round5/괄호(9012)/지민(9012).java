//괄호
//처음에는 괄호 수만 같으면 YES라 생각했는데 ())경우도 고려했어야했다..

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
    	int t = Integer.parseInt(br.readLine());
    	for(int i=0; i<t;i++) {
        	bw.write(check(br.readLine()));
    	} 
    	bw.close();
    }
    
    public static String check(String s) {
    		Stack<Character> stack = new Stack<>();
    		for(int i=0; i<s.length(); i++) {
    			if(s.charAt(i)=='('){
    				stack.push(s.charAt(i));
    			}else {
    				while(stack.isEmpty()) {
    					return "NO\n";
    				}
    				stack.pop();
    			}
    		}
    			
    		if(stack.isEmpty()) {
    			return "YES\n";
    		}else{
    			return "NO\n";
    		}	
    }
}
