#include <iostream>

using namespace std;

int main(void) {
	int problems, a, b, c, count=0;
	cin >> problems;

	for (int i = 0; i < problems; i++) {
		cin >> a >> b >> c;	
		if (a + b + c >= 2) {
			count++;
		}
	}

	cout << count;
	return 0;
}
