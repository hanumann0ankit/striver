#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--!=0){
   int n;int x;
    cin>>n;cin>>x;
      long long ans=0;
      for(int i=1;i<=pow(n/3,2);i++){
         for(int j=1;j<=pow(n/3,2);j++){
            if(i+j<=x){
               ans+=(n-(i*j))/(i+j);
            }
         }
      }
            cout<<ans;
      }
      
    
    
    
 return 0;
}