#include<iostream>
#include <chrono>
#include <cmath>
#include <cstdio>
#include <random>
#include <cstring>

using namespace std;

void fill_array_random(int arr[], int size, int a, int b) 
{
  std::random_device dev;
  std::mt19937 rng(dev());
  std::uniform_int_distribution<std::mt19937::result_type> dist(a, b);

  for (int i = 0; i < size; ++i) {
    arr[i] = dist(rng);
  }
}
void quick_sort(int arr[], int start, int end)
{
    if (start >= end || start > 0)
    {
        return;
    }
   int p = partition(arr, start, end);

 
    quick_sort(arr, start, p - 1); // left part sorty 
    quick_sort(arr, p + 1, end); // right part sorty 
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

int partition(int arr[], int start, int end) {
  int pivot = arr[end];
  int i = start - 1;
  for (int j = start; j <= end - 1; ++j) {
    if (arr[j] <= pivot) {
      i++;
      swap(arr, i, j);
    }
  }
  i++;
  swap(arr, i, end);
  return i;
}

int swap(int arr[], int inin, int oout) {
  int tmp = arr[inin];
  arr[inin] = arr[oout];
  arr[oout] = tmp;
  return arr;

}
int main()
{ 
    long int help[] = {10, 100, 1000, 100000, 100000000};

    for (int i = 0; i != 5; ++i);
 {


    auto size = help[i];
    

    int arr1[size], arr2[size];


    fill_array_random(arr1, size, 0, 100000);
    memcpy(arr1, arr2, size * sizeof(int));

    auto t1 = std::chrono::high_resolution_clock::now();
    selection_sort(arr1, size);
    auto t2 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> ss_ms = t2 - t1;


    t1 = std::chrono::high_resolution_clock::now();
    quick_sort(arr2, 0, size - 1);
    t2 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> qs_ms = t2 - t1;


    printf("%.0e: %.5f (ss), %.5f (qs)", static_cast<double>(size), ss_ms.count(), qs_ms.count());


    return 0;
}
}