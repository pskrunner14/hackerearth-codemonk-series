#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

bool isVowel(char c) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return true;
    return false;
}

int main() {
    
    string str;
    cin >> str;
    
    int longest = 0;
    int current = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isVowel(str[i])) {
            current++;
        } else {
            if (current > longest) {
                longest = current;
            }
            current = 0;
        }
    }
    if (current > longest)
        longest = current;
    
    cout << longest << endl;
    
    return 0;
}