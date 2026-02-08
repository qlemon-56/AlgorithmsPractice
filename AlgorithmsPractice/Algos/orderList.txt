#include <vector>
#include <algorithm>

using namespace std;
// Question I failed once
vector<int> testSet = { 3, 4, 6, 72, 1, 32, 21, 90 };
int random = 4;
vector<int> orderlist(vector<int>& arg) {

	vector<int> dummy;
	sort(arg.begin(), arg.end());

	// arg is now ordered from smallest to biggest = 10, 9 , 4, 3, 2

	for (int i = 0; i < random; i++) {
		dummy.push_back(arg[i]);
	}

	// first random elements are now in order
	// now we need to insert remainig elements in revers (descending order)

	for (int x = arg.size() - 1; x > random - 1; x--) {
		dummy.push_back(arg[x]);
	}

	return dummy;
}
