#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        if(n % 4 != 0){
            cout<<"NO"<<endl;
            continue;
        }
        else{
            cout<<"YES"<<endl;
            for(int i = 0; i<n/2; i++){
                cout<< 2*(i+1)<<" ";
            }
            for(int i = 0; i <n/2 -1; i++){
                cout<< 2*i + 1<<" ";
            }
            cout<<n - 1 + n/2<<endl;

        }
    }

    return 0;
}