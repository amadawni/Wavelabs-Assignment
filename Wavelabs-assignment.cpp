#include <vector>
#include <unordered_map>
#include<iostream>
using namespace std;
int maximalNetworkRank(int n, std::vector<std::vector<int>>& cables) {
    std::unordered_map<int, int> rank;
    std::unordered_map<int, std::unordered_map<int, bool>> connected;

    for (const auto& cable : cables) {
        int a = cable[0];
        int b = cable[1];

        rank[a]++;
        rank[b]++;

        connected[a][b] = true;
        connected[b][a] = true;
    }

    int maxRank = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int currentRank = rank[i] + rank[j];

            if (connected[i].count(j))
                currentRank--;

            maxRank = std::max(maxRank, currentRank);
        }
    }

    return maxRank;
}

int main() {
    int n = 4;
    std::vector<std::vector<int>> cables = {{0, 1}, {0, 3}, {1, 2}, {1, 3}};

    int maxRank = maximalNetworkRank(n, cables);
    std::cout << "Maximal Network Rank: " << maxRank << std::endl;

return 0;
}