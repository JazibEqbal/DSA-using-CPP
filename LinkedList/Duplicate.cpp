#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*first=NULL;

void create(int A[],int n){
    struct Node *t, *last;
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
void removeDuplicate(struct Node *p){
     struct Node *q=p->next;
     //p=first;
     while(q !=NULL){
         if(p->data != q->data){
             p=q;
             q=q->next;
         }
         else{
             p->next=q->next;
             delete q;
             q=p->next;
         }
     }
};
int main(){
    int A[]={1,2,2,2,5};
    create(A,5);
    removeDuplicate(first);
    display(first);
    return 0;
}