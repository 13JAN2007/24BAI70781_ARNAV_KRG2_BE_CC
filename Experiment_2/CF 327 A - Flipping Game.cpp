#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int size;
    if (cin >> size) {
        int onesCount = 0;
        int bestGain = -1;
        int currentGain = 0;

        for (int i = 0; i < size; ++i) {
            int value;
            cin >> value;

            if (value == 1) {
                onesCount++;
                currentGain--;
            } else {
                currentGain++;
            }

            if (currentGain < 0) {
                currentGain = 0;
            }

            bestGain = max(bestGain, currentGain);
        }

        if (onesCount == size) {
            cout << size - 1 << "\n";
        } else {
            cout << onesCount + bestGain << "\n";
        }
    }
    return 0;
}