// Search an element in an array

#include<bits/stdc++.h>
using namespace std;
int findElement(int arr[], int n, int k){
    int s=0, e=n-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==k)return mid;
        else if(arr[mid]>k){
            e--;
        }
        else{
            s++;
        }
    }
    return -1;
}
int main()
{
	int n = 6;
	int arr[n] = {6, 7, 9, 5, 3, 10};
	int k = 10;
   cout<< findElement(arr,n,k);
    return 0;
}