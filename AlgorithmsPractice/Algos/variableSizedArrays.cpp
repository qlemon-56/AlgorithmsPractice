//hackerrank problem i struggled with: https://www.hackerrank.com/challenges/variable-sized-arrays/problem

// Final solution
#include <cstdio>
#include <vector>
#include <iostream>
#include <sstream>


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int num_of_arrays, queries;
    std::cin >> num_of_arrays >> queries;

    std::vector <std::string> k;
    std::vector <std::vector<int>> indexes(num_of_arrays);


    // get input and convert to int then populate indexes
    for (int i = 0; i < num_of_arrays; i++) {
        std::string place;
        getline(std::cin >> std::ws, place);
        std::istringstream iss(place);

        while (iss) {
            std::string t;
            iss >> t;
            if (!t.empty()) indexes[i].emplace_back(stoi(t));
        }
    }

    for (int i = 0; i < num_of_arrays; i++) {
        int x, y; std::cin >> x >> y;
        std::cout << indexes[x][y + 1] << std::endl;
    }

    return 0;
}

/* 

// First solution 

int main() {
    //Enter your code here. Read input from STDIN. Print output to STDOUT

    vector <int> a;
    int num_of_arrays;
    int queries;
    vector <string> k;
    vector <vector<int>> indexes;

    cin >> num_of_arrays >> queries;

    // get input
    for (int i = 0; i < num_of_arrays; i++) {
        string place;
        getline(cin >> ws, place);

        vector<string>::iterator it = k.begin();
        advance(it, i);
        k.insert(it, place);
    }
    indexes.resize(num_of_arrays);

    // convert input to int and populate indexes
    for (int i = 0; i < num_of_arrays; i++) {

        istringstream iss(k[i]);

        int counter = 0;
        while (iss) {
            string t;
            iss >> t;
            vector<int>::iterator it = indexes[i].begin();
            advance(it, counter);

            if (!t.empty()) {
                indexes[i].insert(it, stoi(t));
            }
            counter++;
        }
    }

    for (int i = 0; i < num_of_arrays; i++) {
        int x, y;
        cin >> x >> y;
        cout << indexes[x][y + 1] << endl;
    }

    return 0;
}
*/