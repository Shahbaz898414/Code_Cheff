#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int long long

signed main()
{

  	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

  int N = 1000000;
    bool prime[N + 1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= N; p++) {
        if (prime[p] == true) {

            for (int i = p * p; i <= N; i += p)
                prime[i] = false;
        }
    }
    long psum[N + 1] = {0},s=0;
    for (int i = 2; i <= N; i++) {
        if (prime[i]) s+=i;

        // cout<<s<<" ";
        psum[i] = s;
    }

    for (int i = 2; i <=50; i++)
    {
      /* code */
      cout<<psum<<" ";
    }
    
    int t;
    scanf("%d", & t);
    while (t--) {
        int n;
        scanf("%d", & n);
        if (n % 2 == 0) printf("%d\n", 2 * n);
        else {
            long sum=0;
            if (prime[n]) sum = psum[n];
            else {
                int p = 0;
                for (p = 3; p * p <= n; p++)
                    if (n % p == 0) break;
                sum = psum[p];
            }
            printf("%ld\n", sum * n);
        }
    
  }
  return 0;
}




/*

Certainly! Here's a template for an email to apply for the Software Engineer Intern position at Dots (YC S21), using the information from your resume:

---

Subject: Application for Software Engineer Intern - Fall 2024/Winter 2025

Dear Ishaan,

I hope this message finds you well.

I am writing to express my interest in the Software Engineer Intern position at Dots for Fall 2024 or Winter 2025, as advertised. With a strong background in full-stack development and a passion for innovative projects, I am excited about the opportunity to contribute to your team. Please find below the details you requested:

Technically Impressive Project:

ImageKit.io
- Technologies Used: TypeScript, JavaScript, MongoDB, Stripe
- Description: Developed a comprehensive image editing platform with sign-in, sign-up, and email confirmation with OTP capabilities. Enhanced the platform's functionality by implementing object removal, color modification, generative fill, and background removal features, significantly improving user experience and versatility.

URLs to My Profiles:

- LinkedIn: [LinkedIn Profile](https://www.linkedin.com/in/shahbaz898khan)
- GitHub: [GitHub Profile](https://github.com/shahbaz898khan)
- LeetCode: [LeetCode Profile](https://leetcode.com/shahbaz898khan)
- CodeChef: [CodeChef Profile](https://www.codechef.com/users/shahbaz898khan)

Why I'm a Good Fit:

With a Bachelor’s degree in Electronics and Computer Science and extensive experience in full-stack development, I bring a robust skill set that aligns well with the requirements of the Software Engineer Intern position. My internships at Pyramid Developers and NULL CLASS have equipped me with hands-on experience in modern web technologies, including React Native, Flutter, Node.js, and MongoDB. 



In my recent role at Pyramid Developers, I successfully reduced file size by 20% through code optimization and implemented containerization strategies using Docker, which streamlined deployment and scalability. My ability to work within agile frameworks and collaborate effectively with diverse teams was demonstrated during my internship at GSSOC24, where I contributed to open-source projects and optimized code for better efficiency.

Furthermore, my experience as a mentor at TLE, where I guided students in competitive programming and problem-solving, has honed my communication and leadership skills. My dedication to continuous learning is evident from my self-employed stint at YouTube, where I created 130+ educational videos on various programming languages and development tools.

I am confident that my technical proficiency, problem-solving abilities, and passion for software development make me a strong candidate for this internship. I am eager to contribute to Dots and grow alongside your talented team.

Thank you for considering my application. I am looking forward to the opportunity to discuss how my background, skills, and certifications can contribute to the continued success of Dots.

Best regards,

Shahbaz Khan  
Andheri, Mumbai  
📞 +91-7710968756  
📧 shahbaz898khan@gmail.com

---

Feel free to personalize this template further to match your style and any additional information you might want to include.




*/