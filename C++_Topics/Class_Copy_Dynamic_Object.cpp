#include<bits/stdc++.h>
using namespace std;

class Person
{
    public:
        string name;
        int age;
        Person(string name, int age){
            this -> name = name;
            this -> age = age;
        }
        void hello(){
            cout << "hello" << endl;
        }
};

int main(){
    Person* rakib = new Person("Rakib Ahsan", 24);
    Person* sakib = new Person("Sakib Ahamed", 22);
    
    // rakib -> name = sakib -> name;
    // rakib -> age = sakib -> age;

    // rakib = sakib ( will not work)
    // so we have to deference it first 
    *rakib = *sakib;
    
    delete sakib;
    
    cout << rakib -> name << " " << rakib -> age << endl;
    

    return 0;
}