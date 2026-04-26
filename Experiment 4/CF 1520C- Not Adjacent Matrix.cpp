#include <iostream>

using namespace std;

void generateMatrix() {
    int size;
    cin >> size;

    if (size == 1) {
        cout << 1 << "\n";
        return;
    }

    if (size == 2) {
        cout << -1 << "\n";
        return;
    }

    int currentNumber = 1;

    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            cout << currentNumber << " ";
            currentNumber += 2;

            if (currentNumber > size * size) {
                currentNumber = 2;
            }
        }
        cout << "\n";
    }
}

int main() {
    int testCases;

    if (cin >> testCases) {
        while (testCases--) {
            generateMatrix();
        }
    }

    return 0;
}