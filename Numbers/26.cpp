// Check if a number is Harshad number
#include <bits/stdc++.h>
using namespace std;
bool harshad(int n){
    int num=n;
    int ans=0;
    while(num!=0){
        int digit=num%10;
        ans+=digit;
        num=num/10;
    }
    if(n%ans==0)return true;
    else{
        return false;
    }
}
int main(){
    int n;
    cin>>n;
   bool res= harshad(n);
   if(res){
    cout<<"Yes";
   }
   else{
    cout<<"No";
   }
}

// t : O(n)
// O(1)