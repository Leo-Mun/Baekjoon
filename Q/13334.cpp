#include <cstdio>
#include <algorithm>
#include <queue>
#include <functional>

#define MAX_SIZE 100000

using namespace std;

class Line {
public :
	int start, end;
	bool operator < (Line & a) {
		return this->end < a.end;
	}
};


int main() {

	
	
		int n;
		scanf("%d", &n);

		Line locations[MAX_SIZE];

		for (int i = 0; i < n; i++) {
			scanf("%d %d", &locations[i].start, &locations[i].end);
			if (locations[i].start > locations[i].end) {
				swap(locations[i].start, locations[i].end);
			}
		}

		int railway;
		scanf("%d", &railway);


		sort(locations, locations + n);

		int result = 0;

		priority_queue<int, vector<int>, greater<int> > minHeap;

		for (int i = 0; i < n; i++) {
			minHeap.push(locations[i].start);
			while (!minHeap.empty()) {
				if (minHeap.top() >= locations[i].end - railway) {
					break;
				}
				minHeap.pop();
			}
			if (result < minHeap.size()) {
				result = minHeap.size();
			}
		}

		printf("%d \n", result);

	
	return 0;


}
