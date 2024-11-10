// Factorial of a number
#include <bits/stdc++.h>
using namespace std;
int fact(int a, int ans=1){
    if(a==1)return ans;
    return fact(a-1, ans*a);

    // * or
    // if(a==1)return 1;
    // return fact(a-1)*a;

    // *or
    // for(int i=a; i>=1; i--){
    //     ans*=i;
    // }
}
int main(){
    int a;
    cin>>a;
   cout<< fact(a);
    return 0;
}

// * for normal for loop : 
// Time Complexity: O(n)
// Space Complexity: O(1)

// * for recursion:
// Time Complexity: O(N) { Since the function is being called n times, and for each function, we have only one printable line that takes O(1) time, so the cumulative time complexity would be O(N) }

// Space Complexity: O(N) { In the worst case, the recursion stack space would be full with all the function calls waiting to get completed and that would make it an O(N) recursion stack space }.
