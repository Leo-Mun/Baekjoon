#include <algorithm>
#include <cstdio>
#include <vector>
using namespace std;

class Position {
public:
	int x, y;

};

bool incXincY(const Position  & a, const Position & b) {
	if (a.x < b.x) {
		return true;
	}
	if (a.x > b.x) {
		return false;
	}
	return a.y < b.y;
}




int main() {

	int testCase;
	scanf("%d", &testCase);

	while (testCase--) {

		int numberOfCafe;
		scanf("%d", &numberOfCafe);

		vector<Position> cafe;
		cafe.push_back({ -1, 0 });
		for (int index = 0; index < numberOfCafe; index++) {
			int x, y;
			scanf("%d %d", &x, &y);
			cafe.push_back({ x, y });
		}

		sort(cafe.begin(), cafe.end(), incXincY);

		for (int setOrder = 1; setOrder <= numberOfCafe; setOrder++) {
			if (cafe[setOrder - 1].x != cafe[setOrder].x) {
				int start = setOrder;
				int end = setOrder;

				for (; end <= numberOfCafe; end++) {
					if (cafe[start].x != cafe[end].x) {
						break;
					}
				}

				if (cafe[setOrder - 1].y != cafe[setOrder].y) {
					reverse(cafe.begin() + start, cafe.begin() + end);
				}

			}
		}

		int m;
		scanf("%d", &m);

		while (m--) {
			int showCafe;
			scanf("%d", &showCafe);
			printf("%d %d\n", cafe[showCafe].x, cafe[showCafe].y);
		}
	}
	return 0;
}
