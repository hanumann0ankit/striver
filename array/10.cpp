//buy and sell stocks
//minimum from previous - current element

#include <bits/stdc++.h>
using namespace std;
int main()
{
 int A[7]={7,11,1,5,4,6,2};
 int point=INT_MAX,ans=0;

 for (int i = 0; i <7; i++)
 {
   point=min(A[i],point);
   ans=max(ans,A[i]-point);
 }

 cout<<ans<<endl;
 
 return 0;
}