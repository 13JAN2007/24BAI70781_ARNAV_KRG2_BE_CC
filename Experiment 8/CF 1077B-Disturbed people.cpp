#include <iostream>
#include <vector>

using namespace std;

int main() {
    int size;

    if (cin >> size) {
        vector<int> arr(size);

        for (int index = 0; index < size; ++index) {
            cin >> arr[index];
        }

        int operations = 0;

        for (int index = 1; index < size - 1; ++index) {
            if (arr[index] == 0 && arr[index - 1] == 1 && arr[index + 1] == 1) {
                operations++;
                arr[index + 1] = 0;
            }
        }

        cout << operations << "\n";
    }

    return 0;
}