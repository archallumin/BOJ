#include <iostream>
using namespace std;
/* 오차가 없어야 되니까 long double의 힘을 믿어 보자... */
int main(void) {
	int a, b;
	cin >> a >> b;
	cout << fixed; //cout에 이런 기능이 있는 줄은 몰랐다
	cout.precision(16);
	cout << (long double) a / b << "\n";
	return 0;
}