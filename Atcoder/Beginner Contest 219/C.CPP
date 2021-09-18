#include <bits/stdc++.h>

using namespace std;

string a[50005],x;
int n;
vector <string> t;
unordered_map<char,int> new_order;

bool check(string a,string b)
{
    for (int i=0;i<min(a.size(),b.size());i++)
    {
        if (new_order[a[i]]<new_order[b[i]]) return true ;
        else  if (new_order[a[i]]>new_order[b[i]]) return false;
    }
    if (a.size()<b.size()) return true;
    else return false;
}

int main()
{
    cin >> x;
    cin >> n;
    for (int i=0;i<x.size();i++) new_order[x[i]]=i;
    for (int i=0;i<n;i++)
    {
        string tmp;
        cin >> tmp;
        t.push_back(tmp);
    }
    sort(t.begin(),t.end(),check);
    for (auto k: t) cout << k << endl;
}
