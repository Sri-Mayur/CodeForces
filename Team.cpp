#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int t, count = 0;
    cin>>t;

    while(t--){
        int a[3];
        int sum = 0;

        for(int i = 0; i<3; i++){
            cin>>a[i];
            sum += a[i];
        }

        if(sum >=2){
            count++;
        }
    }
    cout<<count;

    return 0;
}