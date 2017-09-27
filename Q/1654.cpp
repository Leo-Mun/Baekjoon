#include <iostream>
#include <algorithm>

using namespace std;

long long LAN[100000];

	
long long n, k;

long long solve(long long left, long long right) {
		if (left == right) {
			return left;
		}
		
		long long mid = (left + right + 1) / 2;
		
		while (left <= right) {
			long long count = 0;
			
			for (int i = 0; i < k; i++) {
				count += LAN[i] / mid;
			}

			if (count >= n) {
				return solve(mid, right);
			}
			else {
				return solve(left, mid - 1);
			}
		}
		
}
		

int main() {
	ios::sync_with_stdio(false);
	cin >> k >> n;
	int max = 0;

	for (int i = 0; i < k; i++) {
		cin >> LAN[i];
		if (max < LAN[i]) {
			max = LAN[i];
		}
	}



	cout << solve(0, max) << endl;


	return 0;

}
