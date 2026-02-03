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

array <int, 4> column = {0, 0, 0,0 };

array <int, 4> diag1 = {0, 0, 0,0 };

array <int, 4> diag2 = {0, 0, 0,0 };

int myCount = 0;
void chessBoard(int y) {

	if (y == 4) {
		myCount++;
		return;
	}
	else {

		for (int x = 0; x < 4; x++) {

			if (column[x] || diag1[x + y] || diag2[x - y + 4 - 1]) continue;

			column[x] = diag1[x + y] = diag2[x - y + 4 - 1] = 1;
			chessBoard(y + 1);
			column[x] = diag1[x + y] = diag2[x - y + 4 - 1] = 0;

		}
	}
}

int main() {

	// begin by checking previous knowledge
	// yesterday we made a function to create permutations of a list from 0 to n - 1 e.g. {0, 1, 2, 3, 4} 
	// this worked through recursion
	
	chessBoard(4);


	return 0;
}

