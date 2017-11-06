#include <cstdio>
#include <algorithm>
#define MAX 2100000000

using namespace std;

int a[501], s[501], dp[501][501];

int solve(int start, int end) {
	if (start == end) {
		return 0;
	}

	int result = MAX;

	for (int k = 0; k < end - start; k++) {
		result = min(result, dp[start][start + k] + dp[start + k + 1][end] + s[end] - s[start - 1]);
	}

	return result;
}

int main() {
	int t;
	scanf("%d", &t);


	while (t--) {
		int numOfFiles;
		scanf("%d", &numOfFiles);

		s[0] = 0;
		for (int i = 1; i <= numOfFiles; i++) {
			scanf("%d", &a[i]);
			s[i] = s[i - 1] + a[i];
		}

		for (int i = 0; i <= numOfFiles; i++) {
			for (int j = 1; i + j <= numOfFiles; j++) {
				dp[j][i + j] = solve(j, i + j);
			}
		}
		printf("%d\n", dp[1][numOfFiles]);
	}
	return 0;
}
