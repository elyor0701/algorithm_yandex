#include <iostream>
#include <map>

using namespace std;

int main () {
	map<int, int> numbers;
	int max_el_ = 0;
	
	while (1) {
		int x;
		cin >> x;
		if (x == 0)
			break;
		numbers[x]++;
		if (x > max_el_)
			max_el_ = x;
	}
	
	cout << numbers[max_el_] << endl;
	
	
	return 0;
}