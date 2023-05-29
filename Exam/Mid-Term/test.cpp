#include<bits/stdc++.h>
using namespace std;


// Creating a class named Player
class Player{
    public:
        char name[100];
        int age;
        char profession[100];

        // Creating a constructor of the class
        Player(char *nm, int a, char *p){
            strcpy(name, nm);
            age = a;
            strcpy(profession, p);
        }
};

int main(){
   char nm1[] = "Rony";
   char prof1[] = "Student";

   Player p1(nm1, 17, prof1);

   return 0;
}

