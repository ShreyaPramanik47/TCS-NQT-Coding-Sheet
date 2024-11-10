// Check if a number is prime or not
#include <bits/stdc++.h>
using namespace std;
bool checkPrime(int n){
    for(int i=2; i<sqrt(n); i++){
        // This is because if n has a factor greater than its square root, it must also have a factor smaller than its square root.
        if(n%i==0)return false;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    bool ans= checkPrime(n);
    if(ans==true){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}