#include <iostream>
using namespace std;

int main(void) {
	int a, b;
	cin >> a >> b;
	cout << a / b << ".";
	a = a % b;
	for (int i = 1; i <= 1200; i++) {
		a = a * 10;
		cout << a / b;
		a -= (a / b) * b;
	}
	cout << "\n";
	return 0;
}