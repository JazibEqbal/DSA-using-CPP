#include <iostream>
using namespace std;

class Array
{
private:
    int *A;
    int size;
    int length;

public:
    Array()
    {
        size = 10;
        length = 0;
        A = new int[size];
    };
    Array(int sz)
    {
        size = sz;
        length = 0;
        A = new int[size];
    }
    int missingNumber(int n);
};
int Array::missingNumber(int n){
     int sum=(n*(n+2))/2;
     int s=0;
     for(int i=0;i<length;i++){
          s=s+A[i];
     }
     return sum-s;
}
int main(){
   int A[] = { 1, 2, 3, 4, 5, 7, 8, 9, 10 };
   int n = 10;
   return 0;
};