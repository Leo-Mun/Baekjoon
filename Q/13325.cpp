#include <cstdio>
#include <algorithm>

#define MAX_SIZE 4194304

using namespace std;

int binaryTree[MAX_SIZE];
int edge, height, result;

int increasing(int node) {
	if (node * 2 >= edge) {
		result += binaryTree[node];
		
		return binaryTree[node];
	}
	else {
		int left = increasing(node * 2);
		int right = increasing(node * 2 + 1);

		result += abs(left - right) + binaryTree[node];

		return binaryTree[node] + max(left, right);
	}
}


int main() {
	scanf("%d", &height);
	edge = 1 << (height + 1);
	
	for (int i = 2; i < edge; i++) {
		scanf("%d", &binaryTree[i]);
	}

	increasing(1);

	printf("%d \n", result);
	return 0;





}
