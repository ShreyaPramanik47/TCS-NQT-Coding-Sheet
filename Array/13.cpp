// * Adding Element in an array
// Example:
// Input: N = 5, array[] = {1,2,3,4,5}
// insertbeginning(6)
// insertending(7)
// insertatpos(8,4)
// Output: 6,1,2,8,3,4,5,7
// Explanation: 6 is added at the beginning and 7 is added at the end and 8 is added at position 4 

#include <bits/stdc++.h>
using namespace std;
void insertAtPosition(int arr[], int k, int size, int pos){
    for(int i=size; i>=pos; i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=k;
}
void insertAtEnd(int *arr, int m, int size){
    // for(int i=0; i<=size; i++){
    //     if(i==size){
    //         arr[i]=m;
    //     }
    // }
    arr[size]=m;
}
int main(){
    int arr[100]={1,2,3,4,5};
    int n,m,k;
    int pos=4;
    cin>>n>>m>>k;
    for(int i=5; i>=0; i--){
        arr[i]=arr[i-1];
    }
    arr[0]=n;
    cout<<"first insertion :";
    for(int i=0; i<=5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    insertAtEnd(arr,m,6);
    cout<<"last insertion :";
    for(int i=0; i<=6; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    insertAtPosition(arr,k,7,4);
    cout<<"At position insertion :";
    for(int i=0; i<=7; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}