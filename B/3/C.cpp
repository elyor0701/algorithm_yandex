#include <iostream>
#include <map>
#include <sstream>
#include <vector>

using namespace std;

int main () {
	string s;
	getline(cin, s);
	stringstream ss(s);
	int number;
	map<int, int> count_numbers;
	vector<int> numbers;
	
	while (ss >> number) {
		count_numbers[number]++;
		numbers.push_back(number);
	}
	
	string ans;
	
	for (auto item : numbers) {
		if (count_numbers[item] == 1)
			ans = ans + to_string(item) + " ";
	}
	
	cout << ans << endl;
	
	return 0;
}