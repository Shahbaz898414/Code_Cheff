#include<bits/stdc++.h>
#define ll long long
using namespace std;

stack<int> st;

int main() {

  int n; 
  cin >> n;
    vector<pair<pair<int, string>, int>> pile;
    
    for(int i=0; i<n; i++){
        
        int exe;
        cin >> exe;
        if(exe == -1){
            
            cout << pile.back().second << " " << pile.back().first.second  << "\n";
            pile.pop_back();
        }else{
            
            string name;
            cin >> name;
            if(exe == 0) continue;
            if(pile.empty() || pile.back().first.first >= exe){
                pile.push_back(make_pair(make_pair(exe, name), 0));
            } else{
                pile.back().second += 1;
            }
        }
        
    }

}