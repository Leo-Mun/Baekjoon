#include <iostream>

using namespace std;

int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	else {
		return gcd(b, a % b);
	}
}


int main() {
	int testCase;
	cin >> testCase;

	while (testCase--) {
		int a, b, x;
		cin >> a >> b;
		
		while (a != 1) {
			if (b % a == 0) {
				x = b / a;
			}
			else {
				x = b / a + 1;
			}

			a = a * x - b;
			b *= x;

			int g = gcd(a, b);
			a /= g;
			b /= g;
		}
		cout << b << endl;

	}
	return 0;
}
