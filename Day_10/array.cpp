#include<iostream>
using namespace std;
int main()
{
    int arr[5]={7,5,2,1,3}
    int len = sizeof(arr) / sizeof(int);

    for(int idx = 0; idx <= len-1; idx++)
    {
        cout << arr[idx] << " ";
    }
    cout<< endl;

    return 0;
} 
