#include <bits/stdc++.h>
using namespace std;

int main(){
    int k, d, n;
    cin>>k>>d>>n;
    
    int a[1001] = {0};
    
    for(int i = 1; i <= n; i++){
        a[i] = i * k;
    }
    
    int sum = 0;
    for(int i = 1; i<=n; i++){
        sum += a[i];
    }
    
    if((sum - d) > 0 ) cout<< sum - d;
    else cout<<0;
    return 0;
}