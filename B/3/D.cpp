#include <iostream>
#include <set>
#include <sstream>
#include <vector>

using namespace std;

void yes_set (set<int>& main, set<int>& second) {
	for (auto it = main.begin(); it != main.end(); ) {
		if (second.count(*it) == 0)
			it = main.erase(it);
		++it;
	}
}

void no_set (set<int>& main, set<int>& second) {
	for (auto it = main.begin(); it != main.end(); ) {
		if (second.count(*it) == 1)
			it = main.erase(it);
		++it;
	}
}

void help_cout (set<int>& main) {
	for (auto item : main)
		cout << item << " ";
}

int main () {
	int n;
	cin >> n;
	set<int> main_numbers;
	
	for (int i = 1; i <= n; i++)
		main_numbers.insert(i);
	cout << "iam here1" << endl;
	string s;
	while (getline(cin, s)) {
		if (s == "HELP") {
			cout << "iam here2" << endl;
			help_cout(main_numbers);
		} else {
			cout << "iam here3" << endl;
			stringstream ss(s);
			int number;
			set<int> predicted_numbers;
			while (ss >> number) {
				predicted_numbers.insert(number);
			}
			string answer;
			cin >> answer;
			
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