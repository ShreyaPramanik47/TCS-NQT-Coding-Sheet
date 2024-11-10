// Check if a Number is Automorphic
#include <bits/stdc++.h>
using namespace std;
bool check(int ans, int n){
    while(n!=0){
        if(n%10!=ans%10){
            return false;
        }
        n=n/10;
        ans=ans/10;
    }
    return true;
}
int main(){
    int n=76;
    int ans=n*n;
  if(check(ans,n)){
    cout<<"YES";
  }
  else{
    cout<<"NO";
  }
    return 0;
}