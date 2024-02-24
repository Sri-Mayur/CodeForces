#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    
    int cap = 0, low = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            cap++;
        } else {
            low++;
        }
    }
    
    if (low >= cap) {
        for (int i = 0; i < n; i++) {
            s[i] = tolower(s[i]);
        }
    } else {
        for (int i = 0; i < n; i++) {
            s[i] = toupper(s[i]);
        }
    }
    cout << s;
    return 0;
}