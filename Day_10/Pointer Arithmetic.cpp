#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int *aptr = &a;

    cout<< aptr <<"\n";
    aptr++;
    cout<< aptr <<"\n";
    aptr--;
    cout<< aptr <<"\n";
    
    return 0;
}