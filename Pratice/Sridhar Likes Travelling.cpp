#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int mod = 1000000007;
const int MOD = 1000000007;




int main()
{

  ll t;cin>>t;

  while(t--){
     unordered_map<string,string> child;
        unordered_set<string> st;
        unordered_map<string,string> cost;
        int n; cin>>n;
        string par;
        int ans = 0;
        for(int i=0;i<n-1;i++)
        {
            string a,b,c;
            cin>>a>>b>>c;
            child[a] = b;

            st.insert(b);

            cost[a] = c;

            // cout<<c<<" ";

            int x = 0,j=0;
            while( j<c.size() - 1 )
            {
                x = x*10 + (int)(c[j]-'0');
                // cout<<x<<" ";
                j++;
            }
            ans+=x;
        }
        


        for(auto x: child)
        {
            if(st.find(x.first)==st.end())
            {
                par = x.first;
            }
        }


        
        while(child.find(par)!=child.end())
        {
            cout<<par<<" "<<child[par]<<" "<<cost[par]<<"\n";
            par = child[par];
        }

        // cout<<endl;
        
        cout<<ans<<"0"<<"\n";
    
    
    
  }

 
  return 0;
}



/*



Implemented user authentication and authorization functionalities, including sign-in, sign-up, and email confirmation with OTP.

Developed an image processing feature to remove objects from images, enhancing image editing capabilities. 


Created functionality for image restoration, allowing users to
revert edited images to their original state. 

Implemented object recoloring feature, enabling users to change the color of specific objects within images.

Developed generative fill functionality for images, offering users the ability to automatically fill areas of an image with generated content.

Implemented background removal feature, allowing users to easily remove backgrounds from images, enhancing image editing capabilities and versatility.

//////////////////////////////////////////////////////////
Developed sign-in, sign-up, and email confirmation with OTP capabilities.

Enhanced image editing capabilities by implementing object removal functionality and enabling users to revert edited images to their original state.

Empowered users to modify colors of specific objects within images.
Developed generative fill functionality for images, providing users with automatic area filling using generated content.

Enhanced image editing capabilities and versatility by enabling users to easily remove backgrounds from images.

/////////////////////////////////////////////////////////////////////

GSoC

Proposal

How to Apply

1. Review the projects here.
2. Please send a brief resume to lgraglia@uchicago.edu
3. Please send a paragraph describing your interest, and why you want to participate to lgraglia@uchicago.edu.
4. Submit the application/proposal including all requirements at the Google Summer of Code Site.
5. A selection among the applicants will have a Zoom (or a phone call depending on the prefrence of the contributor) with one of the
mentors.

IMPORTANT: We will be rejecting any candidate that doesn't follow this process and spams other people in the team. The only email
address that will consider your application is the one displayed above in the second and third bullet point.
*/