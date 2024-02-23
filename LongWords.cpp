#include <iostream>
#include <string>
using namespace std;

void words(string s){

    int n = s.size();

    if(n > 10){
        cout<<s[0]<<n-2<<s[n-1]<<endl;

    }
    else{
        cout<<s<<endl;
    }
}

int main(){

    int t;

    cin>>t;

    while(t--){
        string s;

        cin>>s;

        words(s);
    }
}