/*
 * BOJ 2225 합분해
 * 다이나믹 프로그래밍으로 접근
 * dp[K][N] = K개의 수를 합쳐 N이 나오는 갯수
 * dp[K][N] = Sum(dp[K - 1][N - L]; L = N인 합을 만들기 위한 마지막 수
 */

package algorithm;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class BOJ2225 {
	public static int solution(int N, int K) {
		int dp[][] = new int[K + 1][N + 1];
		
		for (int i = 0; i <= N; i++) {
			dp[1][i] = 1;
		}
		
		for (int i = 2; i <= K; i++) {
			for (int j = 0; j <= N; j++) {
				for (int l = 0; l <= j; l++) {
					dp[i][j] += dp[i - 1][j - l];
					dp[i][j] %= 1000000000;
				}
			}
		}
		
		return dp[K][N] % 1000000000;
		
		
	}
	
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine(), " ");
		
		int N = Integer.parseInt(st.nextToken());
		int K = Integer.parseInt(st.nextToken());
		
		System.out.println(solution(N, K));
	}
}
