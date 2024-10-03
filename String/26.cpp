// Reverse Words in a String

#include <bits/stdc++.h>
using namespace std;
string result(string str){
    int i=0;
    string ans="";
    while(i<str.size()){
        while(str[i]==' ' && i<str.size()){
            i++;
        }
        string temp="";
        while(str[i]!=' '&& i<str.size()){
            temp+=str[i];
            i++;
        }
        if(!temp.empty()){
            if(ans.empty()){
                ans+=temp;
            }
            else{
                ans=temp+" "+ans;
            }
        }
    }
    return ans;
}
int main(){
    string str;
    getline(cin, str);
    cout<<result(str);
}