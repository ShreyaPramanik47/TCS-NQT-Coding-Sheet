// Write a program to find a word in a given string which has the highest number of repeated letters

// APPROACH:
// 1.fixed the right after a word
// 2. Start a loop from 1st position of the current word amd store the frequency.
// 3. find if any frquency is greter than 1, (if found then increase the maxi)
// 4. if maxi is greter than finalWordCnt then store that word in a result variable.
// 5. set the left after the right pointer to examine the next word

#include <bits/stdc++.h>
using namespace std;
string result(string str){
    int len=str.length();
    int finalWordCnt=0;
    int maxi=0;
    string result="";
    for(int left=0; left<len;){
        int right=left+1;
        while(str[right]!=' ' && right<len){
            right++;
        }
        int freq[26]={0};
        maxi=0;
        for(int j=left; j<right; j++){
            freq[str[j]-'a']++;
        }
        for(int f=0; f<26; f++){
            if(freq[f]>1){
                maxi++;
            }
        }
        if(maxi>finalWordCnt){
            finalWordCnt=maxi;
            result="";
            for(int k=left; k<right; k++){
                result+=str[k];
            }
        }
        left=right+1;
    }
    if(result.empty()){
        return"-1";
    }
    else{
        return result;
    }
}
int main(){
    string str;
    getline(cin , str);
  cout<<result(str);
    return 0;
}