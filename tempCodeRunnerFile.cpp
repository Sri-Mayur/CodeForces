#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, ans = 0;
        cin>>n;

        vector<int> v(2*n);

        for(int i = 0; i<2*n; i++){
            cin>>v[i];
        }

        for(int i = 0; i,2*n; i+=2){
            ans += v[i];
        }
        cout<<ans<<endl;
    }

    return 0;
}