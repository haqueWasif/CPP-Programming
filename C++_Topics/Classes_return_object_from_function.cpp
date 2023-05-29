#include<bits/stdc++.h>
using namespace std;

// Constructor is a special type of function with the same name that of the class which is automatically invoked when an object is created
// It has no return type

class Student{
    public:
        char name[100], section;
        int roll, cls;

        Student(int rol, int sec, int clss, char* nm){
            strcpy(name, nm);
            section = sec;
            roll = rol;
            cls = clss;
        }
};

Student fun(){
    char nm1[] = "Rahim Ullah";
    Student s1(29, 'A', 7, nm1);
    return s1;
}

// RVO -> Return Value Optimization
/* here rahim = fun() this means 
    rahim.name = s1.name
    rahim.roll = s1.roll
    rahim.section = s1.section
    rahim.cls = s1.cls

    # After this s1 is removed from the stack

    # This does not occur in case of array
*/

int main(){
    Student rahim = fun();

    cout << rahim.name << endl;
    cout << rahim.cls << endl;
    cout << rahim.roll << endl;
    cout << rahim.section << endl;

    return 0;
}