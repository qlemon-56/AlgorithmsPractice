
#include <iostream>
#include <vector>

using namespace std;

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

/*
array<bool, 3> chosen = {false, false, false};
vector <int> permutation;

// set would be {0 , 1, 2 }

void  search() {
	if (permutation.size() == 3) {

		for (auto y : permutation) {
			cout << y;
		}
		cout << endl;
	}
	else {
		for (int i = 0; i < 3; i++) {


			if (chosen[i]) continue;

			chosen[i] = true;
			permutation.push_back(i);
			search();
			chosen[i] = false;
			permutation.pop_back();

		}
	}
}
*/

