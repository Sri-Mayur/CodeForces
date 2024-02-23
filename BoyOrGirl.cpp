#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string s;
    cin>>s;
    
    unordered_set<char>uset;
    
    for(int i = 0; i <s.size(); i++){
        uset.insert(s[i]);
    }
    
    if(uset.size()%2 == 0){
        cout<<"CHAT WITH HER!";
    }else{
        cout<<"IGNORE HIM!";
    }
    return 0;
}