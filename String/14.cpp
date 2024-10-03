// Return maximum occurring character in the input string
#include <bits/stdc++.h>
using namespace std;
char maxOcc(string str){
    int freq[26]={0};
    for(int i=0; i<str.size(); i++){
        freq[str[i]-'a']++;
    }
    int maxi=INT_MIN;
    int index=0;
    for(int i=0; i<26; i++){
        if(freq[i]>maxi){
            maxi=freq[i];
            index=i;
        }
    }
    return 'a'+index;
}
int main(){
    string str;
    getline(cin, str);
   cout<< maxOcc(str);

    return 0;
}

// or----
//  unordered_map<int,int>mpp;
//    for(int i=0; i<str.length(); i++){
//     mpp[str[i]]++;
//    }
//    int maxi=INT_MIN;
//    for(auto it:mpp){
//     maxi=max(maxi,it.second);
//    }
//    for(auto it:mpp){
//     if(it.second==maxi)return it.first;
//    }