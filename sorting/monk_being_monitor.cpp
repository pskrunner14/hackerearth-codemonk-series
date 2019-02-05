#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
#include <cmath>
using namespace std;

map<int, int> age_map;

int main() {

    int T, N;
    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> N;
        vector<int> students(N);
        for (int j = 0; j < N; j++) {
            cin >> students[j];
        }
        age_map.clear();

        for (auto const &key : students) {
            if (age_map.find(key) == age_map.end()) {
                // not found
                age_map[key] = 1;
            } else {
                // found
                age_map[key]++;
            }
        }
        vector<pair<int, int>> v;
        for (auto const &elem: age_map) {
            v.push_back(make_pair(elem.second, elem.first));
        }
        sort(v.begin(), v.end(), less<pair<int, int>>());
        
        int maxx = abs(v[0].first - v[v.size() - 1].first);
        if (maxx == 0) {
            cout << -1 << '\n';
        } else {
            cout << maxx << '\n';
        }
    }
    return 0;
}