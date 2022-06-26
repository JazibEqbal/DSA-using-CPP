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
int Max(struct Node *p){
    int max=-32678;
    while(p !=NULL){
        if(p->data > max){
            max=p->data;
            p=p->next;
        }
    }
    return max;
};
int RecursiveMax(struct Node *p){
    int x=0;
    if(p==0){ // means no node is present
        return 0;
    }
    x=RecursiveMax(p->next);
    if(x>p->data){
        return x;
    }
    else 
       return p->data;
};
int main(){
    int A[]={1,2,3,4,5};
    create(A,5);
    display(first);
    cout<<"Max is "<<Max(first)<<endl;
    cout<<"Max is "<<RecursiveMax(first)<<endl;
    return 0;
}