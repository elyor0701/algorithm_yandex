#include <iostream>
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

struct Data {
	string name;
	int queue = -1;
	int numb_votes = -1;
	float numb_part = -1;
	float float_part = -1;
};

int main () {
	string s;
	vector<Data> parties;
	int i = 1;
	long long summ = 0;
	while (getline(cin, s)) {
		Data data_line;
		stringstream ss(s);
		string name;
		vector<string> str_data;
		while (ss >> name) {
			str_data.push_back(name);
		}
		data_line.numb_votes = stoi(str_data.back());
		summ += data_line.numb_votes;
		str_data.pop_back();
		name.clear();
		for (auto item : str_data) {
			name += item;
			name += " ";
		}
		auto it = name.end();
		name.erase(--it);
		data_line.name = name;
		data_line.queue = i;
		i++;
		parties.push_back(data_line);
	}
	
	float f = summ / 450.;
	int free = 450;
	for (auto& item : parties) {
		item.float_part = modf(item.numb_votes / f, &item.numb_part);
		free -= item.numb_part;
	}
	
	sort(parties.begin(), parties.end(), [] (Data d1, Data d2) {
		if (d1.float_part > d2.float_part) {
			return true;			
		} else if (d1.float_part == d2.float_part) {
			if (d1.numb_votes > d2.numb_votes)
				return true;
		}
		return false;
	});
	

	for (int i = 0; i < free; i++) {
		parties[i].numb_part++;
	}
	
	sort(parties.begin(), parties.end(), [] (Data d1, Data d2) {
		return d1.queue < d2.queue;
	});
	
	for (auto item : parties) {
		cout << item.name << " " << item.numb_part << endl;
	}
	
	return 0;
}