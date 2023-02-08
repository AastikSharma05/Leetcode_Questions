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

    int a, b, c, x;
    cin >> a >> b >> c >> x;
    if (a >= x || b >= x || c >= x)
        cout << "YES" << endl;
    else if (a + b >= x || a + c >= x || b + c >= x)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{

    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}