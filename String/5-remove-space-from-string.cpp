#include <bits/stdc++.h>
using namespace std;
string removeSpace(string str){
    // string newStr;
    int cnt=0;
    for(int i=0; i<str.size(); i++){
        if(str[i]!=' '){
            str[cnt]=str[i];
            cnt++;
        }
    }
    str[cnt]='\0';
    // string will get end here
    
    return str;
    // return newStr;
}
int main(){
    string str;
    getline(cin, str);
  cout<<  removeSpace(str);

}