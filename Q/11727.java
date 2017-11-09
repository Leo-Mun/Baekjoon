/*
 * BaekJoon 11727 2xn 타일링 2
 * dp[] = n일 때 2xn에 직사각형을 채우는 방법의 수
 * dp[1] = 1, dp[2] = 3, dp[3] = 5
 * 2xn 이 채워지는 경우는 맨 끝에 | 으로 끝나는 경우, = 로 끝나는 경우 ㅁ 로 끝나는 경우 세가지
 * | 로 끝날 시 n-1의 경우의 수 + = 로 끝날 시 n-2의 경우의 수 + ㅁ로 끝날시 n-2의 경우의 수가 된다
 * 따라서 dp[n] = d[n-1] + dp[n-2] + dp[n-2] 가 성립됨 
 */

package algorithm;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
	public static long solution(int n) {
		long dp[] = new long[1001];
			
		dp[1] = 1; dp[2] = 3; dp[3] = 5;
		for (int i = 4; i <= n; i++) {
			dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 2]) % 10007;
		}
		
		return dp[n];
		
	}
	
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int n = Integer.parseInt(br.readLine());
		
		System.out.println(solution(n));
		
	}
}
