#include<bits/stdc++.h>
using namespace std;

// Class can have variables and functions
// NameSpace can have variables , functions as well as Class

namespace Rakib
{   
    int age = 24;
    
    void hello(){
        cout << "Rakib namespace" << endl;
    }

    class R{

    };
}

namespace Sakib
{   
    int age = 22;
    
    void hello(){
        cout << "Sakib namespace" << endl;
    }

    class S{

    };
}

using namespace Rakib;

int main(){
    // first checks if age1 or age2 are variable or not then it checks if it is under any namespace
    
    // if multiple namespaces have same variables or functions then it will give error
    // Then it is better to only include using namespace for one namespace and the other is to access using :: 

    hello();
    cout << age << endl;
    
    Sakib :: hello();
    cout << Sakib :: age << endl;
    
    return 0;
}