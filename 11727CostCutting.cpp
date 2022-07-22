#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    int cnt = 1;
    while(tc--)
    {
        int ar[3];

        for(int i=0; i<3; i++)
        {
            cin >> ar[i];
        }

        int mx = *max_element(ar, ar+3);
        int mn = *min_element(ar, ar+3);
        
        for(int i=0; i<3; i++)
        {
            if(ar[i]>mn && ar[i]<mx)
            {
                printf("Case %d: %d\n",cnt,ar[i]);
                cnt++;
            }
        }

    }

    return 0;
}