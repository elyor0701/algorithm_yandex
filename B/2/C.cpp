#include <iostream>
#include <string>

using namespace std;

int main () {
	string s;
	int summ_count = 0;
	
	cin >> s;
	for (int i = 0; i < s.length()/2; i++) {
		if (s[i] != s[s.length() - i - 1])
			summ_count++;
	}
	
	cout << summ_count << endl;
	
	return 0;
}