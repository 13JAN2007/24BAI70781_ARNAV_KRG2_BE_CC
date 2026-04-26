#include <iostream>
#include <vector>

using namespace std;

void processGame() {
    int size;
    cin >> size;

    vector<int> arr(size);
    int prefixOnesCount = 0;
    bool onlyOnesSoFar = true;

    for (int index = 0; index < size; ++index) {
        cin >> arr[index];

        if (arr[index] == 1 && onlyOnesSoFar) {
            prefixOnesCount++;
        } else {
            onlyOnesSoFar = false;
        }
    }

    if (prefixOnesCount == size) {
        if (size % 2 == 1) cout << "First\n";
        else cout << "Second\n";
    } else {
        if (prefixOnesCount % 2 == 0) cout << "First\n";
        else cout << "Second\n";
    }
}

int main() {
    int testCases;

    if (cin >> testCases) {
        while (testCases--) {
            processGame();
        }
    }

    return 0;
}