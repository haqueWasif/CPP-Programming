#include<bits/stdc++.h>
using namespace std;

int main(){
    int *a = new int;
    // here new operator allocates 4 bytes for int in heap memory and the pointer allocates 8 bytes for storing address

    *a = 10;
    cout << *a << endl;

    // We will use memory allocation for arrays not for single variable like this 

    // Since we cannot increase size of the array during run time and also we cannot return the array using function
     
    return 0;
}