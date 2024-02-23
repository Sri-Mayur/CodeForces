#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int t, maxi = 0;
    cin>>t;

    while(t--){
        int n, x;

        cin>>n>>x;

        int nums[n];

        for(int i = 0; i<n; i++){
            cin>>nums[i];
        }

        int j = 0;
        for(int i = 0; i<n; i++){

            int A = nums[i] - j;
            j = nums[i];
            maxi = max(A, maxi); 
        }

        int B = 2 * (x - j);
        maxi = max(B, maxi);

        cout<<maxi<<endl;

    }

    return 0;
}