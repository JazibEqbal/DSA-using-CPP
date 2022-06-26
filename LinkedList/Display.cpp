#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
}
*first= NULL;

void create(int A[],int n){
     int i;
     struct Node *t, *last;
     //first=(struct Node *)malloc(sizeof(struct Node));
     first=new Node();
     first->data=A[0];
     first->next=NULL;
     last=first;

     for(i=1;i<n;i++){
         t=new Node();
         t->data=A[i];
         t->next=NULL;
         last->next=t;
         last=t;
     }
};
void display(struct Node *p){
    int count=0;
    int sum=0;
    while(p !=NULL){
        cout<<p->data<<endl;
        sum=sum+p->data;
        p=p->next;
        count++;
    }
    cout<<"Number of Nodes is "<<count<<endl;
    cout<<"Sum is "<<sum<<endl;
};
//For counting
int Length(struct Node *p){
    int count=0;
    while(p !=NULL){
        count++;
        p=p->next;
    }
    return count;
};
//Displaying Sum
int add(struct Node *p){
    int sum=0;
    while(p !=NULL){
       sum=sum+p->data;
    }
    return sum;
};
int main(){
    
    int A[]={3,5,7,10,15};
    create(A,5);
    display(first);
    //cout<<Length(first);
    return 0;
}