#include <iostream>
using namespace std;

int main()
{
    // 1
    int A[3][4] = {{1, 2, 3, 4}, {2, 4, 6, 8}, {3, 5, 7, 9}};
    // 2
    int *B[3];
    B[0] = new int[4];
    B[1] = new int[4];
    B[2] = new int[4];
    // 3
    int *C;
    C = new int *[3];
    C[0] = new int[4];
    C[1] = new int[4];
    C[2] = new int{4};
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}