//longest subarray with sum=k;

// ekdum hin brute force hai bhaiya

//  int main()
//  {
//   int A[10]={1,2,3,3,5,7,8,1,1,1};
//   int k=3;
//   int ans=0;
//   int sum=0;
//   for (int i = 0; i < 10; i++)
//   {
//      sum=i;
//      for (int j = i+1; j < 10; j++)
//      {
//         if(sum==k) ans=max(ans,j-i);
//         else if(sum>k) break;

//        sum=sum+j;
//     } 
//  }
//  cout<<ans;

// }


//it works for both positives and negatives
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A[10]={1,2,3,4,1,1,1,5,2,5};
    int k=3;

    map<int,int> m;
    int sum=0;
    int ans=0;

    for (int i = 0; i < 10; i++)
    {
        sum=sum+A[i];
        if(sum==k) ans=max(ans,i+1);

        int a=sum-k;

        if(m.find(a)!=m.end()) 
        {
            int len=i-m[a];
            ans=max(ans,len);
        }
        if(m.find(sum)==m.end())
        {
        m[sum]=i;}
    }

    cout<<ans;
    

 return 0;
}


//for positives we also have a two pointer approach
//that is more optimal but it will not work in this case