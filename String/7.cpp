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


// * from this type output:
// * I/P: I AM IROM MAN
// * O/P: N AM MORI MAI

// #include <iostream>
// #include <string.h>
// using namespace std;
// string result(string str){
//   int s=0;
//   int e=str.size()-1;
//   while(s<=e){
//       if(isalpha(str[s])&& isalpha(str[e])){
//           swap(str[s], str[e]);
//           s++;
//           e--;
//       }
//       if(!isalpha(str[s])){
//           s++;
//       }
//       else if(!isalpha(str[e])){
//           e--;
//       }
//   }
//   return str;
// }
// int main() {
//     // Write C++ code here
//    string str;
//    getline(cin, str);
//    cout<< result(str);

//     return 0;
// }