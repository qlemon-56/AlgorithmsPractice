#include <vector>
#include <iostream>

using namespace std;


// implementation A
vector<int> subset;

void printSubset(vector<int>& newSubset) {

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

// implementation B

int bitSubset;

int testNum = 24;
// 24 in binary is 16 + 8 = 11000

int n = 5;

void bitSubsetFunc() {

	for (int b = 0; b < (1 << n); b++) {
		vector<int> subset;

		for (int i = 0; i < n; i++) {
			if (b & (1 << i)) subset.push_back(i);

		}

		for (auto x : subset) {
			cout << x << "\n";
		}
	}

}
