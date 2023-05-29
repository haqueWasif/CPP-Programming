#include<iostream> 

// .h is not required for c++

/*
namespace -> group

here we will work mainly with std group 

cout and cin are present in std but how they works are present in iostream

*/

/*
we have to state the namespace while using function in cpp

like:

std::cout << "Hello";
std:: cin >> a;

but we can just use:

using namespace std;

This will automatically use std when we do not state std::
before a function


*/
int main(){

    // printf("Hello World") -> for c

    // cout << "Hello World!";
    // std::cout << "Hello World";
    // std::cout << "Hello " << "World";
    std::cout << "Hello" << std::endl << "World" << std::endl;

    int a = 100, b=200;
    std::cout << a << b;
    return 0;
}