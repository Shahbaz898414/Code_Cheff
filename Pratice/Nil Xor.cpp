


#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t, n, i, j, sum, ans, empty, x;
    
    ll pow_2[31], bn[31], bx[31], bk[31];
    
    pow_2[0]=1;
    
    for(i=1; i<=30; i++){
        pow_2[i]=pow_2[i-1]*2;
    }
    
    cin>>t;
    
    for(;t--;)
    {
        cin>>n>>x;
        
        sum=ans=0;
        empty=0;
        
        for(i=0; i<=30; i++)
        {
            bn[i]=(n%2);
            n/=2;
            
            bx[i]=(x%2);
            x/=2;
            
            if(bn[i]==0 && bx[i]==1){
                bk[i]=0;
            }else if(bn[i]==1 && bx[i]==1){
                bk[i]=1;
            }else{
                bk[i]=-1;
                empty++;
            }
        }
        
        for(i=30; i>=0; i--)
        {
            if(bk[i]==-1)
            {
                if(bn[i]==0 && bx[i]==0){
                    bk[i]=0;
                    empty--;
                }else if(bn[i]==1 && bx[i]==0){
                    ans=ans+pow_2[empty-1];
                    //cout<<ans<<" "<<empty<<"\n";
                    bk[i]=1;
                    empty--;
                }
            }
        }
        
        
        
        cout<<ans<<"\n";
    }
}