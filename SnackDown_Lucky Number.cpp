//Bismillahir rahmanir rahim
//Arman Hossain C193033
//Programming is nothing but an addiction.
#include <bits/stdc++.h>
using namespace std;
#define     pb          push_back
#define     endl        cout << endl
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
        int a , b , c;
        bool flag = false;
        for(int i = 0 ; i < 3 ; i++)
        {
            int x;
            cin >> x;
            if(x == 7)
                flag = true;
        }
        if(flag == true)
            cout << "YES\n";
        else
            cout << "NO\n";

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