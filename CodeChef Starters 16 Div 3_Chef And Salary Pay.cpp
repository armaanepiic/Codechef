//Bismillahir rahmanir rahim
//Arman Hossain C193033
//Programming is nothing but an addiction.
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
    int x , y;
    cin >> x >> y;
    string s;
    cin >> s;
    int total,count=0;
    vi v;
    for (int i = 0; i < s.length(); ++i)
    {
        if(s[i]=='1')
            count++;
    }
    total = count*x;
    int temp=0;
    for (int i = 0; i < s.length(); ++i)
    {
        if(s[i]=='1'){
            temp++;
            if(i == 29)
                v.pb(temp);
        }
        else if(s[i]=='0')
        {
            v.pb(temp);
            temp=0;
        }
    }
    sortv;
    int bonus = v.back()*y;
    total+=bonus;
    cout << total << endl;

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