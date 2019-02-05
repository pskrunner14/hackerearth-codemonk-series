#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]) {
    string str;
    cin >> str;

    int k;
    cin >> k;

    vector<string> strings;
    for (int i = 0; i < str.size(); i++) {
        strings.push_back(str.substr(i));
    }

    stable_sort(strings.begin(), strings.end());
    cout << strings[k - 1] << endl;

    return 0;
}