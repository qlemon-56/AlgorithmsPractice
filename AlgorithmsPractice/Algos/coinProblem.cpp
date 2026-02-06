#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;
/*
//////////////////////////////////////////////
With memoization


const int INF = 1e9;
vector <int> coins = { 1, 3, 4 };

bool ready[100];
int value[100];


int solve(int x) {

	if (x < 0) return INF;
	if (x == 0) return 0;

	if (ready[x]) return value[x];

	int best = INF;

	for (auto c : coins) {
		best = min(best, solve(x - c) + 1);
	}

	value[x] = best;
	ready[x] = true;

	return best;
}

///////////////////////////////////////////
Without memoization


const int INF = 1e9;
vector <int> coins = { 1, 3, 4 };


int solveCoinProblem(int x) {

	if (x < 0) return INF;
	if (x == 0) return 0;

	int best = INF;

	for (auto c : coins) {
		best = min(best, solveCoinProblem(x - c) + 1);
	}

	return best;
}
*/