#include<bits/stdc++.h>
// #include <iostream>
// #include <string>
// #include <cctype>

using namespace std;

bool isPalindrome(string str) {
  int s=0, e=str.size()-1;
  while(s<=e){
    if(!isalnum(str[s])){
      s++;
    }
    else if(!isalnum(str[e])){
      e--;
    }
    else if(tolower(str[s])!=tolower(str[e])){
      return false;
    }
    else{
      s++;
      e--;
    }
  }
  return true;
  
}
int main() {
  string str;
  getline(cin, str);
  bool ans=isPalindrome(str);
  if(ans)cout<<"Palindrome";
else{
  cout<<"Not palindrome";
}
  return 0;
}