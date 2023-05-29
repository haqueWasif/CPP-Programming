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

        // we are not declaring the size of the array for the char* nm 
    
        // so in the main function we should not directly use const char as argument in the object for the nm pointer since the const character does not takes any space but we could use this if we had dynamic array
};

int main(){
    char nm1[] = "Rahim Ullah";
    char nm2[] = "Karim Uddin";
    
    Student s1(29, 'A', 7, nm1);
    Student s2(30, 'A', 8, nm2);

    cout << s1.name << endl;
    cout << s2.name << endl;

    return 0;
}