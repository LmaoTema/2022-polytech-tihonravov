#include<iostream>
#include"rand_mass.cpp"

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
        
        int min_index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        
        if (min_index != i)
        {
            swap(arr, i, min_index);
        }
    }
}
   void swap(int arr[], int idx_a, int idx_b)
{
    {
    int temp = arr[idx_a]; 
    arr[idx_a] = arr[idx_b];
    arr[idx_b] = temp; 
    }
}
void selection_sort(int arr[], int size)
{
    // Проходим каждую позицию
    for (int i = 0; i < size - 1; i++)
    {
        // Ищем подходящий элемент
        int min_index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        // Проверяем нужна ли перестановка
        if (min_index != i)
        {
            // вспомогательная функция
            swap(arr, i, min_index);
        }
    }
}


int main()
{





}
