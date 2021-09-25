#include <iostream>
#include <map>

using namespace std;

int main () {
	long n;
	
	cin >> n;
	map<long long, long long> box;
	for (int i = 0; i < n; i++) {
		long long key, value;
		cin >> key >> value;
		box[key] += value;
	}
	
	for (auto item : box) {
		cout << item.first << " " 
				<< item.second << endl;
	}
	
	
	return 0;
}