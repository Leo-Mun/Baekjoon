#include <iostream>

using namespace std;


void Hanoi(int numberOfDisk, int a, int b, int c) {
	if (numberOfDisk > 0) {
		Hanoi(numberOfDisk - 1, a, c, b);
		cout << a << " " << c << "\n";
		Hanoi(numberOfDisk - 1, b, a, c);
	}
	
}

int p(int x, int exp) {
	if (exp == 0) {
		return 1;
	}
	else {
		return x * p(x, exp - 1);
	}
}

int main() {
	ios::sync_with_stdio(false);

	int numberOfDisk;
	cin >> numberOfDisk;
	
	int move = p(2, numberOfDisk) - 1;
	cout << move << "\n";
	Hanoi(numberOfDisk, 1, 2, 3);

	return 0;



}
