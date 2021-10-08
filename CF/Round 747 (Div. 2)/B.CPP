#include <bits/stdc++.h>
#define int long long
const int MOD=1e9+7;
using namespace std;

int n,k;

string change(int a)
{
    string s="";
    while (a!=0)
    {
        string tmp=to_string(a%2);
        a/=2;
        s=tmp+s;
    }
    return s;
}

signed main()
{
    int t; cin >> t;
    while (t--)
    {
        cin >> n >> k;
        string t=change(k);
        int tmp=1,sum=0;
        for (int i=t.size()-1;i>=0;i--)
        {
            sum=(((t[i]-'0')*tmp)%MOD+sum%MOD)%MOD;
            tmp=(tmp*n);
        }
        cout << sum << "\n";
    }
}
