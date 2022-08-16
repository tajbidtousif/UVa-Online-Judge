#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, b, h, w, cost, seat;
    while (cin >> n >> b >> h >> w)
    {
        int ans = INT_MAX;
        for (int i = 0; i < h; i++)
        {
            cin >> cost;
            for (int j = 0; j < w; j++)
            {
                cin >> seat;
                if (seat >= n)
                {
                    int curHotelCost = cost * n;
                    ans = min(ans, curHotelCost);
                }
            }
        }

        if (ans<=b)
        {
            cout << ans << endl;
        }
        else
        {
            cout << "stay home" << endl;
        }
    }
    return 0;
}
