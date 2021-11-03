//Bismillahir rahmanir rahim
//Arman Hossain C193033
//Programming is nothing but an addiction.


//      solution link :                                     https://www.codechef.com/viewsolution/53427858


#include <bits/stdc++.h>
using namespace std;
#define     pb          push_back

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
    int n;  cin >> n;
    if(n%2==0)
        cout << n << endl;
    else
        cout << n+2 << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        lets_code();
    }

    //lets_code();

    return 0;
}
