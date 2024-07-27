#include <bits/stdc++.h>
using namespace std;
int main()
{
 vector<vector<int>>matrix;

 for (int i = 0; i < 3; i++)
 {
     vector<int> temp;
     for (int j = 0; j < 3; j++)
     {
         temp.push_back(1);
     }
     matrix.push_back(temp);
     temp.clear();
 }
 for (int i = 0; i < 3; i++)
 {
     for (int j = 0; j < 3; j++)
     {
        cout<<matrix[i][j];
     }
     cout<<endl;
 }

 int rows = matrix.size();
 int cols = matrix[0].size();

 vector<int> n(rows, 1);
 vector<int> m(cols, 1);

 for (int i = 0; i < rows; i++)
 {
     for (int j = 0; j < cols; j++)
     {
         if (matrix[i][j] == 0)
         {
             n[i] = -1;
             m[j] = -1;
         }
     }
 }

 for (int i = 0; i < matrix.size(); i++)
 {
     for (int j = 0; j < matrix[i].size(); j++)
     {
         if (n[i] == -1 || m[j] == -1)
             matrix[i][j] = 0;
     }
 }

     return 0;
}