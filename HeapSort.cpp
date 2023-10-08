#include <iostream>
using namespace std;

void heapify(int arr[], int n)
{

    for (int i = n / 2; i > 0; i--)
    {

        int largest = i;
        int left = 2 * i;
        int right = 2 * i + 1;

        if (left <= n && arr[left] > arr[largest])
        {
            largest = left;
        }
        if (right <= n && arr[right] > arr[largest])
        {
            largest = right;
        }

        if (largest != i)
        {
            swap(arr[largest], arr[i]);
        }
    }
}

void heapsort(int arr[], int n)
{

    int size = n;

    // heapify
    heapify(arr, n);

    while (size > 1)
    {
        // swap
        swap(arr[1], arr[size]);

        // size decrease
        size--;

        // heapify
        heapify(arr, size);
    }
}

void print(int arr[], int n)
{

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr[] = {-1,2,6,4,3,1,5};
    int n = 6;

    cout << "Printing array" << endl;
    print(arr, n);

    heapsort(arr, n);
    cout<<"print sorted array"<<endl;
    print(arr, n);

    return 0;
}
