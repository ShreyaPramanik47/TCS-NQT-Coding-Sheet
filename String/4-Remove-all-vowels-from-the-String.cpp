#include <bits/stdc++.h>
using namespace std;
string removeVowel(string str){
    for(int i=0; i<str.size(); i++){
        if(str[i]=='a' ||str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
            str=str.substr(0,i)+str.substr(i+1);
            i--;
        }
    }
    return str;
}
int main(){
    string str;
    getline(cin, str);
   cout<< removeVowel(str);
    return 0;
}