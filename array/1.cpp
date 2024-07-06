//largest element in an array
//second largest element in an array


//check if array is sorted
//normal case mei dekh le inequality lga ke
//leet code version thoda different hai uska solution hai ye

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int counter=0,flag=0;

    int A[5]={5,1,2,3,4};

    for (int i = 1; i < 5; i++)
    {
       if(A[i-1]>A[i])
       counter++;
    }

    if(A[4]>A[0]) counter++;

    if(counter<=1) cout<<true;
    else cout<<false;
 return 0;
}

//remove duplicates from an array like 112223455 to 12345
//simple two pointer approach