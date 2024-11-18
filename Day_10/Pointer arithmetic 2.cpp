#include<iostream>
using namespace std;
int main()
{
    int a = 5;
    int *ptr = &a;

    cout<< ptr <<"\n";
    cout<< (ptr +3) <<"\n";

    return 0;
}