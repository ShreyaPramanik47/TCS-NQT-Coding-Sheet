// Print all the duplicates in the input string.
#include <bits/stdc++.h>
using namespace std;
int printDuplicates(string str){
    // map<char,int>mp;
    // for(int i=0; i<str.length(); i++){
    //     mp[str[i]]++;
    // }
    // for(auto it:mp){
    //     if(it.second>1){
    //         cout<< it.first << "-" << it.second<<endl;
    //     }
    // }

    int freq[26]={0};
    for(int i=0; i<str.size(); i++){
        freq[str[i]-'a']++;
    }
    for(int i=0; i <26; i++){
        if(freq[i]>1){
            cout<<char(i +'a') << "-" << freq[i]<<endl;
        }
    }
}
int main(){
    string str;
    getline(cin, str);
    printDuplicates(str);
    return 0;
}