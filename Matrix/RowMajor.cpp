#include<iostream>
using namespace std;

class RowMajor
{
private:
    int n;
    int *A;
public:
RowMajor()
{
    n=2;
    A=new int[2*(2+1)/2];
}
RowMajor(int n){
    this->n=n;
    A=new int[n*(n+1)/2];
}
~RowMajor()
{
    delete []A;
}
 void Set(int i,int j,int x);
 int Get(int i,int j);
 void display();
 int getDimension(){
     return n;
 }
};
void RowMajor::Set(int i,int j,int x){
    if(i>=j){
        A[i*(i-1)/2 + j-1]=x;
    }
};
int RowMajor::Get(int i,int j){
    if(i>=j){
        return A[i*(i-1)/2 + j-1];
    }
    else
     return 0;
};
void RowMajor::display(){
    for(int i=1;i<=n;i++){
        for(int j=1; j<=n; j++){
            if(i>=j){
                cout<<A[i*(i-1)/2 + j -1]<<" ";
            }
            else 
                cout<<"0 ";
        }
        cout<<endl;
    }
};

int main(){
    int d;
    cout<<"Enter dimensions"<<endl;
    cin>>d;
    RowMajor rm(d);
    
    int y;
    cout<<"Enter all elements"<<endl;
    for(int i=1; i<=d;i++){
        for(int j=1;j<=d;j++){
            cin>>y;
            rm.Set(i,j,y);
        }
    }
    rm.display();
    return 0;
}