#include <iostream>
#include <set>
#include <sstream>

using namespace std;

int main () {
	string s;
	getline(cin, s);
	stringstream ss(s);
	int numb;
	set<int> first_set;
	while (ss >> numb) {
		first_set.insert(numb);
	}
	
	
	getline(cin, s);
	stringstream sd(s);
	int count_nums = 0;
	while (sd >> numb) {
		
		if (first_set.count(numb) == 1)
			count_nums++;
	}
	
	cout << count_nums << endl;
	
	return 0;
}