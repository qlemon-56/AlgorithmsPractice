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
vector <int> coins = { 1, 3, 4 };


int solve(int x) {
	
	if (x < 0) return INF;
	if (x == 0) return 0;

	int best = INF;

	for (auto c : coins) {
		best = min(best, solve(x - c) + 1);
	}

	return best;
}


int main() {
	
	int bp= solve(100);
	cout << bp;
	return 0;

}

