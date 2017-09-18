#include <iostream>
#include <algorithm>

using namespace std;

int dp[1001][1001], G[1001], M[1001];

int cardGame(int left, int right) {
	if (left > right) {
		return 0;
	}
	if (left == right) {
		return G[left];
	}

	int & result = dp[left][right];

	if (result >= 0) {
		return result;
	}

	result = max(M[right] - M[left - 1] - cardGame(left + 1, right), M[right] - M[left - 1] - cardGame(left, right - 1));
	return result;
}

int main() {

	int testCase;
	cin >> testCase;

	while (testCase--) {
		int numberOfCards;
		cin >> numberOfCards;

		for (int i = 1; i <= numberOfCards; i++) {
			for (int j = i; j <= numberOfCards; j++) {
				dp[i][j] = -1;
			}
		}

		for (int i = 1; i <= numberOfCards; i++) {
			scanf("%d", G + i);
			M[i] = M[i - 1] + G[i];

		}
		cout << cardGame(1, numberOfCards) << endl;
	}
}
