#include <iostream>
#include <vector>
#include <queue>


using namespace std;

int main() {
	int n, w, l;
	cin >> n >> w >> l;

	vector<int> trucks(n);
	queue<int> bridge;

	for (int i = 0; i < n; i++) {
		cin >> trucks[i];
	}

	for (int i = 0; i < w; i++) {
		bridge.push(0);
	}

	int bridgeWeight = 0, time = 0;

	for (int i = 0; i < n; i++) {
		while (bridgeWeight - bridge.front() + trucks[i] > l) {
			bridgeWeight -= bridge.front();
			bridge.pop();
			bridge.push(0);
			time++;
		}
		bridgeWeight -= bridge.front();
		bridge.pop();
		bridge.push(trucks[i]);
		bridgeWeight += trucks[i];
		time++;
	}

	cout << time + w << endl;
	return 0;
}
