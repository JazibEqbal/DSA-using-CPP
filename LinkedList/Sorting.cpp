#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
}*first=NULL;
void create(int A[],int n){
     struct Node *t,*last;
     first=new Node();
     first->data=A[0];
     first->next=NULL;
     last=first;

     for(int i=1;i<n;i++){
         t=new Node();
         t->data=A[i];
         t->next=NULL;
         last->next=t;
         last=t;
     }   
};
void display(struct Node *p){
     while(p !=NULL){
         cout<<p->data<<endl;
         p=p->next;
     }
};
int Sorted(struct Node *p){
    int x= -65536;
    while(p != NULL){
        if(p->data < x){
            return false;
        }
        else{
            x=p->data;
            p=p->next;
        }
    }
    return true;
};
int main(){
    int A[]={1,2,3,4,5};
    create(A,5);
    //cout<<Sorted(first)<<endl;
    if(Sorted(first)){
        cout<<"Sorted"<<endl;
    }
    else{
        cout<<"Not Sorted";
    }
    return 0;
}