#include<iostream>
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


