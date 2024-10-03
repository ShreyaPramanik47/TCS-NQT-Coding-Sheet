// Check if two Strings are anagrams of each other
#include <bits/stdc++.h>
using namespace std;
bool checkAnagram(string str1, string str2){
    int freq[26]={0};
    for(int i=0; i<str1.size(); i++){
        char ch=tolower(str1[i]);
        freq[ch-'a']++;
    }
     for(int i=0; i<str1.size(); i++){
        char ch=tolower(str2[i]);
        freq[ch-'a']--;
    }
    for(int i=0; i<26; i++){
        if(freq[i]!=0){
            return false;
        }
    }
    return true;
}
int main(){
    string str1,str2;
    cin>>str1>>str2;
    if(checkAnagram(str1, str2)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}