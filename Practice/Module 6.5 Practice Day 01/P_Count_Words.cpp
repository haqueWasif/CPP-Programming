#include<bits/stdc++.h>
using namespace std;

int searchAlphabet(string& word){
    for (int i=0; i<=word.size(); i++)
    {
        if(word[i] == '!') word.replace(i, 1, " ");
        if(word[i] == '.') word.replace(i, 1, " ");
        if(word[i] == '?') word.replace(i, 1, " ");
        if(word[i] == ',') word.replace(i, 1, " ");
    }

    stringstream ss(word);
    string tempWord;

    int count=0;
    while(ss >> tempWord){
        count++;
    }

    return count;
       
}

int main(){
    string s;
    getline(cin, s);
    
    stringstream ss(s);
    
    int count=0;
    while(ss >> s){
        count += searchAlphabet(s);
    }

    cout << count << endl;

    return 0;
}