#include <bits/stdc++.h>
using namespace std;

class DisjointSet {
private:
    vector<int> parent;
    vector<int> rank;

public:
    DisjointSet(int n) {
        parent.resize(n);
        rank.resize(n, 0);
        for (int i = 0; i < n; ++i) {
            parent[i] = i; // Initialize each element as a separate set with itself as the parent.
        }
    }

    int find(int x) {
        if (x != parent[x]) {
            parent[x] = find(parent[x]); // Path compression
        }
        return parent[x];
    }

    void unionSets(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);

        if (rootX != rootY) {
            if (rank[rootX] < rank[rootY]) {
                parent[rootX] = rootY;
            } else if (rank[rootX] > rank[rootY]) {
                parent[rootY] = rootX;
            } else {
                parent[rootY] = rootX;
                rank[rootX]++;
            }
        }
    }
};

int main() {
    int n = 5; // The number of elements
    DisjointSet dsu(n);

    dsu.unionSets(0, 1);
    dsu.unionSets(2, 3);
    dsu.unionSets(0, 2);

    cout << "Are 0 and 3 in the same set? " << (dsu.find(0) == dsu.find(3) ? "Yes" : "No") << endl;
    cout << "Are 1 and 4 in the same set? " << (dsu.find(1) == dsu.find(4) ? "Yes" : "No") << endl;

    return 0;
}
