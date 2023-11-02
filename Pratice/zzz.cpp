#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int l = 0, n = s.size() - 1;
    bool fl = true;

    string str="";
    while (l <= n)
    {
        if (s[l] != s[n])
        {
            fl = false;
            break;
        }else {
            str+=s[l];
        }
        l++;
        n--;
    }

    if(str.size()==0){
        cout<<"The given string is: "<<str<<endl;
    }else

    cout<<"The longest mirror image string in the string is:   "<<str<<endl;

    // if (fl)
    //     cout << str << endl;
    // else
    //     cout << "Not a palindrome" << endl;
        // cout << " 1" << endl;

    return 0;
}
