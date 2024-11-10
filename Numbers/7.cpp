// Even or Odd

#include <bits/stdc++.h>
using namespace std;
bool isEven(int n){
    // if(n%2==0){
    //     return true;
    // }
    // else{
    //     return false;
    // }

    // * another approach
    if(n&1==0)return true;
    else {
        return false;
    }
}
int main(){
    int n;
    cin>>n;
    if(isEven(n)){
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }
    return 0;
}

// Time complexity: O(1)
// Space Complexity: O(1)