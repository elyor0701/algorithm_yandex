#include <iostream>
#include <set>
#include <sstream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main () {
	int m;
	cin >> m;
	vector<set<char>> symbols;
	for (int i = 0; i < m; i++) {
		string s;
		cin >> s;
		symbols.push_back({s.begin(), s.end()});		
	}
	
	vector<pair<string, int>> nums;
	int n;
	cin >> n;
	int max_common = 0;
	for (int i = 0; i < n; ++i) {
		string s;
		cin >> s;
		int in_common = 0;
		set<char> symbol(s.begin(), s.end());
		for (auto it : symbols) {
			if (includes(symbol.begin(), symbol.end(), 
				it.begin(), it.end())) {
				in_common++;
			}
		}
		nums.push_back({s, in_common});
		max_common = max(max_common, in_common);
	}
	
	for (auto item : nums) {
		if (item.second == max_common)
			cout << item.first << endl;
	}
	
	
	return 0;
}


