#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, rows;
    printf("Enter number of rows: ");
    cin>>rows;
    for(i=1; i<=rows; ++i)
    {
        for(j=1; j<=i; ++j)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}