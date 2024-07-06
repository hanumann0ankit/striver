#include <bits/stdc++.h>
using namespace std;

void fun(int n, int index, int A[], vector<int> &v,int sum)
{
    if (index == n)
    {
        if(sum==3)
        {
        for (auto it : v)
        {
            cout << it;
        }
        cout << endl;
        }
       
        return;
    }

    v.push_back(A[index]);
    sum=sum+A[index];
    fun(n, index + 1, A, v,sum);
    v.pop_back();
    sum=sum-A[index];
    fun(n, index + 1, A, v,sum);
}
int main()
{

    int n = 3, index = 0;
    vector<int> v;
    int A[n] = {3, 2, 1};

    //lets take a condition if subsequence sum is 3 only then print the subsequence

    int sum=0;

    fun(n, index, A, v,sum);

    return 0;
}