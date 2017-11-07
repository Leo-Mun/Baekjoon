#include <iostream>
#include <cstdio>

using namespace std;

int gridRow[101][101];
int gridColumn[101][101];
int dp[101][101][2][201];

int main() {
	ios::sync_with_stdio(false);
	int testCase;
	cin >> testCase;


	while (testCase--) {
		int M, N, L, G;
		cin >> N >> M >> L >> G;

		for (int i = 1; i <= N; i++) {
			for (int j = 1; j < M; j++) {
				scanf("%d", gridRow[i] + j);
			}
		}

		for (int i = 1; i < N; i++) {
			for (int j = 1; j <= M; j++) {
				scanf("%d", gridColumn[i] + j);
			}
		}
		for (int i = 1; i <= N; i++) {
			for (int j = 1; j <= M; j++) {
				for (int k = 0; k < 2; k++) {
					for (int l = 0; l < 201; l++) {
						dp[i][j][k][l] = G + 1;
					}
				}
			}
		}

		dp[1][1][0][0] = dp[1][1][1][0] = 0;

		int result = 2e9;

		for (int i = 1; i <= N; i++) {
			for (int j = 1; j <= M; j++) {
				for (int l = 0; l < 200; l++) {
					for (int k = 0; k < 2; k++) {
						if (dp[i][j][k][l] <= G) {
							if (i == N && j == M) {
								if (result > l) {
									result = l;
								}
							}

							if (l < 200 && dp[i][j][!k][l + 1] > dp[i][j][k][l]) {
								dp[i][j][!k][l + 1] = dp[i][j][k][l];
							}

							if (k) {
								if (j < M && dp[i][j + 1][k][l] > dp[i][j][k][l] + gridRow[i][j]) {
									dp[i][j + 1][k][l] = dp[i][j][k][l] + gridRow[i][j];
								}
							}

							else {
								if (i < N && dp[i + 1][j][k][l] > dp[i][j][k][l] + gridColumn[i][j]) {
									dp[i + 1][j][k][l] = dp[i][j][k][l] + gridColumn[i][j];
								}
							}
						}
					}
				}
			}
		}
			if (result < 2e9)
				cout << (N + M - 2) * L + result << endl;
			else {
				puts("-1");
			}
	}

	return 0;

}
