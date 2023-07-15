#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
        string nm;
        int cls;
        char sc;
        int id;
        int math_marks, eng_marks;

    
};

bool cmp(Student s1, Student s2){
    int totalMarks_s1, totalMarks_s2;
    
    totalMarks_s1 = s1.math_marks + s1.eng_marks;
    totalMarks_s2 = s2.math_marks + s2.eng_marks;

    if(totalMarks_s1 > totalMarks_s2) return true;

    else if(totalMarks_s1 == totalMarks_s2){
        if(s1.id < s2.id) return true;
        else return false;
    }
    
    else return false;

}

int main(){
    int n;
    cin >> n;

    Student s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i].nm
        >> s[i].cls
        >> s[i].sc
        >> s[i].id
        >> s[i].math_marks
        >> s[i].eng_marks;
    }

    sort(s, s+n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << s[i].nm << " "
        << s[i].cls << " "
        << s[i].sc << " "
        << s[i].id << " "
        << s[i].math_marks << " "
        << s[i].eng_marks
        << endl;
    }
    
    
    return 0;
}