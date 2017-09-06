#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int p(long long B, long long n) {
	if (n == 0) {
		return 1;
	}
	else {
		return B * p(B, n - 1);
	}
}

int main() {
	string N;
	long long B;

	cin >> N >> B;
	
	long long exp = 0;
	long long result = 0;

	for (int i = N.length() - 1; i >= 0; i--) {
		if (N[i] >= 65) {
			result += (N[i] - 55) * p(B, exp) ;
			exp++;
		}
		else {
			result += (N[i] - 48) * p(B, exp) ;
			exp++;
		}
	}

	cout << result << endl;
	return 0;
}
