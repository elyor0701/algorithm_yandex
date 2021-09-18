#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main () {
	vector<int> numbers_;
	map<int, int> house_;
	int place_ = -10;
	for (int i = 0; i < 10; i++) {
		int x;
		cin >> x;
		if (x == 2)
			place_ = i;
		if (x == 1) {
			house_[i] = i - place_;
		}
		numbers_.push_back(x);
	}
	
	//reverse(numbers_.begin(), numbers_.end());
	place_ = -1;
	for (int i = 9; i >= 0; i--) {
		if (numbers_[i] == 2)
			place_ = i;
		if (numbers_[i] == 1 && place_ != -1) {
			house_[i] = min(house_[i], place_ - i);
		}
	}
	
	int max_length_ = 0;
	
	for (auto x : house_) {
		max_length_ = max(max_length_, x.second);
	}
	
	cout << max_length_ << endl;
	
	return 0;
}