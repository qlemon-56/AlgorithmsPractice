// AlgorithmsPractice.cpp : Defines the entry point for the application.

#include "AlgorithmsPractice.h"
#include <set>
#include <vector>
#include <algorithm>
#include <array>

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

const int INF = 1e9;
vector <int> coins = { 1, 3, 4};

bool ready[100];
int value[100];
int first[100];

int solve(int N) {

    value[0] = 0; 

	for (int x = 1; x <= N; x++) {
		value[x] = INF;
		for (auto c : coins) {
			if (x - c >= 0 && (value[x-c]+ 1) < value[x]) {
				value[x] = value[x - c] + 1;
				first[x] = c;
			}
		}
	}

	return value[N];
}

void printOut(int N) {
	while (N > 0) {
		cout << first[N] << "\n";
		N -= first[N];
	}
}

void idk(int N) {
	cout << solve(N) << "end" << "\n";

	printOut(N);

}

int main() {
	
	idk(10);
	return 0;

}

