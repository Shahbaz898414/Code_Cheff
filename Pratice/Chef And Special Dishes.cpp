#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {

       string s;
        cin >> s;
        int n = s.length();
        if (n==1) {
            cout << "NO" << endl;
            continue;
        }
        if (n%2==0) {
            if (s.substr(0,n/2)==s.substr(n/2,n/2)) cout << "YES" << endl;
            else cout << "NO" << endl;
        }else {


            int p1 = 0; int p2 = n/2+1;


            string temp1 = "";
            string temp2 = "";
            

            while (p1<n/2+1 and p2<n) {
                if (s[p1]!=s[p2]) p1++;
                else temp1+=s[p1], p1++, p2++;
            }


            p1 = 0; p2 = n/2;


            while (p1<n/2 and p2<n) {
                if (s[p1]!=s[p2]) p2++;
                else temp2+=s[p1], p1++, p2++;
            }


            if (temp1==s.substr(n/2+1, n/2) or temp2==s.substr(0,n/2)) {
                cout << "YES"<< endl;
            }
            else  cout << "NO" << endl;

            
        }


    }
    return 0;
}

