#include <iostream>
#include <string>
#include <vector>


using namespace std;

bool isPalindrom(string data) {
	for (int i = 0; i < data.length() / 2; i++) {
		if (data[i] != data[data.length() - i - 1]) {
			return false;
		}
	}
	return true;
}

bool isPalindrom(vector<int> v) {
	for (int i = 0; i < v.size() / 2; i++) {
		if (v[i] != v[v.size() - i - 1]) {
			return false;
		}
	}
	return true;
}

void convert(string data) {
	for (int i = 2; i <= 64; i++) {
		vector<int> v;
		
		int tmp = atoi(data.c_str());
		while (tmp != 0) {
			v.push_back(tmp % i);
			tmp /= i;
		}

		if (isPalindrom(v)) {
			cout << "1" << endl;
			return;
		}
		v.clear();
	}
	cout << "0" << endl;
	return;
}

int main() {
	ios::sync_with_stdio(false);

	int input;
	cin >> input;

	while (input--) {
		string data;
		cin >> data;

		if (isPalindrom(data)) {
			cout << "1" << endl;
			continue;
		}
		else {
			convert(data);
		}


	}

	return 0;
}
