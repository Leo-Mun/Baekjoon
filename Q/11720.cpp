#include <iostream>
#include <string>

using namespace std;

int main() {
	int x;
	cin >> x;

	string n;
	cin >> n;

	int result = 0;

	for (int i = 0; i < n.length(); i++) {
		result += n[i] - '0';
	}

	cout << result << endl;
	return 0;
}
