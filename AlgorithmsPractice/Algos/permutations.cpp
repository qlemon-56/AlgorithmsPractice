
#include <iostream>
#include <vector>
#include <array>

using namespace std;

/*

vector <int> permutation;
for (int i = 0; i < 6; i++) {
	permutation.push_back(i);
}

do {
	for (auto y : permutation) {
		cout << y;
	}
	cout << endl;
} while (next_permutation(permutation.begin(), permutation.end()));
*/

array<bool, 3> chosen = {false, false, false};
vector <int> Permutation;

// set would be {0 , 1, 2 }
void search() {
	if (Permutation.size() == 3) {

		for (auto y : Permutation) {
			cout << y;
		}
		cout << endl;
	}
	else {
		for (int i = 0; i < 3; i++) {


			if (chosen[i]) continue;

			chosen[i] = true;
			Permutation.push_back(i);
			search();
			chosen[i] = false;
			Permutation.pop_back();

		}
	}
}

/*
This problem in chapter 5 of Guide to Competitive Programming introduced me to the concept of backtracking

The problem can be visualised using a State Space Tree; when we have a problem which requires:
1. A State Space Tree (SST) and
2. All possible solutions
it indicates we are in the presence of a backtracking problem. 

The three keys of backtracking are:
1. Choices
2. Constraints
3. Goal

Here the choice is to use one number at a time, the constraint is using it only once, and the goal is to create a permutation
The backtracking formula is in this type of function

void Backtrack(res, args) {
	
	if (goal_reached) {
		// process solution
		add solution to res (result)

		return
	} else {
		
		for (int i = 0; i < number_of_choices; i++) {
			if (choices[i] is valid // valid does not equal true in this case ) {
				make choices[i] // add to used list and update ur solution
				Backtrack(res, args)
				undo choices[i] // remove from used list and delete ur solution
			}
		}
	}
}

*/


