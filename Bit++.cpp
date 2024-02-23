#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    int x = 0;

    for (int i = 0; i < n; i++) {
        string statement;
        cin >> statement;

        if (statement[0] == '+' || statement[1] == '+') {
            x++;
        } else {
            x--;
        }
    }

    cout << x << endl;

    return 0;
}
