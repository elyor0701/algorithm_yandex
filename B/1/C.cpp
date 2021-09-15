#include <iostream>

using namespace std;

int main () {
	int x, y, z;
	
	cin >> x >> y >> z;
	
	if (x > 12) {
		cout << 1 << endl;
	} else if (y > 12) {
		cout << 1 << endl;
	} else if (x == y) {
		cout << 1 << endl;
	} else {
		cout << 0 << endl;
	}
	
	return 0;
}