#include <iostream>
#include <map>
#include <sstream>

using namespace std;

int main () {
	string s;
	map<string, long> vote;
	while (getline(cin, s)) {
		string candidate;
		long count_fcandidate;
		stringstream ss(s);
		ss >> candidate >> count_fcandidate;
		vote[candidate] += count_fcandidate;
	}
	
	for (auto item : vote) {
		cout << item.first << " " << item.second << endl;
	}
	
	return 0;
}