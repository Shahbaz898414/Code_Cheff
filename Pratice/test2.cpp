#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second

void qer()
{
   int nl;
   string str;
   cin >> nl >> str;
   vector<pair<char, int>> v;
   for (int i = 0; i < 2 * nl; i++)
          v.push_back({str[i], i});
   vector<int> ans;


   sort(v.begin(), v.end());
   string str1 = "";




   string str2 = "";


   for (int i = 0; i < 2 * nl; i++)

  {
     if (i < nl)
    {
       str1 += v[i].ff;


       ans.push_back(v[i].ss);
      
    }
     else 
    {
       str2 += v[i].ff;
      
    }
    
  }
   if (str1 == str2)
  {
    cout << -1 << endl;
    return;
    
  }
   sort(ans.begin(), ans.end());









 for (auto &it : ans)
  
  
   cout << it << " ";


   
 cout << endl;
}

int main()
{
   int t = 1;
   cin >> t;
   while (t--)

  {
    qer();
    
  }
}