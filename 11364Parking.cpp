#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while(tc--)
    {
        int n;
        cin >> n;
        int ar[n];
        
        for(int i=0; i<n; i++)
        {
            cin >> ar[i];
        }

        int mx = *max_element (ar, ar+n);
        int mn = *min_element (ar, ar+n);

        cout << 2*(mx-mn) << endl;


    }

    return 0;
}