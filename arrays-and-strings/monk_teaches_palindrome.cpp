#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

bool isPalin(string str) {
    int li = 0, ri = str.size() - 1;
    while (li < ri) {
        if (str[li++] != str[ri--]) {
            return false;
        }
    }
    return true;
}

string evenOdd(string str) {
    if (str.size() % 2) {
        return "ODD";
    }
    return "EVEN";
}

int main() {
    
    int N;
    cin >> N;
    
    vector<string> cases;
    string str;
    
    for (int i = 0; i < N; i++) {
        cin >> str;
        cases.push_back(str);
    }
    
    for (int i = 0; i < N; i++) {
        if (isPalin(cases[i])) {
            cout << "YES" << ' ' << evenOdd(cases[i]) << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
}