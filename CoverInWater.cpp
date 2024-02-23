#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        vector<string> v;
        int n, consecutive_water = 0, water = 0, ans = 0;
        cin >> n;

        string s;
        cin >> s;

        for(int i = 0; i < n; i++){
            
            if (s[i] == '.') {
                consecutive_water++;
                water++;
                }else {
                    consecutive_water = 0;
                }
                ans = max(ans, consecutive_water);
        }


        if (ans >= 3) {
            ans = 2;
        } else {
            ans = water;
        }

        cout << ans << endl;
    }

    return 0;
}