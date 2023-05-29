#include<bits/stdc++.h>
using namespace std;

class Cricketer{
    public:
        int jersey_no;
        char country[20];
};

int main(){
    Cricketer* dhoni = new Cricketer; 
    
    dhoni->jersey_no = 12;
    strcpy(dhoni->country, "India");

    Cricketer* kohli = new Cricketer;

    kohli = dhoni;
    // here dhoni and kohli both are ponters and kohli = dhoni means that kohli is now pointing to dhoni now since we remove dhoni from the memory kohli is now a dangling pointer

    delete dhoni;

    cout << kohli->jersey_no << " " << kohli->country;

    return 0;
}