// Print Fibonacci upto Nth Term
#include <bits/stdc++.h>
using namespace std;
int printFibonacci(int n, int a=0, int b=1){
   if(n<=0)return;
   cout<<a<<" ";
   printFibonacci(n-1, b, a+b);
}
int main(){
    int n;
    cin>>n;
   cout<<  printFibonacci(n);
    return 0;
}