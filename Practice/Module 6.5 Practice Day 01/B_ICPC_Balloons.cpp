#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        int freq[26] = {0};

        for (int i = 0; i < n; i++)
        {
            char ch = s[i];
            freq[ch - 'A']++;
        }

        for (int i = 0; i < 26; i++)
        {
            if(freq[i] > 0){
                freq[i]++;
            }
        }

        int sum=0;
        for (int i = 0; i < 26; i++)
        {
            sum += freq[i];
        }

        cout << sum << endl;
    }
    
    return 0;
}