#include <bits/stdc++.h>
using namespace std;
void check(string str){
    int Vowels=0, Consonants=0, Whitespaces=0;
    for(int i=0; i<str.size(); i++){
        char ch= tolower(str[i]);
        if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'){
            Vowels++;
        }
        else if(ch==' '){
            Whitespaces++;
        }
        else{
            Consonants++;
        }
    }
    cout<<"Vowels "<<Vowels<<endl;
    cout<<"Consonants "<<Consonants<<endl;
    cout<<"White spaces "<<Whitespaces<<endl;
}
int main(){
    string str;
    getline(cin, str);
    check(str);
    return 0;
}