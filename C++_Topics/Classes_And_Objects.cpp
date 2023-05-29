#include<bits/stdc++.h>
using namespace std;

// Class is an user defined data type

class Student{
    public:
        char name[100], sec;
        int roll, cls;
};

int main(){
    Student s;
    
    s.roll = 17;
    s.cls = 7;
    s.sec = 'A';
    
    // s.name = "Rahim";
    // This will not work as we cannot set an array to a constant string again after declaration like this

    char nm[100] = "Rahim";
    strcpy(s.name, nm);

    return 0;
}