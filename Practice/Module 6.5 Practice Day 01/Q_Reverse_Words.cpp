#include<bits/stdc++.h>
using namespace std;

void reverseStr(string& word){
    for (int i=0; i<word.size()/2; i++)
    {
        swap(word[i], word[word.size() - i - 1]);
    }
    
}

int main(){
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;

    s.erase();
    while(ss >> word){
        reverseStr(word);
        s += word + " ";  
    }

    for (int i = 0; i < s.size()-1; i++)
    {
        cout << s[i];
    }
    
    
    return 0;
}