import java.util.Stack;
import java.util.Scanner;
public class Main {

	public static void main(String[] args) {
		Stack<Integer> stack = new Stack<Integer>();
		
		//Stack 클래스 사용 Stack<사용 변수 종류> 객체이름 = new Stack<사용변수이름>();
		
		Scanner sc = new Scanner(System.in);
		
		int k = sc.nextInt();
		
		for(int i=0; i<k; i++) {
			int item = sc.nextInt();
			
			if(item == 0) {
				stack.pop();
			}
			else stack.push(item);
		}
		
		sc.close();
		
		int res = 0;
		while (stack.isEmpty()==false) {
			//isEmpty는 boolean 타입으로 반환 true(스택이 비어있음) false(스택이 차있음)
			res = res + stack.pop();
		}
		
		System.out.println(res);
		
		
	}
	
	

}
