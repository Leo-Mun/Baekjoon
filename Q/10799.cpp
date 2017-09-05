#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	int count = 0;
	stack<int> s;

	string stick;
	cin >> stick;

	for (int i = 0; i < stick.length(); i++) {
		if (stick.at(i) == '(') {
			s.push('(');
		}
		else if (i > 0 && stick.at(i-1) == '(' && stick.at(i) == ')') {
			s.pop();
			count += s.size();
		}
		else if (stick.at(i) == ')') {
			s.pop();
			count++;
		}
	}
	cout << count << endl;
	return 0;
}
