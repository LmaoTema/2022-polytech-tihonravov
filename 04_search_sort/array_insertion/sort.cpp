#include <iostream>
using namespace std;
void insertion(int arr[], int n_arr[], int size, int a, int b)
{

for(int i=0; i <= size; i++)
{

if(i==b)
{

    n_arr[i]=a;

  }

if(i<b)
{

    n_arr[i]=arr[i];

  }

if(i>b)
{

    n_arr[i]=arr[i-1];

  }

 }

}
int main()
{

int arr[]={1,43,12,2,4,12,4414141,111,31,22,};

int const size1 = 10;

int const size2 = 11;

int b,a; 

int n_arr[size2];

cout << "Enter the number you wanna insert ";
cin >> a;
cout << "Enter the index for this element ";
cin >> b;
insertion(arr, n_arr, size1, a ,b);
for(int i=0; i < size2; i++)
{
  cout << n_arr[i] << " ";

}

cout << endl << endl;

system("pause 0");

return 0;
}