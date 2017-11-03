#include <iostream>

using namespace std;

int main() {
	int a = 20, b = 7, c, d;
	cin >> c >> d;
	if (c == 1) {
		b--;
		c = 13;
	}
	else if (c == 2) {
		b--;
		c = 14;
	}

	int result = ((21 * a / 4) + (5 * b / 4) + (26 * (c + 1) / 10) + d - 1) % 7;
	switch (result)
	{
		default:
			break;
		case 0 :
			cout << "SUN";
			break;
		case 1:
			cout << "MON";
			break;
		case 2:
			cout << "TUE";
			break;
		case 3:
			cout << "WED";
			break;
		case 4:
			cout << "THU";
			break;
		case 5:
			cout << "FRI";
			break;
		case 6:
			cout << "SAT";
			break;
	}

	return 0;
}
