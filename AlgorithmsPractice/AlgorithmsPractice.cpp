// AlgorithmsPractice.cpp : Defines the entry point for the application.

#include "AlgorithmsPractice.h"
#include <set>
#include <vector>

using namespace std;

/*
Data structures and Algorithms Practice

Some common data structures
- Sets
- Unordered sets
- Maps
- Strings
- Bitsets
- Vecotrs
- QUeue
- Priority Queue
- Stacks
- Deque
- Linked Lists

*/
/*
vector<int> subset;

void printSubset(vector<int> &newSubset) {

	for (auto x : newSubset) {
		cout << x << " ";
	}
	cout << "\n " << endl;
}

void search(int k) {
	
	if (k == 9) {
		printSubset(subset);
	}
	else {
		search(k + 1);
		subset.push_back(k);
		search(k + 1);
		subset.pop_back();
	}
}

*/
/*
Factorial function:

int result = 1;

void factorialFunc(int k) {
	
	if (k == 0) {
		cout << result << endl;
	} else {
		result = result * k;
		factorialFunc(k - 1);
	}
}
*/

int main() {

	//search(0);
	
	factorialFunc(5);


	return 0;
}

