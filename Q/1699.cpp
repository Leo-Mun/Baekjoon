#include<iostream>
using namespace std;


int solution(int n) {
	int dp[100002] = {};

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j*j <= i; j++) {
			if (dp[i] > dp[i - j*j] + 1 || dp[i] == 0) {
				dp[i] = dp[i - j*j] + 1;
			}
		}
	}
	
	return dp[n];
}

int main() {
	int n;
	cin >> n;
	cout << solution(n) << '\n';
	return 0;
}
