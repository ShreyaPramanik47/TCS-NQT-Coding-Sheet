// Greatest of three numbers
#include <bits/stdc++.h>
using namespace std;
float gratest(float m , float n, float o){
    // float maxi= max(o,max(m,n));
    if(m>n && m>o)return m;
    else if(n>o && n>m)return n;
    else{
        return o;
    }
    // return maxi;
}
int main(){
    float m, n,o;
    cin>>m>>n>>o;
   cout<< gratest(m,n,o);
    return 0;
}