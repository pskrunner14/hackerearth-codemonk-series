#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    int N;
    cin >> N;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    int num;
    for (int i = 0; i < N; i++) {
        cin >> num;
        A[i] += num;
    }
    
    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }
    
    return 0;
}