#include <iostream>
using namespace std;
bool isSorted(int *arr, int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        bool remainingpart = isSorted(arr + 1, size - 1);
        return remainingpart;
    }
}

int main()
{
    int arr[5] = {1, 2, 4, 6, 9};
    int size = 5;
    int ans = isSorted(arr, size);
    if (ans)
    {
        cout << "The array is sorted " << endl;
    }
    else
    {
        cout << "Array is not sorted " << endl;
    }
    return 0;
}
