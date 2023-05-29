#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
        char name[100];
        int roll;
        char section;
        float math_marks;
        int cls;

        Student(char* n, int r, int s, int m_marks, int c){
            strcpy(name, n);
            roll = r;
            section = s;
            math_marks = m_marks;
            cls = c;
        }
};

int main(){
    char nm1[] = "Rony", nm2[] = "Boby", nm3[] = "Tommy";
    
    Student s1(nm1, 1, 'A', 98, 8);
    Student s2(nm2, 2, 'A', 95, 8);
    Student s3(nm3, 3, 'A', 90, 8);

    int marks1 = s1.math_marks;
    int marks2 = s1.math_marks;
    int marks3 = s1.math_marks;

    int mx = max(marks1, marks2);
    mx = max(mx, marks3);

    if(mx == marks1){
        cout << s1.name;
    }
    else if(mx == marks2){
        cout << s2.name;
    }
    else{
        cout << s3.name;
    }

    return 0;
}