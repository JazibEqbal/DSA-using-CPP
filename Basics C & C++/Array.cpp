#include <iostream>
using namespace std;
int main()
{
    // int arr[5] = {1, 2, 3, 4};
    // for (int i = 0; i < 4; i++)
    // {
    //     std::cout << arr[i];
    // }
    int n;
    std::cout << "Enter Size "<<endl;
    cin >> n;
    int A[n];
    A[0] = 2;
    A[3] = 6;
    for (int x : A)
    {
        std::cout << x << endl;
    }

    return 0;
}