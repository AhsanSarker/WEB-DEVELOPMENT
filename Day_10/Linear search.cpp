#include<iostream>
using namespace std;

int linearsearch(int *arr, int n, int key)
{
   for(int i=0 ; i<n; i++)
   {
     if(arr[i] == key)
     {
        return i;
     }
   }
   return -1;
}

int main()
{
    int arr[]={2,4,6,8,10,12,1,16};
    int n = sizeof(arr)/sizeof(int);

    cout<< linearsearch(arr , n , 10) << endl;

    return 0;
}