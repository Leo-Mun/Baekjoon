#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

int main() {
	int n;
	cin >> n;

	int quote[1000];

	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		
		quote[i] = k;
	}

	sort(quote, quote + n, greater<int>());

	for (int i = n - 1; i >= 0; i--) {
		if (i < quote[i]) {
			cout << i + 1 << endl;
			return 0;
		}
		
	}
	cout << 0 << endl;
	
	return 0;
}
