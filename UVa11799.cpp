#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    for(int i=0; i<tc; i++)
    {
        int N;
        cin >> N;
        
        int ar[N];
        for(int i=0; i<N; i++)
        {
            cin >> ar[i];
        }
        
        sort(ar,ar+N);
        
        printf("Case %d: %d\n",i+1,ar[N-1]);
    }
}