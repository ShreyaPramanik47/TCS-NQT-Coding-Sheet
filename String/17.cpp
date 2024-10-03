// Remove characters from first string present in the second string
#include <bits/stdc++.h>
using namespace std;
string finalString(string str1, string str2){
    set<char>st;
    string ans="";
    for(int i=0; i<str2.size(); i++){
        st.insert(str2[i]);
    }
    for(int i=0; i<str1.size(); i++){
        if(st.find(str1[i])==st.end()){
            ans+=str1[i];
        }
    }
    return ans;
}
int main(){
    string str1, str2;
    getline(cin, str1);
    getline(cin , str2);
    cout<< finalString(str1,  str2);
    return 0;
}