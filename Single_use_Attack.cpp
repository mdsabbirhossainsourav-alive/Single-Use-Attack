#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int h,x,y;
        cin >> h >> x >> y;
        int rem = h-y;
        int attck1;
        if (rem <= 0) 
        {
            attck1 = 1;
        }
        else
        {
            attck1 = 1 + (rem+x -1)/x;
        } 
        int attck2 = (h+x -1)/x;
        cout << min(attck1, attck2) << endl;
    }
    return 0;
}
