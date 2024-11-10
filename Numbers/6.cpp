// Check if a number is perfect number
#include <bits/stdc++.h>
using namespace std;
bool isPerfect(int n){
    int sum=0;
    for(int i=1; i<n; i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n)return true;
    else{
        return false;
    }
}
int main(){
    int n;
    cin>>n;
    if(isPerfect(n)){
        cout<<"Perfect";
    }
    else{
        cout<<"Not Perfect";
    }
    return 0;
}

// Time Complexity: O(N)
// Space Complexity: O(1)