#include<iostream>
using namespace std;

void mathematics(int a, int b, int c, int d){
        
        int x, y, z;
        
        x = (a + b) / 2;
        y = (b + c) / 2;
        z = (c + d) / 2;
        
        cout<<x<<" "<<y<<" "<<z<<endl;
    }

int main(){
    
    
    
    int t, a, b, c, d;
    
    cin>>t;
    
    while(t--){
        
        cin>>a>>b>>c>>d;
        
        mathematics(a,b,c,d);
    }
}