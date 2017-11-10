/*
 * BOJ 2011 암호코드
 * 다이나믹 프로그래밍으로 접근
 * dp[i] = i번째 까지 해석했을 때 가능한 경우의 수
 * 1. i번째 인덱스의 데이터 자리 수가 한 자리일 경우
 * dp[i] = dp[i-1]
 * 2. i번째 인덱스의 데이터 자리 수가 두 자리인 경우
 * dp[i] = dp[i] + dp[i-2]
 */

package algorithm;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class BOJ2011 {
	public static int solution(String password) {
		int dp[] = new int[password.length()];
		
		dp[0] = 1;

		for (int i = 1; i < password.length(); i++) {
			 int x = password.charAt(i) - '0';
			 if(1 <= x && x <= 9) {
				 dp[i] = (dp[i] + dp[i - 1]) % 1000000;
			 }
			 
			 if (password.charAt(i - 1) == '0') {
				 continue;
			 }
			 if (i == 1) {
				 continue;
			 }
			 
			 x = (password.charAt(i - 1) - '0') * 10 + (password.charAt(i) - '0');
			 if (10 <= x && x <= 26) {
				 dp[i] = (dp[i] + dp[i - 2]) % 1000000;
			 }
		}
		
		return dp[password.length() - 1];
	}
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		String password = br.readLine();
		password = " " + password;
		System.out.println(solution(password));
		
	}
}
