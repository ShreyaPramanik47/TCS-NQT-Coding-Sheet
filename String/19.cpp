// Write a program to find the largest word in a given string.

#include <bits/stdc++.h>
using namespace std;
string ans(string str){
    int cnt=0;
    int maxCnt=INT_MIN;
    string temp="";
    string result;
    for(int i=0; i<str.size(); i++){
        if(isalpha(str[i])){
            cnt++;
            temp+=str[i];
        }
        else{
             if(cnt>maxCnt){
            result=temp;
            maxCnt=cnt;
        }
            cnt=0;
            temp="";
        }
    }
    return result;
}
int main(){
    string str;
    getline(cin, str);
    cout<<ans(str);
    return 0;
}

// t.c = O(n)
// s.c = O(n)