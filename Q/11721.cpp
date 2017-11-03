#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	string s;
	string result;
	cin >> s;

	int index = 0;
	for (int i = 0; i < s.size(); i++) {
		result.push_back(s[i]);
		index++;
		if (index == 10) {
			cout << result << endl;
			index = 0;
			result.clear();
		}
	}

	if (result.size() > 0) {
		cout << result << endl;
	}
	return 0;
}
