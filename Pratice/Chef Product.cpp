#include "bits/stdc++.h"
using namespace std;

#define int long long int
#define double long double
#define endl '\n'

const int MOD = 1000000007;

int modInverse(int A, int M = MOD)
{
  int m0 = M;
  int y = 0, x = 1;
  if (M == 1)
    return 0;
  while (A > 1)
  {
    int q = A / M;
    int t = M;
    M = A % M, A = t;
    t = y;
    y = x - q * y;
    x = t;
  }
  if (x < 0)
    x += m0;
  return x;
}

void solve()
{

  int n, x;

  cin >> n;

  if(n==2){
    cout<<0<<endl;
    return;
  }

  
  
}

signed main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t = 1;
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}



/*

Hello Shivam Chhirolya , 
I am shahbaz khan  pursuing my B. Tech in Computer Science and Engineering batch 2024.
My Technical Skill set includes : 
Languages: C++, C, Javascript, SQL,Java,Python
Technologies/Frameworks: HTML5, CSS3, Django, MongoDB, Express, React, NodeJS, Bootstrap, Angular,PCF,
postgresql, Spring Boot
Developer Tools: VS Code, Linux, Firebase, Git, Windows, Postman
Kindly refer me for Associate Engineer (job id : 3057829) and Embedded Software Engineer (Fresher)
Job Id: 3057829
Thank you. 



/////////////////////////////////
Hi,

I hope this message finds you well! I came across the Software Engineer Intern - 2024 Job (https://nvidia.wd5.myworkdayjobs.com/NVIDIAExternalCareerSite/job/US-CA-Santa-Clara/Software-Engineering-Intern--Generative-AI-Research---Summer-2024_JR1978405?source=jobboardlinkedin) at nvidia. As an aspiring Software Engineer, I admire the company's innovative work. If possible, could you kindly refer me? I'd greatly appreciate it!

Best regards,
Shahbaz Khan


My Resume:-
https://drive.google.com/file/d/1GWEPhW0xSo_SEXyfPfixQkT76R6srowC/view?usp=sharing


*/