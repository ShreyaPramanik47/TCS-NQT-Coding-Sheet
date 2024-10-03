// Count number of words in a given string
#include <bits/stdc++.h>
using namespace std;
int result(string str){
    int cnt=0;
    int ans=0;
    for(int i=0; i<str.size(); i++){
        if(isalpha(str[i])){
            cnt++;
        }
        else if(cnt>0 && str[i]==' '){
            cnt=0;
            ans++;
        }
    }
    // count the last word (if the string does not end with a space)
    if(cnt>0){
        ans++;
    }
    return ans;
}
int main(){
    string str;
    getline(cin , str);
   cout<< result(str);
    return 0;
}