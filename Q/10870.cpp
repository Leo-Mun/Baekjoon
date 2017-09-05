#include <iostream>

using namespace std;

int f(int n) {
	if (n <= 1) {
		return n;
	}
	else {
		return f(n - 2) + f(n - 1);
	}
}


int main() {
	int n;
	cin >> n;

	cout << f(n) << endl;
	

	return 0;

}
