#include <iostream>
#include <set>
#include <stdio.h>
#include <map>
#include <algorithm>
#include <vector>
#include <math.h>
#include <bits/stdc++.h>

using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;

    map<int, char> mp;
    for (int i = 0; i < n; i++)
    {
        mp[str[i]]++;
        if (mp[str[i]] >= 2)
        {
            cout << n - 2 << endl;
            return;
        }
    }

    cout << -1 << endl;
}

int main()
{

    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}