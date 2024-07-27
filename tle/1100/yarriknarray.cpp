#include <bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
    int a;
    cin>>a;
    vector<int> v;

    for (int i = 0; i < a; i++)
    {
        v.push_back(i);
    }
    int p1=0,p2=1;
    long long ans=0;
    long long sum=v[p1];
    while(p2<a)
    {
      if((v[p1]%2==0 && v[p2]%2!=0) || (v[p2] % 2 == 0 && v[p1] % 2 != 0))
       {
        sum+=v[p2];
       }

      if(sum<0)
      {
        while(sum<0)
        {
            sum=sum-p1;
            p1++;
        }
      }

    }
    
 }
 return 0;
}