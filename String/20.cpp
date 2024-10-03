// Write a program to sort characters in a string
#include <bits/stdc++.h>
using namespace std;
string result(string str){
    int freq[26]={0};
    string ans;
    for(int i=0; i<str.size(); i++){
        freq[str[i]-'a']++;
    }
    for(int i=0; i<26; i++){
        if(freq[i]>0){
            ans+= char(i+'a');
        }
    }
return ans;

}
int main(){
    string str;
    getline(cin, str);
    cout<< result(str);
}