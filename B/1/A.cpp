#include <iostream>

using namespace std;

int main () {
	int r, i, c;
	int rst;
	
	cin >> r >> i >> c;
	if (i == 0) {
		if (r != 0)
			rst = 3;
		else
			rst = c;
	} else if (i == 1) {
		rst = c;
	} else if (i == 4) {
		if (r != 0)
			rst = 3;
		else
			rst = 4;
	} else if (i == 6) {
		rst = 0;
	} else if (i == 7) {
		rst = 1;
	} else {
		rst = i;
	}
	
	cout << rst << endl;
	
	return 0;
}