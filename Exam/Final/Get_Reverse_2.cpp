#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
        string nm;
        int cls;
        char sc;
        int id;

    
};

int main(){
    int n;
    cin >> n;

    Student s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i].nm
        >> s[i].cls
        >> s[i].sc
        >> s[i].id;
    }

    for (int i = 0; i < n; i++)
    {
        cout << s[i].nm << " "
        << s[i].cls << " "
        << s[i].sc << " "
        << s[n-i-1].id
        << endl;
    }
    
    
    return 0;
}