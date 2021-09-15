#include <iostream>

using namespace std;

int main () {
	
	int N, i, j, k;
	
	cin >> N >> i >> j;
	
	if (N > 2) {
		N -= 2;
		k = abs(i - j) - 1;
		k = min(k, N - k);
		cout << k << endl;
	} else {
		cout << 0 << endl;
	}
	
	return 0;
}