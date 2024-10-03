// Write a program to find a substring within a string. If found display its starting position
#include <bits/stdc++.h>
using namespace std;
int main(){
    string str1, str2;
    cin>>str1>>str2;
    int pos= str1.find(str2);
    cout<< str1.substr(pos);

    return 0;
}