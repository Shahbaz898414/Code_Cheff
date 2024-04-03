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



Subject: Application for Google Summer of Code 2024 - Front-end and Adaptive Question Rendering

//////////////////////////////////////////////////////////////////

Dear Sir,

I hope this email finds you well. I am writing to express my interest in participating in the Google Summer of Code 2024 program, specifically for the project focusing on the development of an Front-end and Adaptive Question Rendering for your clinical trial matching application.

As a Bachelor of Electronics and Computer Science student at Shree LR Tiwari College, Mumbai University, I have gained comprehensive knowledge and hands-on experience in software development, particularly in ReactJS and JavaScript. Additionally, my previous internships as a Full Stack Developer at Pyramid Developers and as a MERN Intern at NULL CLASS have equipped me with valuable skills in web development, including ReactJS, Node.js, Express.js, and MongoDB.

I am particularly drawn to this project because of its potential to significantly improve the usability and accessibility of your clinical trial matching application, especially for users with limited medical knowledge. The opportunity to integrate an intelligent algorithm for prioritizing questions and developing an adaptive web form aligns perfectly with my interests and expertise.

Attached to this email, you will find my resume, which provides detailed information about my educational background, technical skills, and professional experiences. I believe that my skills and experiences make me well-suited to contribute effectively to this project.

I am eager to collaborate with your team and contribute to the success of this project. Please let me know if there are any further steps I need to take as part of the application process. Thank you for considering my application, and I look forward to the possibility of working together.

Warm regards,

Shahbaz Khan
7710968756

Implemented user profile creation functionality, allowing users to personalize their profiles.
Enabled users to upload their images and personal information, enhancing user engagement and customization options.


*/