// Capitalize first and last character of each word of a string

#include <bits/stdc++.h>
using namespace std;
string checkSpace(string str){
    int cnt=0;
    for(int i=0; i<str.size(); i++){
        if(cnt==0){
            str[i]=toupper(str[i]);
            cnt++;
        }
        else if(str[i+1]==' '){
            str[i]=toupper(str[i]);
        }
        else if(str[i]==' ' && cnt>0){
            cnt=0;
        }
    }
    int n=str.size();
    str[n-1]=toupper(str[n-1]);
    return str;
}
int main(){
    string str = "Take u Forward is Awesome";
   cout<< checkSpace(str);
    return 0;
}