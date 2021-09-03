#include <bits/stdc++.h>
 
using namespace std;
 
int t,n;
 
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[151],c=0;
        fill_n(a,150,0);
        for (int i=1;i<=n;i++)
        {
            string s;
            cin >> s;
            for (int j=0;j<s.size();j++) a[s[j]]++;
        }
        for (int i=97;i<=142;i++)
            if (a[i]!=0 && a[i]%n!=0)
            {
                cout << "NO\n";
                c=-1;
                break;
            }
        if (c==0) cout << "YES\n";
    }
}