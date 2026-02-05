#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;

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
