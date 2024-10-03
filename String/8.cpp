// Remove brackets from an algebraic expression
#include <bits/stdc++.h>
using namespace std;
string newStr(string str){
    string strr;
    for(int i=0; i<str.size(); i++){
        if(str[i]!='(' && str[i]!=')'){
            strr+=str[i];
        }
    }
    return strr;
}
int main(){
    string str;
    getline(cin, str);
   cout<< newStr(str);
    return 0;
}