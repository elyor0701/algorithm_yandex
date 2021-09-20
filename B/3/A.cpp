#include <iostream>
#include <set>
#include <sstream>

using namespace std;

int main () {
	set<int> container;
	string s;
	getline(cin, s);
	stringstream ss(s);
	int number;
	while (ss >> number) {
		container.insert(number);
	}
	getline(cin, s);
	ss << s;
	
	return 0;
}