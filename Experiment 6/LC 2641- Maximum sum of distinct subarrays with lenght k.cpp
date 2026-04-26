#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    long long maximumSubarraySum(vector<int>& arr, int windowSize) {
        unordered_map<int, int> freqMap;
        long long windowSum = 0;
        long long maxSum = 0;

        for (int index = 0; index < arr.size(); ++index) {
            windowSum += arr[index];
            freqMap[arr[index]]++;

            if (index >= windowSize) {
                windowSum -= arr[index - windowSize];
                freqMap[arr[index - windowSize]]--;

                if (freqMap[arr[index - windowSize]] == 0) {
                    freqMap.erase(arr[index - windowSize]);
                }
            }

            if (index >= windowSize - 1 && freqMap.size() == windowSize) {
                maxSum = max(maxSum, windowSum);
            }
        }

        return maxSum;
    }
};