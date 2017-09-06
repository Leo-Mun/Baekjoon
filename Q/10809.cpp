#include <iostream>
#include <string>

#define MAX_SIZE 100

using namespace std;

int main() {
	string word;
	cin >> word;

	int length = word.length();

	int locate[MAX_SIZE];
	fill_n(locate, MAX_SIZE, -1);

	for (int i = 0; i < length; i++) {
		if (locate[word[i] - 97] < 0) {
			locate[word[i] - 97] = i;
		}
		else {
			continue;
		}
	}

	for (int i = 0; i < 26; i++) {
		cout << locate[i] << " ";
	}
	
	
	return 0;



}
