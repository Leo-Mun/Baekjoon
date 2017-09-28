#include <iostream>
#include <algorithm>

using namespace std;

int x[200000];


int solution(int left, int right) {
	int mid = (left + right) / 2;

	if (left > right) {
		return mid;
	}

	while (left <= right) {

	}
}

int main() {
	int n, c;
	cin >> n >> c;

	int count;
	int result;

	for (int i = 0; i < n; i++) {
		cin >> x[i];
	}

	sort(x, x + n);

	int left = 1;
	int right = x[n - 1] - 1;

	while (left <= right) {
		int mid = (left + right) / 2;
		count = 1;
		int select = x[0];

		for (int i = 1; i < n; i++) {
			if (x[i] - select >= mid) {
				count++;
				select = x[i];
			}
		}

		if (count < c) {
			right = mid - 1;
		}
		else if (count >= c) {
			left = mid + 1;
			result = mid;
		}


	}

	cout << result << endl;
	return 0;

}
