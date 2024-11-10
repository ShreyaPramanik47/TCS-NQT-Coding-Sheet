// Maximum and Minimum Digit in a Number
#include <bits/stdc++.h>
using namespace std;
void getDigit(int n){
    int num=n;
    int maxi=INT_MIN;
    int mini=INT_MAX;
    while(num!=0){
        int digit=num%10;
        if (digit>maxi){
            maxi=digit;
        }
        if(digit<mini){
            mini=digit;
        }
        num=num/10;
    }
    cout<<maxi<<" "<<mini;
}
int main(){
    int n;
    cin>>n;
    getDigit(n);
    return 0;
}