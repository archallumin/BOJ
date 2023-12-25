#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);
	
	int n;
	cin >> n;
	int a[10001] = { 0, }; //배열의 개수를 지정한다.
	for (int i = 0; i < n; i++) {
		int b;
		cin >> b;
		a[b]++;
		/* i가 n이 될 때까지 숫자를 계속 입력받은 다음, a 배열에 추가시킨다. */
	}
	for (int j = 0; j < 10001; j++) { //배열 끝으로 갈 때까지
		for (int k = 0; k < a[j]; k++) { //배열 안의 숫자 존재 여부를 확인하며
			cout << j << "\n"; // 있을 경우 해당 값을 계속 출력한다.
		}
	}
	return 0;
}