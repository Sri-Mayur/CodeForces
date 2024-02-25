#include <iostream>
#include <string>
using namespace std;

bool soln(string s){
    int count1 = 0, count0 = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1'){
            count1++;
            count0 = 0;
            
            if(count1 >= 7){
                return true;
            }
        }
        else {
            count0++;
            count1 = 0;
            if(count0 >= 7){
                return true;
            }
        }
    }
    return false;
}

int main(){
    string s;
    cin >> s;
    
    if(soln(s)){
        cout << "YES";
    } else {
        cout << "NO";
    }
    
    return 0;
}
