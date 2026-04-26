#include <iostream>
#include <vector>

using namespace std;

int main() {
    int nodes;

    if (cin >> nodes) {
        vector<vector<int>> adjacencyList(nodes + 1);
        vector<pair<int, int>> edgeList(nodes - 1);

        for (int edgeIndex = 0; edgeIndex < nodes - 1; ++edgeIndex) {
            cin >> edgeList[edgeIndex].first >> edgeList[edgeIndex].second;

            adjacencyList[edgeList[edgeIndex].first].push_back(edgeIndex);
            adjacencyList[edgeList[edgeIndex].second].push_back(edgeIndex);
        }

        vector<int> edgeValues(nodes - 1, -1);
        int currentValue = 0;

        for (int node = 1; node <= nodes; ++node) {
            if (adjacencyList[node].size() >= 3) {
                for (int k = 0; k < 3; ++k) {
                    edgeValues[adjacencyList[node][k]] = currentValue++;
                }
                break;
            }
        }

        for (int edgeIndex = 0; edgeIndex < nodes - 1; ++edgeIndex) {
            if (edgeValues[edgeIndex] == -1) {
                edgeValues[edgeIndex] = currentValue++;
            }
            cout << edgeValues[edgeIndex] << "\n";
        }
    }

    return 0;
}