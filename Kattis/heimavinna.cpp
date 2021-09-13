#include <bits/stdc++.h>

using namespace std;

long long cnt;
string s,st;

signed main()
{
    cin >> s;
    for (int i=0;i<s.size();i++)
        if (s[i]!=';') st+=s[i];
        else
        {
            size_t pos=st.find('-');
            if (pos==-1) cnt++;
            else
            {
                int k=0;
                string tmp1="";
                string tmp2="";
                while (st[k]!='-')
                {
                    tmp1+=st[k];
                    k++;
                }
                int t1=atoi(tmp1.c_str());
                k++;
                while (k<st.size())
                {
                    tmp2+=st[k];
                    k++;
                }
                int t2=atoi(tmp2.c_str());
                cnt+=(t2-t1)+1;
            }
            st="";
        }
    size_t pos=st.find('-');
    if (pos==-1) cnt++;
    else
    {
        int k=0;
        string tmp1="";
        string tmp2="";
        while (st[k]!='-')
        {
            tmp1+=st[k];
            k++;
        }
        int t1=atoi(tmp1.c_str());
        k++;
        while (k<st.size())
        {
            tmp2+=st[k];
            k++;
        }
        int t2=atoi(tmp2.c_str());
        cnt+=(t2-t1)+1;
    }
    cout << cnt;
}
