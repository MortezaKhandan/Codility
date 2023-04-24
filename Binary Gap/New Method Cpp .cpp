#include <iostream>
#include <algorithm>

using namespace std;

int solution(int N) {
	int maxGap = 0;
	int currentGap = -1;
	while ( N > 0 ) {
		if ( N % 2 == 0 ) {
			if ( currentGap != -1 ) currentGap++;
		}
		else {
			if ( currentGap != -1 ) {
				maxGap = max(maxGap, currentGap);
			}
			currentGap = 0;
		}
		N /= 2;
	}
	return maxGap;
}

int main() {
	cout << solution(9) << endl; // 2
	cout << solution(529) << endl; // 4
	cout << solution(20) << endl; // 1
	cout << solution(15) << endl; // 0
	cout << solution(32) << endl; // 0
	return 0;
}