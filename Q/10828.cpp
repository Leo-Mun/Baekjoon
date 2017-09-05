#include <iostream>
#include <fstream>
#include <string>
\
using namespace std;

class Stack {
public:
	int top;
	int stack[10001] = { 0, };

	Stack() {
		top = -1;
	}

	void push(int x) {
		stack[++top] = x;
	}

	void pop() {
		if (top == -1) {
			cout << -1 << endl;
		}
		else {
			cout << stack[top--] << endl;
		}
	}

	void size() {
		cout << top + 1 << endl;
	}

	void empty() {
		if (top == -1) {
			cout << 1 << endl;;
		}
		else {
			cout << 0 << endl;
		}
	}

	void getTop() {
		if (top == -1) {
			cout << -1 << endl;
		}
		else {
			cout << stack[top] << endl;
		}
	}

};

int main() {
	int testCase;
	cin >> testCase;

	Stack stack;

	while (testCase--) {
		string function;
		int value;
		cin >> function;

		if (function == "push") {
			cin >> value;
			stack.push(value);

		}
		else if (function == "pop") {
			stack.pop();
		}
		else if (function == "size") {
			stack.size();
		}
		else if (function == "empty") {
			stack.empty();
		}
		else if (function == "top") {
			stack.getTop();
		}
	}

	return 0;
}
