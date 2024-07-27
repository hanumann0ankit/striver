//two sum
//brute force 2 for loop use karke

#include <bits/stdc++.h>
using namespace std;
int main()
{ 
 int A[6]={2,7,11,15};
 map<int,int> m;
 int target=9;
 int flag=0;
 
 for (int i = 0; i <4; i++)
 {
    int a=target-A[i];
    if(m.find(a)!=m.end())
    {
      flag=1;
      cout<<m[a]<<i<<endl;
      return 0;
    }
    m[A[i]]=i;
 }

if(flag==0) cout<<-1<<" "<<-1;
 return 0;
}