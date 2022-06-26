#include<iostream>
using namespace std;

class ColumnMajor
{
private:
    int n;
    int *A;
public:
    ColumnMajor(){
        n=2;
        A=new int[2];
    };
    ColumnMajor(int n){
        this->n=n;
        A=new int[n*(n+1)/2];
    }
    ~ColumnMajor(){
        delete []A;
    };
    void Set(int i,int j,int x);
    int Get(int i,int j);
    void display();
};

void ColumnMajor::Set(int i,int j,int x)
{
    if(i>=j){
        A[n*(j-1)-(j-2)*(j-1)/2 + i-j]=x;
    }
};
int ColumnMajor::Get(int i,int j){
    if(i>=j){
       return A[n*(j-1)-(j-2) *(j-1) /2 + i-j];
    }
    else 
       return 0;
};

void ColumnMajor::display()
{
  for(int i=1; i<=n;i++){
      for(int j=1;j<=n;j++){
          if(i>=j){
              cout<< A[n*(j-1)-(j-2)*(j-1)/2 + i-j];
          }
          else 
             cout<<"0 ";
      }
        cout<<endl;
  }
};
int main(){
    int d;
    cout<<"Enter dimension"<<endl;
    cin>>d;
    ColumnMajor cm(d);

    int y;
    cout<<"Enter all elements "<<endl;
    for(int i=1;i<=d;i++){
        for(int j=1;j<=d;j++){
            cin>>y;
            cm.Set(i,j,y);
        }
    }
    cm.display();
    return 0;
}