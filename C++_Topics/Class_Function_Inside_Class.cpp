#include<bits/stdc++.h>
using namespace std;

class Person
{
    public:
        string name;
        int age;
        Person(string nm, int ag){
            name = nm;
            age = ag;
        }
        void hello(){
            cout << "hello" << endl;
        }
};

int main(){
    Person rakib("Rakib Ahsan", 24);
    
    rakib.hello();
    cout << rakib.name << " " << rakib.age << endl;
    

    return 0;
}