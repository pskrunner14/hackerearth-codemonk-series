#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]) {

    int N;
    cin >> N;

    string str;
    vector<string> strings;

    for (int i = 0; i < N; i++) {
        cin >> str;
        strings.push_back(str);
    }

    for (int i = 0; i < N; i++) {
        int num = 0;
        for (int j = 0; j < i; j++) {
            if (strings[j] < strings[i]) {
                num++;
            }
        }
        cout << num << endl;
    }

    return 0;
}