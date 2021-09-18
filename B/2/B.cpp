#include <iostream>
#include <vector>

using namespace std;

int main () {
	vector<int> buildings;
	for (int i = 0; i < 10; i++) {
		int x;
		cin >> x;
		buildings.push_back(x);
	}
	int max_interval_ = 0;
	for (int i = 0; i < 10; i++) {
		int max_local_ = 0;
		if (buildings[i] == 1) {
			if (i != 9) {}
		}
	}
	return 0;
}