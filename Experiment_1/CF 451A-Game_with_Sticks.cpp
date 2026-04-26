#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int rows, cols;

    if (cin >> rows >> cols) {
        int moves = min(rows, cols);

        if (moves % 2 == 0) {
            cout << "Malvika\n";
        } else {
            cout << "Akshat\n";
        }
    }

    return 0;
}