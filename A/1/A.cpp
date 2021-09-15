#include <iostream>

using namespace std;

int main () {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if (c == 0) {
		if (a != 0) {
			cout << -b/a << endl;
		} else {
			if (b == 0) {
				cout << "INF" << endl;
			} else {
				cout << "NO" << endl;
			}
		}
	} else {
		if (d == 0) {
			if (a == 0) {
				if (b == 0) {
					cout << "INF" << endl;
				} else {
					cout << "NO" << endl;
				}
			} else {
				if (-b/a != 0) {
					if (b % a == 0) {
						cout << -b/a << endl;						
					} else {
						cout << "NO" << endl;
					}
				} else {
					cout << "NO" << endl;
				}
			}
		} else {
			if (a == 0) {
				if (b == 0) {
					cout << "INF" << endl;
				} else {
					cout << "NO" << endl;
				}
			} else {
				if (-b/a != -d/c) {
					if (b % a == 0) {
						cout << -b/a << endl;						
					} else {
						cout << "NO" << endl;
					}
				} else {
					cout << "NO" << endl;
				}
			}
		}
	}
	
	return 0;
}