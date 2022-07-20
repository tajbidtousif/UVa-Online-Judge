#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    
    while (true)
    {
        cin >> tc;
        if(tc==0)
        {
            break;
        }
        int m, n;
        cin >> m >> n;

        while (tc--)
        {
            int x, y;
            cin >> x >> y;

            if (m == x || n == y)
            {
                cout << "divisa" << endl;
            }
            else if (m < x && n < y) // positive
            {
                cout << "NE" << endl;
            }
            else if (m < x && n > y)
            {
                cout << "SE" << endl;
            }
            else if (m > x && n < y)
            {
                cout << "NO" << endl;
            }
            else if (m > x && n > y)
            {
                cout << "SO" << endl;
            }
        }
    }

    return 0;
}
