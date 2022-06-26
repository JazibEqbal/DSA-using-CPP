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
int Delete(struct Node *p,int index){
    int x=-1;
    int i;
    struct Node *q=NULL;
    
    if(index < 1){
        return -1;
    }
    if(index == 1){
        q=first;
        x=first->data;
        first=first->next;
        delete q;
        return x;
    }
    else{
        for(i=0;i<index-1;i++){
            q=p;
            p=p->next;
        }
        q->next=p->next;
        x=p->data;
        delete p;
        return x;
    }
};
int main(){
    int A[]={1,2,3,4,5};
    create(A,5);
    cout<<"Deleted element is "<<Delete(first,2)<<endl;
    display(first);
    return 0;
}