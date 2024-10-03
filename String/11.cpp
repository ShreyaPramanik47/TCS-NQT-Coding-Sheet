// Calculate Frequency of characters in a String
#include <bits/stdc++.h>
using namespace std;
void findFreq(string str){
    int freq[26]={0};
    for(int i=0; i<str.size(); i++){
        freq[str[i]-'a']++;
    }
    for(int i=0; i<26; i++){
        if(freq[i]!=0){
            cout<< char(i+'a')<<freq[i]<<" ";
        }
    }
}
int main(){
    string str = "takeuforward";
    findFreq(str);
    return 0;
}