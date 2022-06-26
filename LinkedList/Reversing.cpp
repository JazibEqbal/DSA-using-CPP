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
void Reverse(struct Node *p){
     struct Node *q=NULL;
     struct Node *r=NULL;
     while(p !=NULL){
         r=q;
         q=p;
         p=p->next;
         q->next=r;
     }
     first=q;
};
void Recursive(struct Node *q,struct Node *p){
    if(p !=NULL){
        Recursive(p,p->next);
        p->next=q;
    }
    else{
        first=q;
    }
};
int main(){
    int A[]={1,2,3,4,5};
    create(A,5);
    Reverse(first);
    Recursive(NULL,first);
    display(first);
    return 0;
}