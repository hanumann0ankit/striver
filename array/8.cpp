#include <bits/stdc++.h>
using namespace std;
int main()
{
 //subarray sum
 //return max sum in an sub array which contain negative and positives

 int A[10]={-2,-5,7,3,4,-1,-2,3,1,2};
 int sum=INT_MIN;
 int var=0;
 int start=0,endd=0;

 for (int i = 0; i < 10; i++)
 {
    if(var==0) start=i;
    var=var+A[i];
    if(var>sum)
    {
      sum = max(sum, var);
      endd=i;
    }
    

    if(var<0) var=0; 
 }
 cout<<sum<<endl<<start<<" "<<endd;
 
 return 0;
}