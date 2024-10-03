// Remove characters from a string except alphabets
#include <bits/stdc++.h>
using namespace std;
string newStr(string str){
   string strr;
    for(int i=0; i<str.size(); i++){
        if(isalpha(str[i])){
            strr+=str[i];
        }
    }
    return strr;
}
int main(){
    string str = "take12% *&u ^$#forward";
    cout<< newStr(str);
    return 0;
}