#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main() {
    
    int N, n, k, num;
    cin >> N;

    string str;    
    vector<deque<int>> cases;
    vector<int> ks;
    
    for (int i = 0; i < N; i++) {
        cin >> n;
        cin >> k;
        ks.push_back(k);
        
        deque<int> d;
        for (int j = 0; j < n; j++) {
            cin >> num;
            d.push_back(num);
        }
        cases.push_back(d);
    }
    
    for (int i = 0; i < N; i++) {
        k = ks[i];
        deque<int> array = cases[i];
        for (int j = 0; j < k; j++) {
            int elem = array.back();
            array.pop_back();
            array.push_front(elem);
        }
        
        for (int j = 0; j < array.size(); j++) {
            cout << array[j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}