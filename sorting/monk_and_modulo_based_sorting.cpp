#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int k;

struct ModuloComparator {
    inline bool operator() (const int& val1, const int& val2) {
        return ((val1 % k) < (val2 % k));
    }
};

int main() {
    
    int N, num;
    cin >> N;
    cin >> k;
    
    vector<int> values(N);
    for (int i = 0; i < N; i++) {
        cin >> values[i];
    }
    
    stable_sort(values.begin(), values.end(), ModuloComparator());
    for (auto const &elem: values) {
        cout << elem << " ";
    }
    
    return 0;
}