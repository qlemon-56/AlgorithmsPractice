#include <iostream> 
#include<vector>

using namespace std;

// Factorial func
int result = 1;
void factorialFunc(int k) {

	if (k == 0) {
		cout << result << endl;
	}
	else {
		result = result * k;
		factorialFunc(k - 1);
	}
}
