#include <iostream>
#include <map>
#include <set>
#include <vector>

using namespace std;

int main () {
	int n_mes;
	
	cin >> n_mes;
	vector<string> numb_theme = {"null"};
	map<string, int> themes_count_message;
	int max_message = 1;
	for (int i = 0; i < n_mes; i++) {
		int n_type;
		cin >> n_type;
		cin.ignore(32767, '\n');
		
		if (n_type == 0) {
			string name_theme;
			string val_message;
			getline(cin, name_theme);
			getline(cin, val_message);
			numb_theme.push_back(name_theme);
			themes_count_message[name_theme]++;
		} else {
			string val_message;
			getline(cin, val_message);
			numb_theme.push_back(numb_theme[n_type]);
			themes_count_message[numb_theme[n_type]]++;
			max_message = max(max_message, 
				themes_count_message[numb_theme[n_type]]);
		}
	}
	
	string ans;
	auto it = numb_theme.begin();
	do {
		it++;
		if (it == numb_theme.end())
			break;
		ans = *it;
	} while (themes_count_message[*it] != max_message);
		
	cout << ans << endl;
	
	
	
	return 0;
}