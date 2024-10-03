// Sum of the Numbers in a String
#include <bits/stdc++.h>
using namespace std;
int sum(string str){
    int sum=0;
    string tempSum="";
    for(int i=0; i<str.size(); i++){
        if(isdigit(str[i])){
            tempSum+=str[i];
        }
        else if(!tempSum.empty()) {
            sum+=stoi(tempSum);
            tempSum="";
        }
    }
    if(!tempSum.empty()){
        sum+=stoi(tempSum);
    }
    return sum;
}
int main(){
    string st = "1a3oz67" ;
    cout<< sum(st);
    return 0;
}