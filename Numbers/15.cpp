// Reverse digits of a number
#include <bits/stdc++.h>
using namespace std;
int reverseDigit(int n){
    int num=n;
    int ans=0;
    while(num!=0){
        int digit=num%10;
        ans=ans*10+digit;
        num=num/10;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
   cout<< reverseDigit(n);
    return 0;
}