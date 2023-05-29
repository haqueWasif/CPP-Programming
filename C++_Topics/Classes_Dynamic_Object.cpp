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

int main(){
    char nm[100] = "Rahim Ullah";
    // Student rahim(5, 'A', 11, nm);
    Student *rahim = new Student(5, 'A', 11, nm);

    // cout << (*rahim).name << endl;
    // cout << (*rahim).cls << endl;
    // cout << (*rahim).roll << endl;
    // cout << (*rahim).section << endl;

    // (*rahim). = rahim ->

    // Shortcut
    cout << rahim -> name << endl;
    cout << rahim -> cls << endl;
    cout << rahim -> roll << endl;
    cout << rahim -> section << endl;
    
    delete rahim;

    cout << rahim -> name << endl;
    cout << rahim -> cls << endl;
    cout << rahim -> roll << endl;
    cout << rahim -> section << endl;

    // We can find some values to be unchanged thats because windows have large memory so it does not immediately deletes the variable

    return 0;
}