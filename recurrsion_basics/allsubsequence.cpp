#include <bits/stdc++.h>
using namespace std;

void fun(int n,int index,int A[],vector<int> &v)
{
    if(index==n)
    {
        for (auto it : v)
        {
            cout<<it<<" ";
            
        }
        cout<<endl;
        return;
    }

    v.push_back(A[index]);
    fun(n,index+1,A,v);
    

    v.pop_back();
    fun(n, index + 1, A, v);
}
int main()
{

 int n=3,index=0;
 vector<int> v;
 int A[n]={3,2,1};

 fun(n,index,A,v);

 
 return 0;
}