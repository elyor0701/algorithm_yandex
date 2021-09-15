#include <iostream>

using namespace std;

struct Point {
	int x;
	int y;
};

int lenPoint (Point& a, int x, int y) {
	return (a.x - x) * (a.x - x) + (a.y - y) * (a.y - y);
} 

int shortWay (int& d, Point& a) {
	int A, B, C;
	A = lenPoint (a, 0, 0);
	B = lenPoint (a, d, 0);
	C = lenPoint (a, 0, d);
	if (A <= B && A <= C) {
		return 1;
	} else if (B <= A && B <= C) {
		return 2;
	}
	return 3;
}

bool isInTriangle (int& d, Point& a) {
	if (-a.x + d >= a.y && a.y >= 0 && a.x >= 0)
		return true;
	return false;
}

int main () {
	int d;
	Point a;
	
	cin >> d >> a.x >> a.y;
	
	if (isInTriangle(d, a)) {
		cout << 0 << endl;
	} else {
		cout << shortWay(d, a) << endl;
	}
	
	return 0;
}