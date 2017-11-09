/*
 * BOJ 2579 계단 오르기
 * 다이나믹 프로그래밍으로 접근
 * dp[n] = n개의 계단일 때 최대값
 * 연속으로 세 칸을 오를 수 없기 때문에, 계단을 오를 수 있는 경우는 마지막 계단 전의 계단을 밟은 경우, 마지막 계단 전의 계단을 밟지 않은 경우 둘로 나눌 수 있다.
 * 마지막 계단 전의 계단을 밟은 경우, 그 전 계단을 밟을 수 없다. 따라서 dp[i] = dp[i - 3] + stair[i - 1] + stair[i]
 * 마지막 계단 전의 계단을 밟지 않은 경우, 그 전 계단을 밟을 수 있다. 따라서 dp[i] = dp[i - 2] + stair[i];
 * 이 둘 중 최대값을 dp[i] 로 해주면 된다. dp[i] = max(dp[i - 3] + stair[i - 1] + stair[i], dp[i - 2] + stair[i])
 */

package algorithm;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class BOJ2579 {
	
	public static int solution(int stair[], int n) {
		int dp[] = new int[n + 1];
		
		dp[0] = 0; dp[1] = stair[1]; dp[2] = stair[1] + stair[2];
		for (int i = 3; i <= n; i++) {
			dp[i] = Math.max(dp[i - 3] + stair[i - 1] + stair[i], dp[i - 2] + stair[i]);
		}
		
		return dp[n];
		
	}
	
	
	public static void main(String[] args) throws NumberFormatException, IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int n = Integer.parseInt(br.readLine());
		int stair[] = new int[n + 1];
		
		stair[0] = 0;
		for (int i = 1; i <= n; i++) {
			stair[i] = Integer.parseInt(br.readLine());
		}
		
		System.out.println(solution(stair, n));
	
	}

}
