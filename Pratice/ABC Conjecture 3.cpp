#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        char s[310000];
        scanf("%s", s);
        
        vector<pair<int, int>> aa;
        int cnta = 0, cntc = 0;
        
        for (int i = 0; i < n; i++) {
            if (s[i] == 'b') {
                aa.push_back({cnta, cntc});
                cnta = 0;
                cntc = 0;
                continue;
            }
            if (s[i] == 'a') {
                cnta++;
            } else {
                cntc++;
            }
        }
        aa.push_back({cnta, cntc});

        for(auto it:aa){
          cout<<it.first<<" "<<it.second<<endl;
        }
        
        cntc = 0;
        // for (int i = 0; i < aa.size(); i++) {
        //     cntc += aa[i].second;
        // }
        // cout<<cntc<<" cntc"<<endl;
        cnta = 0;
        int ans = (1 << 30);
        
        for (int i = 0; i < aa.size(); i++) {
            cntc -= aa[i].second;
            ans = min(ans, cnta + cntc);
            // cout<<ans<<"ans ";
            cnta += aa[i].first;
        }
        // cout<<endl;
        printf("%d\n", ans);
    }
    
    return 0;
}



/*



*/