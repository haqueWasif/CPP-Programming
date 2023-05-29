#include<iostream>
#include<iomanip>
// input-output manipulation

using namespace std;

int main()
{
    float a;
    cin >> a;
    cout << fixed << setprecision(2) << a;
    // to fix how many digits we want after decimal
    
    return 0;
}