// Program to find sum of GP Series
#include <bits/stdc++.h>
using namespace std;
float GPseries(float a, float r, int n){
    float ans=0;
    for(int i=1; i<=n; i++){
        ans+=a;
        a=a*r;
    }
    return ans;
}
int main(){
    float a,r;
    int n;
    cin>>a>>r>>n;
   cout<< GPseries(a,r,n);
    return 0;
}