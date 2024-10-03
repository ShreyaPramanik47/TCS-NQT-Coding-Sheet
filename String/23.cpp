// Change case of each character in a string

#include <bits/stdc++.h>
using namespace std;
string result(string str){
    // for(int i=0; i<str.size(); i++){
    //     int ascii= int(str[i]);
    //     if(ascii>=65 && ascii<=90){
    //        str[i]= tolower(str[i]);
    //     }
    //     else if(ascii>=97 && ascii<=122){
    //         str[i]=toupper(str[i]);
    //     }
    // }

    for(int i=0; i<str.size(); i++){
        int ascii= int(str[i]);
        if(ascii>=65 && ascii<=90){
            ascii= ascii+32;
            str[i]= char(ascii);
        }
       else if(ascii>=97 && ascii<=122){
            ascii=ascii-32;
            str[i]=char(ascii);
        }
    }
    return str;
}
int main(){
    string str;
    getline(cin , str);
    cout<<result(str);
    return 0;
}