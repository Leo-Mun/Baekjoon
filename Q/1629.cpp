#include <iostream>

using namespace std;

long long a, b, c;

long long f(long long a, long long b) {

	if (b == 0) {
		return 1 % c;
	}
	else if (b == 1) {
		return a % c;
	}
	else if (b % 2 == 0) {
		long long y = f(a, b / 2);
		return y * y % c;
	}
	else {
		return f(a, b - 1) * a % c;
	}
}

int main() {
	cin >> a >> b >> c;

	cout << f(a, b) << endl;

	return 0;



}
