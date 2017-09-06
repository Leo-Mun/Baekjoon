#include <iostream>

#define MAX_SIZE 101

using namespace std;

int main() {
	int n, m, i, j;
	cin >> n >> m;

	int basket[MAX_SIZE];

	for (int i = 1; i <= n; i++) {
		basket[i] = i;
	}

	while (m--) {
		int tmp;
		cin >> i >> j;

		while (i < j) {
			tmp = basket[j];
			basket[j] = basket[i];
			basket[i] = tmp;
			i++; j--;
		}

	}

	for (int i = 1; i <= n; i++) {
		cout << basket[i] << " ";
	}

	return 0;

}
