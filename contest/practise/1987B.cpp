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
    for(int i=0;i<a;i++)
   {
      int trash;
      cin>>trash;
      v.push_back(trash);
    }

    int maxi=v[0];
    int rem=0;
    vector<int> unsort;
    for (int i = 1; i <a; i++)
    {
      if(v[i]<maxi)
      {
        unsort.push_back(v[i]);
        rem=rem+maxi-v[i];
      }
      else
      {
        maxi=v[i];
      }
    }
    
    if(rem==0) cout<<rem<<endl;
    cout<<rem+1<<endl;
    
 }

  return 0;
}