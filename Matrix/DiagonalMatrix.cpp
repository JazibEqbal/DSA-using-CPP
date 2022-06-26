#include <iostream>
using namespace std;

class DiagonalMatrix
{
private:
    int n;
    int *A;
public:
DiagonalMatrix(){
    n=2;
    A=new int[2];
}
DiagonalMatrix(int n)
{
    this->n=n;
    A=new int[n];
}
void Set(int i,int j,int x);
int Get(int i,int j);
void display();
~DiagonalMatrix(){
    delete []A;
};
};

void DiagonalMatrix::Set(int i,int j,int x){
    if(i==j){
        A[i-1]=x;
    }
};
int DiagonalMatrix::Get(int i,int j){
    if(i==j){
        return A[i-1];
    }
    else
     return 0;
};
void DiagonalMatrix::display(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                cout<<A[i]<<" ";
            }
            else
                cout<<"0 ";
        }
            cout<<endl;
    }
};
int main(){
    DiagonalMatrix d(5);
    d.Set(1,1,2);
    d.Set(2,2,22);
    d.Set(3,3,222);
    d.Set(4,4,2222);
    d.Set(5,5,22222);
    d.display();
    return 0;
}