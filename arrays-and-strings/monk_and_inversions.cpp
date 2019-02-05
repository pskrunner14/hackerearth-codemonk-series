#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    int N, n, num;
    cin >> N;
    
    vector<vector<vector<int>>> cases(N);
    
    for (int t = 0; t < N; t++) {
        cin >> n;
        vector<vector<int>> matrix(n, vector<int>(n));
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> num;
                matrix[i][j] = num;
            }
        }
        cases[t] = matrix;
    }
    
    for (int t = 0; t < N; t++) {
        vector<vector<int>> matrix = cases[t];
        int n = matrix.size();
        
        int inv = 0;
        for (int p = 0; p < n; p++) {
            for (int q = 0; q < n; q++) {
                for (int i = 0; i <= p; i++) {
                    for (int j = 0; j <= q; j++) {
                        if (matrix[i][j] > matrix[p][q]) {
                            inv++;
                        }
                    }
                }
            }
        }
        
        cout << inv << '\n';
    }
    
    return 0;
}