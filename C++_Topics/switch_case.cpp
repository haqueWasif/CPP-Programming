#include<iostream>

using namespace std;

int main(){
    char ch;
    cin >> ch;

    switch(ch)
    {
        // case checks if val is equal to the given value in case 
        case 'a':
            cout << "Vowel" << endl;
            break;
        case 'e':
            cout << "Vowel" << endl;
            break;
        case 'i':
            cout << "Vowel" << endl;
            break;
        case 'o':
            cout << "Vowel" << endl;
            break;
        case 'u':
            cout << "Vowel" << endl;
            break;
        default:
            cout << "Consonent" << endl;
    }

    return 0;

}
