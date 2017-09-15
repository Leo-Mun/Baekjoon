#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

int result[1000000];

bool isPalindrom(int index) {
	for (int j = 0; j < index / 2; j++) {
		if (result[j] != result[index - j - 1]) {
			return false;
		}
	}
	return true;
}

bool convert(int data) {
	for (int i = 2; i <= 64; i++) {
		int tmp = data;
		int index = 0;

		while (tmp != 0) {
			result[index++] = tmp % i;
			tmp /= i;
		}
		if (isPalindrom(index)) {
			return true;
		}

	}
	return false;
}

int main() {
	ios::sync_with_stdio(false);

	int input;
	cin >> input;

	while (input--) {
		int data;
		cin >> data;

			if (convert(data)) {
				printf("1\n");
			}
			else {
				printf("0\n");
			}
	}

	return 0;
}
