#include <iostream>
using namespace std;
 

int insertX(int n, int arr[],int x, int p)
{
    int i;
 
    
    n++;
 
    
    for (i = n; i >= p; i--)
        arr[i] = arr[i - 1];
 
   
    arr[p - 1] = x;
 
    return arr;
}
int 