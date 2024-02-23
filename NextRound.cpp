#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, k;

    cin>>n>>k;
    vector<int> v;

    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    int target = v[k-1];

    int count = 0;

    for(int i = 0; i <n; i++){

        if(v[i] > 0 and v[i] >= target){
            count++;
        }

    }
    cout<<count<<endl;


    return 0;
}