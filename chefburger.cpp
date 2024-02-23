#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int t, bun = 0, patties = 0;
    cin>> t;

    while(t--){
        cin>>bun>>patties;

        int ans = min(bun, patties);
        cout<<ans<<endl;

    }

    return 0;
}