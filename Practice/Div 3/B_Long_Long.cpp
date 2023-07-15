#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   
   while(t--){
      int n;
      cin >> n;
      
      int a[n];
      for (int i = 0; i < n; i++)
      {
           cin >> a[i];
      }
    
      int mxSum=0, minOp=0, countNeg=0, countZero=0;
      for (int i = 0; i < n; i++)
      {
            if(a[i] < 0){
                countNeg++;
            }
            else if(a[i] == 0) countZero++;
            mxSum += abs(a[i]);
      }

      if(countNeg+countZero > n/2){
         minOp = 1+n-countNeg-countZero;
      }
      else{
        minOp = countNeg;
      }

      cout << mxSum << " " << minOp << endl;

   }
   

   return 0;
}