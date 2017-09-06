#include <iostream>
#include <string>


using namespace std;

int main() {
	string word;
	cin >> word;

	int length = word.length();

	for (int i = 0; i < length / 2; i++) {
		if (word[i] == word[length - i - 1]) {
			continue;
		}
		else {
			cout << 0;
			return 0;
		}
	}

	cout << 1;
	return 0;

}
