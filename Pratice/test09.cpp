#include <iostream>
#include<vector>
using namespace std;

// the time complexity of the given code is O(n), and the space complexity is also O(n).

// possible test cases
// 1) -1 -2 -3 -4 
// 2) 2 3 4 5 6
// 3) -2 2 -3 2 -4 -5 
// 4) -2 5 1 2 3 -3  4 7
// 5) -2 4 -3 5 


int main()
{

    int n;
    cin >> n;



    vector<int> pos, neg;
    for (int i = 0; i < n; i++)
    {
       
        int x;cin>>x;
        if (x >= 0)
            pos.push_back(x);
        else
            neg.push_back(x);
       
    }

    int i=0;
    int j=0,cnt=0;
    while (i <pos.size() and j< neg.size() )
    {
        if(cnt%2==0){
            cout<<pos[i]<<" ";
            cnt++;
            i++;
        }else{
            cout<<neg[j]<<" ";
            j++;
            cnt++;
        }
        
    }


    while(i<pos.size()){
        cout<<pos[i]<<" ";
        i++;
    }


    while(j<neg.size()){
        cout<<neg[j]<<" ";
        j++;
    }


  


    return 0;
}

