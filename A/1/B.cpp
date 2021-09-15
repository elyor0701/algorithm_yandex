#include <iostream>

using namespace std;

struct Point {
	int x;
	int y;
};

bool isParal (Point& a, Point& b,
			Point& c, Point& d) {
	if ((a.y - b.y) * (c.x - d.x) == 
		(c.y - d.y) * (a.x - b.x))
		return true;
	return false;
}

bool isEqual (Point& a, Point& b,
			Point& c, Point& d) {
	if ((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y) == 
		(c.x - d.x) * (c.x - d.x) + (c.y - d.y) * (c.y - d.y))
		return true;
	return false;
}

int main () {
	int N = 0;
	Point a, b, c, d;
	string result = "";
	cin >> N;
	
	for (int i = 0; i < N; i++) {
		cin >> a.x >> a.y >> b.x 
			>> b.y >> c.x >> c.y >> d.x >> d.y;
		
		if (isParal(a, b, c, d)) {
			if (isEqual(a, b, c, d)) {
				result += "YES";	
			} else {
				result += "NO";
			}
		} else if (isParal(a, c, b, d)) {
			if (isEqual(a, c, b, d)) {
				result += "YES";	
			} else {
				result += "NO";
			} 
		} else {
			result += "NO";
		}
		if (i != N - 1)
			result += "\n";
	}
	
	cout << result << endl;
	
	
	return 0;
}