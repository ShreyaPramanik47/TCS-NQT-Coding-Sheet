// #include <bits/stdc++.h>
// using namespace std;
// string removeSpace(string str){
//     // string newStr;
//     int cnt=0;
//     for(int i=0; i<str.size(); i++){
//         if(str[i]!=' '){
//             str[cnt]=str[i];
//             cnt++;
//         }
//     }
//     str[cnt]='\0';
//     // string will get end here
    
//     return str;
//     // return newStr;
// }
// int main(){
//     string str;
//     getline(cin, str);
//   cout<<  removeSpace(str);

// }

#include <iostream>
#include <string.h>
using namespace std;
string result(string str){
   string strr;
   for(int i=0; i<str.size(); i++){
       if(str[i]!=' '){
           strr+=str[i];
       }
   }
   return strr;
}
int main() {
    // Write C++ code here
   string str;
   getline(cin, str);
   cout<< result(str);

    return 0;
}