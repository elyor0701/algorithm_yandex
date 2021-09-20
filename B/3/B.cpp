#include <iostream>
#include <set>
#include <sstream>

using namespace std;

int main () {
	set<int> container;
	string ans, s;
	getline(cin, s);
	stringstream ss(s);
	int number;
	while (ss >> number) {
		if (container.count(number) == 1) {
			ans += "YES";
		} else { 
			ans += "NO";
			container.insert(number);
		}
		ans += '\n';
	}

	cout << ans;
	
	return 0;
}