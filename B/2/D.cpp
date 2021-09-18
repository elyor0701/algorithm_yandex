#include <iostream>
#include <vector>

using namespace std;

int main () {
	int len_at, numbers_at;
	vector<int> place_;
	cin >> len_at >> numbers_at;
	for (int i = 0; i < numbers_at; i++) {
		int x;
		cin >> x;
		place_.push_back(x);
	}
	
	auto blok1 = lower_bound(place_.begin(), place_.end(), len_at/2);
	int blok2;
	if (*blok1 == len_at/2 && len_at % 2 == 1) {
		cout << *blok1 << endl;
	} else {
		blok2 = *blok1;
		blok1--;
		cout << *blok1 << " " << blok2 << endl;
	}
	
	
	return 0;
}