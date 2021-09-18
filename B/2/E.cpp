#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main () {
	vector<int> numbers;
	int N;
	cin >> N;
	
	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;
		
		numbers.push_back(x);
	}
	sort(numbers.begin(), numbers.end());
	int time_need_ = 0;
	for (int i = 0; i < N - 1; i++) {
		time_need_ += numbers[i];
	}
	
	cout << time_need_ << endl;
	
	return 0;
}