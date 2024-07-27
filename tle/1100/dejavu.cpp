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

    vector<int> v,z;
    set<int> s;

    for (int i = 0; i < a; i++)
    {
       int trash;
       cin>>trash;
       v.push_back(trash);
    }

    for (int i = 0; i < b; i++)
    {
        int trash;
        cin >> trash;
        trash=pow(2,trash);
        z.push_back(trash);
    }


    for (int i = 0; i <b; i++)
    {
        
        if(s.count(z[i])) continue;
        else s.insert(z[i]);
        
        for (int j = 0; j < a; j++)
        {
            if(v[j]%z[i]==0)
            {
                v[j]=v[j]+z[i]/2;
            }
        }
    }

    for (int i = 0; i < a; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
 }
 return 0;
}