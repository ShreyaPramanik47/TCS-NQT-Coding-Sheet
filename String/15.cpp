// Remove all duplicates from the input string.
#include <bits/stdc++.h>
using namespace std;
string removeDuplicates(string str){
    map<char,int>mp;
    string result="";
    for(int i=0; i<str.size(); i++){
        if(mp.find(str[i])==mp.end()){
            mp[str[i]]=i;
            result+=str[i];
        }
    }
    return result;

    // string ans="";
    // vector<bool>result(26,false);
    // for(int i=0; i<str.size(); i++){
    //     if(result[str[i]-'a']==false){
    //         ans+=str[i];
    //         result[str[i]- 'a']=true;
    //     }
    // }
    // return ans;
}
int main(){
     string str;
     getline(cin, str);
     cout<< removeDuplicates(str);
    return 0;    
}