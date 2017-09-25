#include <iostream>

using namespace std;

int T[50];

int triCheck(int n) {
	for (int i = 1; i < 50; i++) {
		for (int j = 1; j < 50; j++) {
			for (int k = 1; k < 50; k++) {
				if (T[i] + T[j] + T[k] == n) {
					return 1;
				}
			}
		}
	}
	return 0;
}

int main() {
	int testCase;
	cin >> testCase;

	for (int i = 1; i < 50; i++) {
		T[i] = i*(i + 1) / 2;
	}

	while (testCase--) {
		int k;
		cin >> k;

		cout << triCheck(k) << endl;

	}

	return 0;
}
