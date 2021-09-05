#include <bits/stdc++.h>
 
using namespace std;
 
int n,k,t,tmp;
 
int main()
{
    cin >> n;
    cin >> tmp;
    if (tmp!=0) { cout << 1; return 0;}
    else
    {
        t=0;
        for (int i=2;i<=n;i++)
        {
            cin >> tmp;
            if (tmp-t>1) 
            {
                cout << i;
               	return 0;
            }
            t=max(t,tmp);
        }
        cout << -1;
    }
}