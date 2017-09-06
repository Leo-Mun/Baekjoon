#include <iostream>
#include <algorithm>

using namespace std;


int n;
int numbers[8];

int getMaxSubtract() {
	int sum = 0;
	for (int i = 0; i < n - 1; i++) {
		sum += abs(numbers[i + 1] - numbers[i]);
	}

	return sum;
}

int main() {
	ios::sync_with_stdio(false);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> numbers[i];
	}

	sort(numbers, numbers + n);
	int result = getMaxSubtract();
	while (next_permutation(numbers, numbers + n)) {
		int tmp = getMaxSubtract();
		if (tmp > result) {
			result = tmp;
		}
	}

	cout << result << endl;

	return 0;


}
