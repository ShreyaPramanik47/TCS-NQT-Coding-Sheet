// Check if a number is armstrong number of not
// * An Amrstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.

#include <bits/stdc++.h>
using namespace std;
bool isAmrstrong(int n){
    int num=n;
    int cnt=0;
    while(num!=0){
        cnt++;
        num=num/10;
    }
    int num2=n;
    int ans=0;
    while(num2!=0){
        int digit= num2%10;
        int power=1;
        for(int i=1; i<=cnt; i++){
            power*=digit;
        }
        ans+= power;
        num2=num2/10;
    }
    // cout<<ans;
    if(ans==n)return true;
    else{
        return false;
    }
}
int main(){
    int n;
    cin>>n;
    if(isAmrstrong(n)){
        cout<< "true";
    }
    else{
        cout<<"false";
    }
    return 0;
}

// t.c : O(lon n^2)
// s.c : O(1)