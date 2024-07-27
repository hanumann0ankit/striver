#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int x;
        cin >> n;
        cin >> x;
        long long ans = 0;
        for (int i = 1; i <=n; i++)
        {
            for (int j = 1; j <= sqrt(n-(i*j)); j++)
            {
                if (i + j + (n - (i * j)) / (i + j) <= x)
                {
                    ans += (n - (i * j)) / (i + j);
                }
            }
        }
        cout << ans<<endl;
    }

    return 0;
}