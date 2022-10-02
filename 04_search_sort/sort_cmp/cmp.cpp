#include<iostream>
#include <time.h>

using namespace std;

 void swap(int arr[], int idx_a, int idx_b)
{
    {
    int temp = arr[idx_a]; 
    arr[idx_a] = arr[idx_b];
    arr[idx_b] = temp; 
    }
}
void quick_sort(int arr[], int start, int end)
{
    if (start >= end)
        return;

   
    int p = partition(arr, start, end);

 
    quick_sort(arr, start, p - 1); // left part sorty 

    quick_sort(arr, p + 1, end); // right part sorty 
}
int partition(int arr[], int start, int end)
{

   
    int pivot = arr[start];

    
    int count = 0;
    for (int i = start + 1; i <= end; i++) {
        if (arr[i] <= pivot)
            count++;
    }

    
    int pivotIndex = start + count;
    swap(arr, pivotIndex, start);


    int i = start, j = end;
    while (i < pivotIndex && j > pivotIndex) {
        while (arr[i] <= pivot) {
            i++;
        }
        while (arr[j] > pivot) {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex) {
            swap(arr, i, j);
            i++;
            j--;
        }
    }

    return pivotIndex;
}
  
void selection_sort(int arr[], int size)
{

    for (int i = 0; i < size - 1; i++)
    {
        // Find exatcly what we need 

        int min_index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        // Check if we need some swapps
        if (min_index != i)
        {
            // suppport func 
            swap(arr, i, min_index);
        }
    }
}
clock_t start;
float timing;
int main()

{ 
    int size;
    cout << "Enter array distance number: ";
    cin >> size;
    srand(time(NULL));
    int* a = new int[size];
    for (int i = 0; i < size; i++)
    {
        a[i] = rand() % 300 -100;
    }
    start = clock();
    quick_sort(arr, start);
    cout << "Quick sort: ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    timing = (float)(clock() - start) / CLOCKS_PER_SEC;
    cout << "Quick sort timing = " << timing;
    cout << endl;
     
     
    start = clock();
    selection_sort(arr, size);
    cout << "Selection sort: ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    timing = (float)(clock() - start) / CLOCKS_PER_SEC;
    cout << "Selection sort timing = " << timing;
    cout << endl;
     system("pause");
    return 0;
}