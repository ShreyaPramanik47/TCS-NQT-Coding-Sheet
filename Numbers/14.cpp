// Leap Year or not
#include <bits/stdc++.h>
using namespace std;
bool leapYear(int n){
    if(((n%4==0) && (n%100!=0)) || (n%400==0)){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n;
    cin>>n;
    if(leapYear(n)){
        cout<<"Leap Year";
    }
    else{
        cout<<"Not";
    }
    
    return 0;
}

// Time Complexity: O(1)
// Space Complexity: O(1)