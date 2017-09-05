#include <iostream>
#include <fstream>
#include <stack>
#include <string>

using namespace std;

int main() {
	string ps;
	int testCase;
	cin >> testCase;

	while (testCase--) {
		stack<char> myStack;
		
		cin >> ps;
		for (int i = 0; i < ps.length(); i++) {
			if (ps[i] == '(') {
				myStack.push('(');
			}
			else if (ps[i] == ')') {
				if (!myStack.empty()) {
					myStack.pop();
				}
				else {
					myStack.push(')');
					break;
				}
			}

		}

		if (myStack.empty()) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}

	}

	return 0;
}
