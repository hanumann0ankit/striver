#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;

        vector<int> v;
      
        for (int i =a; i > 0; i--)
        {
        
            v.push_back(i);
        }
        
        // int ans=0;
        // for (int i = 0; i <v.size(); i++)
        // {

        //     int sum1 = 0, sum2 = 0, ans1 = 0;
        //     for (int j = 0; j < v.size(); j++)
        //     {
        //         if(v[j]>=c) sum1=sum1+v[j];

        //         if(v[j]<=b) sum2=sum2+v[j];

        //         ans1=ans1+sum1-sum2;
        //     }
        //     ans=max(ans,ans1);
        //     if(ans==ans1)
        //     {
        //         w=v;
        //     }
            
        //     next_permutation(v.begin(), v.end());
        // }

        // for (int i = 0; i <w.size(); i++)
        // {
        //     cout<<w[i]<<" ";
        // }
        // cout<<endl;

        int index=0;

        for (int i = 0; i <v.size(); i++)
        {
            if(v[i]==b) index=i;
        }

        reverse(v.begin()+index,v.end());

        for (int i = 0; i < v.size(); i++)
        {
          cout<<v[i]<<" ";
        }
        cout<<endl;
        
        

      
        
    }
 return 0;
}