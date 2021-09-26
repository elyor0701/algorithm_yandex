#include <iostream>
#include <set>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

void yes_set (set<int>& main, set<int>& second) {
	for (auto it = second.begin(); it != second.end(); ) {
		if (main.count(*it) == 0)
			it = second.erase(it);
		else 
			++it;
	}
	main = second;
}

void no_set (set<int>& main, set<int>& second) {
	for (auto it = second.begin(); it != second.end(); ) {
		if (main.count(*it) == 1)
			main.erase(*it);
		++it;
	}
}

void help_cout (set<int>& main) {
	for (auto& item : main)
		cout << item << " ";
}

int main () {
	int n;
	cin >> n;
	cin.ignore(32767, '\n');
	set<int> main_numbers;
	
	for (int i = 1; i <= n; i++)
		main_numbers.insert(i);
	string s;
	while (getline(cin, s)) {
		if (s == "HELP") {
			help_cout(main_numbers);
			break;
		} else {
			stringstream ss(s);
			int number;
			set<int> predicted_numbers;
			while (ss >> number) {
				predicted_numbers.insert(number);
			}
			string answer;
			cin >> answer;
			cin.ignore(32767, '\n');
			
			if (answer == "YES") {
				yes_set(main_numbers, predicted_numbers);
			} else if (answer == "NO") {
				no_set(main_numbers, predicted_numbers);
			}			
		}
	}
	
	cout << endl;
	
	return 0;
}