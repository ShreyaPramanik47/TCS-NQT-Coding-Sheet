// Find Sum of AP Series

#include <bits/stdc++.h>
using namespace std;
float APseries(int n, float a, float d){
    // fourmula: 
    // * float sum = (n / 2.0) * (2.0 * a + (n - 1) * d);
    int i=1;
    float sum=0;
    while(i<=n){
        sum+=a;
        a=a+d;
        i++;
    }
    return sum;
}
int main(){
    int n;
    float a,d;
    cin>>n>>a>>d;
   cout<< APseries(n,a,d);
    return 0;
}