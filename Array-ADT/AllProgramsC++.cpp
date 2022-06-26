#include <iostream>
#include <stdio.h>
#include <stdlib.h>

// template<class T>
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
    }
    Array(int sz)
    {
        size = sz;
        length = 0;
        A = new int[size];
    }
    ~Array()
    {
        delete[] A;
    }
    void display();
    void Insert(int index, int x);
    void Delete(int index);
    int linearSearch(int key);
    int binarySearch(int key);
    int get(int index);
    void set(int index, int key);
    int max();
    int min();
    int sum();
    float avg();
    void Reverse();
    void insertSort(int key);
    int isSorted();
    void Sort();
};
void Array::display()
{
    for (int i = 0; i < length; i++)
    {
        printf("%d\n", A[i]);
    }
};
void Array::Insert(int index, int key)
{
    for (int i = length; i > index; i--)
    {
        A[i] = A[i - 1];
    }
    A[index] = key;
    length++;
};
void Array::Delete(int index)
{
    int key = 0;
    key = A[index];
    for (int i = index; i < length - 1; i++)
    {
        A[i] = A[i + 1];
    }
    length--;
};
int Array::linearSearch(int key)
{
    for (int i = 0; i < length; i++)
    {
        if (key == A[i])
        {
            return i;
        }
    }
    return -1;
};
int Array::binarySearch(int key)
{
    int l = 0;
    int h = length - 1;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (key == A[mid])
        {
            return mid;
        }
        else if (key < A[mid])
        {
            h = mid - 1;
        }
        else
            l = mid + 1;
    }
    return -1;
};
int Array::get(int index)
{
    if (index >= 0 && index < length)
    {
        return A[index];
    }
};
void Array::set(int index, int key)
{
    if (index >= 0 && index < length)
    {
        A[index] = key;
    }
};
int Array::max()
{
    int max = A[0];
    for (int i = 1; i < length; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    return max;
};
int Array::min()
{
    int min = A[0];
    for (int i = 1; i < length; i++)
    {
        if (A[i] < min)
        {
            min = A[i];
        }
    }
    return min;
};
int Array::sum()
{
    int s = 0;
    for (int i = 0; i < length; i++)
    {
        s = s + A[i];
    }
    return s;
};
float Array::avg()
{
    return (float)sum() / length;
};
void Array::Reverse()
{
    int *B;
    int i, j;
    B = new int[size];
    for (i = length, j = 0; i >= 0; i--, j++)
    {
        B[j] = A[i];
    }
    for (int i = 0; i < length; i++)
    {
        A[i] = B[i];
    }
};
void Array::insertSort(int key)
{
    int i = length - 1;
    while (i >= 0 && A[i] > key)
    {
        A[i + 1] = A[i];
        i--;
    }
    A[i + 1] = key;
    length++;
};
int Array::isSorted()
{
    for (int i = 0; i < length; i++)
    {
        if (A[i] > A[i + 1])
        {
            return 0;
        }
    }
    return -1;
};

int main()
{
    Array arr(10);
    arr.Insert(0, 5);
    arr.Insert(1, 6);
    arr.Insert(2, 9);
    arr.display();
};

// Array *arr1;
//  int ch, sz;
//  int key, index;
//  printf("Enter size of am Array ");
//  scanf("%d", &sz);
//  arr1 = new Array(sz);
//  do
//  {
//      printf("\n\nMenu\n");
//      printf("1. Insert\n");
//      printf("2. Delete\n");
//      printf("3. Linear Search\n");
//      printf("4. Binary Search\n");
//      printf("5. Sum\n");
//      printf("6. Display\n");
//      printf("7. Exxit\n");
//      printf("Enter your choice");
//      scanf("%d", &ch);
//      switch (ch)
//      {
//      case 1:
//          printf("Enter an element and index");
//          scanf("%d%d", &key, &index);
//          arr1.Insert(index, key);
//          break;
//      case 2:
//          printf("Enter index");
//          scanf("%d", &index);
//          key = arr1.Delete(index);
//          printf("Deleted element is %d\n", x);
//          break;
//      default:
//      case 3:
//          printf("Enter an element to search");
//          scanf("%d", &key);
//          index = arr1->linearSearch(key);
//          printf("Element index is %d", index);
//          break;
//      case 4:
//          printf("Sum is %d\n", arr1.Sum());
//          break;
//      case 5:
//          arr1.display(arr1);
//      };
//  };

// Array *merge(Array, *arr2);
// Array *Union(Array, *arr2);
// Array *Intersection(Array, *arr2);

//     void Array::Sort()
// {
//     int i, j;
//     i = 0;
//     j = length - 1;
//     while (i < j)
//     {
//         while (A[i] < 0)
//         {
//             i++;
//         }
//         while (A[j] >= 0)
//         {
//             j--;
//         }
//         if (i < j)
//         {
//             int temp;
//             temp = A[i];
//             A[i] = A[j];
//             A[j] = temp;
//         }
//     }
// };
// Array *merge(Array arr2)
// {
//     int i, j, k = 0;
//     Array *arr3 = new Array(length + arr2.length);
//     while (i < length && j < arr2.length)
//     {
//         if (A[i] < arr2.A[j])
//         {
//             arr3->A[k++] = A[i++];
//         }
//         else
//         {
//             arr3->[k++] = arr2.A[j++];
//         }
//     }
//     for (; i < length; i++)
//     {
//         arr3->A[k++] = A[i];
//     }
//     for (; j < arr2.length; j++)
//     {
//         arr3->A[k++] = arr2.A[j];
//     }
//     arr3->length = length + arr2.length;
// };
// Array *Union(Array arr2)
// {
//     int i, j, k = 0;
//     Array *arr3 = new Array(length + arr2.length);
//     while (i < length && j < arr2.length)
//     {
//         if (A[i] < arr2.A[j])
//         {
//             arr3->A[k++] = A[i++];
//         }
//         else if (A[i] > arr2.A[j])
//         {
//             arr3->A[k++] = arr2.A[j++];
//         }
//         else
//             arr3->A[k++] = A[i++];
//         j++;
//     }
//     for (; i < length; i++)
//     {
//         arr3->A[k++] = A[i];
//     }
//     for (; j < arr2.length; j++)
//     {
//         arr3->A[k++] = arr2.A[j];
//     }
//     arr3->length = k;
//     return arr3;
// };
// Array *Intersection(Array arr2)
// {
//     int i, j, k = 0;
//     Array *arr3 = new Array(length + arr2.length);
//     while (i < length && j < arr2.length)
//     {
//         if (A[i] < arr2.A[j])
//         {
//             i++;
//         }
//         else if (A[i] > arr2.A[j])
//         {
//             j++;
//         }
//         else
//             arr3->A[k++] = A[i++];
//         j++;
//     }
//     arr3->length = k;
//     return arr3;
// };
// void swap()
// {
//     int temp;
//     temp = x;
//     x = y;
//     y = temp;
// };