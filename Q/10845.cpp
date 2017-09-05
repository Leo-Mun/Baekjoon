#include <iostream>
#include <string>

using namespace std;

class Queue {
public:
	int front, rear;
	int queue[20000];

	Queue() {
		front = 0;
		rear = 0;
	}

	void push(int x) {
		queue[rear++] = x;
	}

	void pop() {
		if (!empty()) {
			cout << queue[front++] << endl;
		}
		else {
			cout << -1 << endl;
		}
	}

	void size() {
		cout << rear - front << endl;
	}

	bool empty() {
		if (front == rear) {
			return true;
		}
		else {
			return false;
		}
	}

	void getFront() {
		if (!empty()) {
			cout << queue[front] << endl;
		}
		else {
			cout << -1 << endl;
		}
	}

	void back() {
		if (!empty()) {
			cout << queue[rear - 1] << endl;
		}
		else {
			cout << -1 << endl;
		}
	}
};


int main() {
	Queue que;

	int testCase;
	cin >> testCase;

	while (testCase--) {
		string indicate;
		cin >> indicate;

		if (indicate == "push") {
			int value;
			cin >> value;

			que.push(value);
		}
		else if (indicate == "pop") {
			que.pop();
		}
		else if (indicate == "size") {
			que.size();
		}
		else if (indicate == "empty") {
			if (que.empty()) {
				cout << 1 << endl;
			}
			else {
				cout << 0 << endl;
			}
		}
		else if (indicate == "front") {
			que.getFront();
		}
		else if (indicate == "back") {
			que.back();
		}
	}
	return 0;
}
