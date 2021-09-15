#include <iostream>

using namespace std;

int main () {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;
		if (i == N/2)
			cout << x << endl;
	}
	
	
	return 0;
}