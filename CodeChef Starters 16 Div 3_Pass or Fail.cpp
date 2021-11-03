//Bismillahir rahmanir rahim
//Arman Hossain C193033
//Programming is nothing but an addiction.
#include <bits/stdc++.h>
using namespace std;
#define     pb          push_back
//#define     endl        cout << endl
#define     sortv       sort(v.begin(), v.end())
#define     rev_sortv   sort(v.begin(), v.end(), greater<int>())

using ll    =   long long int;
using ull   =   unsigned long long;
using vi    =   vector<int>;
using vll   =   vector<ll>;
using vc    =   vector<char>;
using vs    =   vector<string>;

void lets_code()
{
    int t;
    cin >> t;
    while(t--) {
        int i = 0 , e = 0;
        for (int j = 0; j < 5; ++j)
        {
            int x;
            cin >> x;
            if(x == 1)
                i++;
            else if(x == 2)
                e++;
        }
        if(i == e)
            cout << "DRAW\n";
        else if(i > e)
            cout << "INDIA\n";
        else if(e > i)
            cout << "ENGLAND\n";
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lets_code();

    return 0;
}