#include <bits/stdc++.h>
using namespace std;
int main()
{
  int A[12]={0,1,2,0,1,2,1,2,0,0,0,1};

  int a=0,b=0,c=11;

 while(b<=c)
 {
     if (A[b] == 0)
     {
         swap(A[b], A[a]);
         a++;
         b++;
     }
     else if (A[b] == 1)
         b++;
     else if (A[b] == 2)
     {
         swap(A[b], A[c]);
         c--;
     }
    
   
     

 }

 for (int i = 0; i < 12; i++)
 {
    cout<<A[i]<<" ";
 }
 
  

 return 0;
}