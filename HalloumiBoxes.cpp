#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    int n, k;
    vector<int> nums;
    cin>>t;

    while(t--){

        cin>>n>>k;

        for(int i = 0; i<n; i++){
            cin>>nums[i];
        }

        bool possible = true;
        for(int i = 0; i<n; i++){
            if(nums[i] > nums[i+1] && k == 1){
                possible = false;
                break;
            }
        }

        if(possible = true){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
    }

    return 0;
}
