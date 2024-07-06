#include <bits/stdc++.h>
using namespace std;

int fun(int n, int index, int A[], vector<int> &v, int sum )
{
    if (index == n)
    {
        if (sum == 3)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    v.push_back(A[index]);
    sum = sum + A[index];
    int l= fun(n, index + 1, A, v, sum);
    v.pop_back();
    sum = sum - A[index];
    int r= fun(n, index + 1, A, v, sum);

    return l+r;
}
int main()
{

    int n = 3, index = 0;
    vector<int> v;
    int A[n] = {3, 2, 1};

    int sum = 0;

   cout<< fun(n, index, A, v, sum);

    return 0;
}