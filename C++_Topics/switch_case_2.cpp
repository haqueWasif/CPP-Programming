#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    switch(n%2)
    {
        // case checks if val is equal to the given value in case 
        case 0:
            cout << "Even" << endl;
            break;
        default:
            cout << "Odd" << endl;
    }

    return 0;

}
