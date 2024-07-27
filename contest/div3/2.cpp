#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;

        vector<int> v;
        for (int i = 0; i < b; i++)
        {
            int trash;
            cin >> trash;
            v.push_back(trash);
        }
        sort(v.begin(), v.end());

        int sum=0;

        for(int i=0;i<v.size()-1;i++)
        {
          if(v[i]==1)
          sum=sum+1;
          else if(v[i]>1)
          {
            int rem=v[i]*2;
            sum=sum+rem-1;
          }
        }

        cout<<sum<<endl;
    }
 return 0;
}