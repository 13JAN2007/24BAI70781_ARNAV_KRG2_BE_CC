#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int totalElements, limit;

    if (cin >> totalElements >> limit) {
        vector<int> nums(totalElements);

        for (int i = 0; i < totalElements; ++i) {
            cin >> nums[i];
        }

        int windowStart = 0;
        int bestLength = 0;
        int sumWindow = 0;

        for (int windowEnd = 0; windowEnd < totalElements; ++windowEnd) {
            sumWindow += nums[windowEnd];

            while (sumWindow > limit) {
                sumWindow -= nums[windowStart];
                windowStart++;
            }

            bestLength = max(bestLength, windowEnd - windowStart + 1);
        }

        cout << bestLength << "\n";
    }

    return 0;
}