// Find Non-repeating characters of a String

#include <bits/stdc++.h>
using namespace std;
void findAns(string str){
    unordered_map<char, int>mp;
    for(int i=0; i<str.size(); i++){
        char ch=tolower(str[i]);
        mp[ch]++;
    }
    for(auto it:mp){
        if(it.second==1){
            cout<<it.first<<" ";
        }
    }

}
int main(){
    string str;
    getline(cin, str);
    findAns(str);
    return 0;
}
// Google