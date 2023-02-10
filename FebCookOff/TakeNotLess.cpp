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
    ll a;
    cin >> a;
    ll arr[a], max = INT_MIN, cnt = 0;
    map<int, int> mp;
    for (ll i = 0; i < a; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }

    for (auto it : mp)
    {
        if (it.second % 2)
        {
            cout << "Marichka" << endl;
            return;
        }
    }
    cout << "Zenyk" << endl;
}

int main()
{

    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}