#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    
   vector<int> v;
    for (int i = 0; i < 3; i++)
    {
       int trash;
       cin>>trash;
       v.push_back(trash);
    }
    sort(v.begin(),v.end());

    int ans=0;

    // for (int i = 0; i <3; i++)1

    // {
    //    cout<<v[i]<<" ";
    // }
    
    

    

    for (int i = v[0]; i <=v[0]+5; i++)
    {
        int limt1 = v[1] + 5 - i + v[0];
         for (int j = v[1]; j <=limt1 ; j++)
        {
            int limit = v[2] + 5 - i - j + v[0] + v[1];
             for (int k = v[2]; k <=limit ; k++)
            {
                ans = max(i * j * k, ans);
            }
       }
    }

    cout<<ans<<endl;
    


  
 

  }
 return 0;
}