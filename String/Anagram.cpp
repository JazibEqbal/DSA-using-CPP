#include <iostream>
using namespace std;

int main(){
    char a[]="decimal";
    char b[]="medical";
    int i;
    int H[26]={0};
    for(i=0; a[i] !='\0'; i++) {
        H[a[i] - 97]++;
    }
    for(i=0; b[i] !='\0';i++){
        H[a[i] -97]--;
        if(H[a[i] -97] <0){
            cout<<"Not Anagram";
            break;
        }
       if(b[i] == '\0'){
           cout<<"Anagram";
       }
    }
}