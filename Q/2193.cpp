#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long solve(int n, int end, vector<vector<long long>> & dp) {
	if (dp[n][end] != -1) {
		return dp[n][end];
	}
	else if (n == 1) {
		return dp[n][end] = end;
	}
	else {
		if (end == 0) {
			return dp[n][end] = solve(n - 1, 0, dp) + solve(n - 1, 1, dp);
		}
		else {
			return dp[n][end] = solve(n - 1, 0, dp);
		}
	}

}

long long solution(int n) {
	vector<vector<long long>> dp(n + 1, vector <long long>(2, -1));
	return solve(n, 0, dp) + solve(n, 1, dp);
}

int main() {
	int n;
	cin >> n;

	cout << solution(n) << endl;

	return 0;
}
