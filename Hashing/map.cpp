#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main() {
    map<int, int> p;
    unordered_map<int, int> q;
    unordered_map<int, int> j;

    // Insert elements in map (sorted order)
    p[3] = 5;
    p[1] = 2;
    p[4] = 1;
    p[2] = 9;

    // Insert elements in unordered_map (random order)
    q[3] = 5;
    q[1] = 2;
    q[4] = 1;
    q[2] = 9;
    q[10] = 7;
    q[8] = 6;
    q[6] = 4;
    q[7] = 3;

    // Insert elements in another unordered_map (random order)
    j[1] = 5;
    j[2] = 2;
    j[3] = 1;
    j[4] = 9;
    j[10] = 7;
    j[8] = 6;
    j[6] = 4;
    j[7] = 3;

    // Traversing map using iterator (sorted order)
    cout << "1. map (sorted):" << endl;
    for (auto a : p) {
        cout << a.first << " " << a.second << endl;
    }

    // Traversing unordered_map `q` using iterator (random order)
    cout << "\n2. unordered_map `q` (random order):" << endl;
    for (auto a : q) {
        cout << a.first << " " << a.second << endl;
    }

    // Traversing unordered_map `j` using iterator (random order)
    cout << "\n3. unordered_map `j` (random order):" << endl;
    for (auto a : j) {
        cout << a.first << " " << a.second << endl;
    }

    return 0;
}
