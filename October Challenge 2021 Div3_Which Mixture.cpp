//Bismillahir rahmanir rahim
//Arman Hossain C193033
//Programming is nothing but an addiction

#include <bits/stdc++.h>

using namespace std;

//#define tcase int t;cin>>t;while(t--)
#define ll long long
#define pi 3.14159
#define pb push_back

using vi = vector<int>;

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
    while(t--) {
        int a , b;
        cin >> a >> b;
        if(a == 0)
            cout << "Liquid\n";
        else if(b == 0)
            cout << "Solid\n";
        else if(a > 0 && b > 0)
            cout << "Solution\n";
    }


    return 0;
}
