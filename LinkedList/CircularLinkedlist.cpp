#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*Head;

void create(int A[],int n){
    struct Node *t, *last;
    Head=new Node();
    Head->data=A[0];
    Head->next=Head;
    last=Head;

    for(int i=1;i<n;i++){
        t=new Node();
        t->data=A[i];
        t->next=last->next;
        last->next=t;
        last=t;
    }
};
void display(struct Node *p){
    do
    {
      cout<<p->data<<endl;
      p=p->next;
    } while (p !=Head);
};
void Recursive(struct Node *p){
    static int flag=0;
     if(p !=Head || flag==0){
         flag=1;
         cout<<p->data<<endl;
         Recursive(p->next);
     }
     flag=0;
};
int main(){
    int A[]={1,2,3,4,5};
    create(A,5);
    display(Head);
    cout<<endl;
    Recursive(Head);
    return 0;
}