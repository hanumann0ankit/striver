#include <bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while (t--)
 {
    int a;
    cin>>a;
    vector<int> v;
    for (int i = 0; i < a; i++)
    {
      int trash;
      cin>>trash;
      v.push_back(trash);
    }

    vector<int> k;
    for (int i = 2; i <= a/2; i++)
    {
        if(a%i==0) k.push_back(i);
    }
    
    long long sum=0,ans=0;

    for(int j=0;j<k.size();j++)
    {
      int count=0;
      long long maxv = LONG_LONG_MIN, minv =LONG_LONG_MAX;
      for (int i = 0; i < a; i++)
      {
          if(count<k[j])   
           {
             sum+=v[i];
             count+=1;
           }

          if(count==k[j])
          {
              maxv = max(maxv, sum);
              minv = min(minv, sum);
              sum = 0;
              count = 0;
          }
      }
      ans = max(maxv - minv, ans);
    }
    long long t = *max_element(v.begin(), v.end()) - *min_element(v.begin(), v.end());
    ans = max(ans,t);
    cout<<ans<<endl;
 }

 return 0;
}