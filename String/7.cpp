// Reverse a String
#include <bits/stdc++.h>
using namespace std;
string reverseString(string str){
    int s=0, e=str.size()-1;
    while(s<=e){
        swap(str[s], str[e]);
        s++;
        e--;
    }
    return str;
}
int main(){
    string str = "HELLO";
   cout<<reverseString(str);

    return 0;
}