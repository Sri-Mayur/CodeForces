#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> v;
        for(int i=0;i<n;i++){
            string tmp;
            cin>>tmp;
            v.push_back(tmp);
        }
        bool k = false;
        bool flag=false;
        for(int i=0;i<n;i++){
            for(int j=1;j<n-1;j++){
                if(v[i][j]=='1'){
                    if(v[i][j-1]=='0' && v[i][j+1]=='0') k=true;
                    break;
                }
            }
            
        }
        
        if(k) cout<<"TRIANGLE"<<endl;
        else cout<<"SQUARE"<<endl;
    }
    return 0;
}