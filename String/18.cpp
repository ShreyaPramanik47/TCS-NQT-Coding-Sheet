// Change every letter with the next lexicographic alphabet in the given string

#include <bits/stdc++.h>
using namespace std;
string ans(string str){
    for(int i=0; i<str.size(); i++){
        if(str[i]=='z')str[i]='a';
        else{
            str[i]=char(str[i]+1);
        }
    }
    return str;
}
int main(){
    string str;
    getline(cin, str);
    cout<< ans(str);
    return 0;
}