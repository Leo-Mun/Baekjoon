#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int solution(int n, vector<int> arr) {
	int answer = 0;
	int dp[1001];
	dp[0] = arr[0];

	for (int i = 1; i < n; i++) {
		dp[i] = arr[i]; // 끝자리 수가 arr[n] 인 가장 합이 큰 수
		for (int j = 0; j < i; j++) {
			if (arr[i] > arr[j]) {
				dp[i] = max(dp[j] + arr[i], dp[i]);
			}
		}
	}

	for (int i = 0; i < n; i++) {
		answer = max(answer, dp[i]);
	}

	return answer;
}

int main() {
	int n;
	cin >> n;
	vector<int> arr(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	cout << solution(n, arr) << endl;

	return 0;
}
