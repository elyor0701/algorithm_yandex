#include <iostream>
#include <map>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main () {
	map<string, int> words;
	
	string s;
	while (getline(cin, s)) {
		stringstream ss(s);
		string word;
		while (ss >> word) {
			words[word]++;
		}
	}
	
	vector<pair<int, string>> sorted_words;
	for (auto item : words) {
		sorted_words.push_back({item.second, item.first});
	}
	
	sort(sorted_words.begin(), sorted_words.end(), 
		[] (pair<int, string> lhs, pair<int, string> rhs) {
			if (lhs.first > rhs.first)
				return true;
			else if (lhs.first < rhs.first)
				return false;
			else if (lhs.second < rhs.second)
				return true;
			else
				return false;
		});
	
	for (auto item : sorted_words) {
		cout << item.second << endl;
	}
	
	return 0;
}