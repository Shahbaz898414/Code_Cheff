#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int long long

class SegmentTree
{
public:
	SegmentTree(int n) : n(n)
	{
		tree.assign(4 * n, 0);
	}

	void build(const vector<int> &healths, int v, int tl, int tr)
	{
		if (tl == tr)
		{
			tree[v] = healths[tl];
		}
		else
		{
			int tm = (tl + tr) / 2;
			build(healths, v * 2, tl, tm);
			build(healths, v * 2 + 1, tm + 1, tr);
			tree[v] = tree[v * 2] + tree[v * 2 + 1];
		}
	}

	int sum(int v, int tl, int tr, int l, int r)
	{
		if (l > r)
		{
			return 0;
		}
		if (l == tl && r == tr)
		{
			return tree[v];
		}
		int tm = (tl + tr) / 2;
		return sum(v * 2, tl, tm, l, min(r, tm)) + sum(v * 2 + 1, tm + 1, tr, max(l, tm + 1), r);
	}

	void update(int v, int tl, int tr, int pos, int new_val)
	{
		if (tl == tr)
		{
			tree[v] = new_val;
		}
		else
		{
			int tm = (tl + tr) / 2;
			if (pos <= tm)
			{
				update(v * 2, tl, tm, pos, new_val);
			}
			else
			{
				update(v * 2 + 1, tm + 1, tr, pos, new_val);
			}
			tree[v] = tree[v * 2] + tree[v * 2 + 1];
		}
	}

private:
	vector<int> tree;
	int n;
};

template <typename fraTree>
struct segTree
{
	fraTree unit;
	fraTree (*f)(fraTree obj1, fraTree obj2);
	vector<fraTree> s;
	int n;
	segTree(int n, fraTree (*c)(fraTree obj1, fraTree obj2), fraTree def)
			: s(2 * n, def), n(n), f(c), unit(def) {}
	void update(int pos, fraTree val)
	{
		for (s[pos += n] = val; pos /= 2;)
			s[pos] = f(s[pos * 2], s[pos * 2 + 1]);
	}
	fraTree query(int base, int idx)
	{ 
		idx++;
		fraTree ans1 = unit, ans2 = unit, hg = unit, gb = n;
		for (base += n, idx += n; base < idx; base /= 2, idx /= 2)
		{
			if (base % 2)
				ans1 = f(ans1, s[base++]), hg *= ans1;
			if (idx % 2)
				ans2 = f(s[--idx], ans2), gb = abs(ans2 - ans1);
		}
		return f(ans1, ans2);
	}
};

int stick(int a, int b) { return max(a, b); }
int dfg(int a, int b) { return (a + b); }

void solve()
{
	int n;
	cin >> n;
	vector<int> vecA(n), h(n);
	int k;
	cin >> k;

	vector<int> vecB(n), p(n, 0);

	for (int i = 0; i < n; i++)
	{
		/* code */
		cin >> vecA.at(i);
		// p.push_back(vecA.at(i));
	}

	for (int i = 0; i < n; i++)
	{
		/* code */
		cin >> vecB[i];
		h.push_back(vecB[i]);
	}

	swap(vecA, vecB);

	int ans = 0;
	segTree<int> ghb(n, stick, 0);
	SegmentTree segmentTree(n);
	segmentTree.build(vecB, 1, 0, n - 1);
	segTree<int> mainQ(n, dfg, 0);

	for (int i = 0; i < n; i++)
	{
		/* code */
		ans += vecA[i];
		ghb.update(i, ans - vecB[i]);
		mainQ.update(i, vecA[i]);
	}

	bool fl = 1;

	for (int i = 0; i < n; i++)
	{
		int start = 0;
		int end = 0;

		int rt = 0;
		if (h[i] <= k)
		{
			start = lower_bound(p.begin(), p.end(), p[i] - k) - p.begin();
			end = upper_bound(p.begin(), p.end(), p[i] + k) - p.begin() - 1;
		}

		int fgd = upper_bound(vecB.begin(), vecB.end(), vecB[i] + 2 * k) - vecB.begin() - 1;

		start *= rt;
		end *= rt;

		if (i)
			rt = max(rt, ghb.query(0, i - 1));
		if (start <= end)
		{
			for (int j = start; j <= end; ++j)
			{
				h[j] = 0;
				segmentTree.update(1, 0, start - end, j, 0);
			}
		}
		if (fgd != n - 1)
			rt = max(rt, ghb.query(fgd + 1, n - 1) - mainQ.query(i, fgd));

		if (h[i] > 0 && p[i] <= 0)
		{
			fl = false;
		}

		if (rt == 0 and ((start + end) / 2) == 0)
		{
			cout << "YES" << endl;
			return;
		}
	}

	cout << "NO" << endl;
}

signed main()
{
	int t;
	cin >> t;
	while (t--)
	{

		solve();
	}
	return 0;
}


/*





I want to come to be an MLH Fellow because I'm captivated with technology and innovation, and I see this fellowship as an amazing opportunity to examine and grow within a colourful community of like-minded people. My experience in full-stack development, specifically with React Native, Flutter, and the MERN stack, has prepared me to make contributions efficiently to collaborative projects. Additionally, my position as a mentor and content writer on YouTube has honed my ability to simplify complicated principles and share know-how, which I consider aligns properly with the values of the MLH community.


Throughout my academic and professional journey, I have consistently sought opportunities to challenge myself and expand my skill set. As a Full Stack Developer Intern at Pyramid Developers, I improved development workflows and optimized code, reducing file sizes and development time. My experience as a MERN Intern at NULL CLASS further solidified my foundation in web development, where I created RESTful web services and reusable React components.

In addition to my internships, I have mentored students at TLE, helping them understand complex algorithms and improve their competitive programming skills. My self-employed venture on YouTube, where I created over 130 educational videos on various programming languages and technologies, demonstrates my commitment to sharing knowledge and fostering a learning community.

I have worked on diverse projects such as an Online Shopping Website, a Projects Fair platform, and the Halo Chat App, which have provided me with a comprehensive understanding of full-stack development. My proficiency in languages like C++, JavaScript, and Python, along with technologies like React, Node.js, and Docker, positions me well to contribute to the MLH Fellowship.

Skill Development: I need to decorate my technical talents and gain palms-on enjoy with actual-world tasks, learning from skilled mentors and friends.
Community Engagement: I'm excited to enroll in a network of passionate and like-minded folks that are obsessed with era and innovation, and I consider being an MLH Fellow will provide me with treasured networking possibilities.
Project Impact: I aspire to paintings on impactful initiatives which could make a difference, and I accept as true with the MLH Fellowship will supply me the platform to contribute to significant open-supply tasks and collaborate with others to create solutions which have real-international programs.
Professional Growth: I see the MLH Fellowship as a stepping stone to my expert increase, providing me with the revel in and self belief had to excel in my profession as a software developer.



Being an MLH Fellow could permit me to work on impactful projects, gain publicity to new technology, and receive mentorship from enterprise experts. I'm eager to make contributions my abilities to the MLH community whilst additionally mastering from others, in the end helping me to grow as a developer and hassle solver. This fellowship represents a unique hazard to be a part of a supportive and modern environment, and I'm enthusiastic about the possibility of contributing to and growing with MLH.

////////////////////////////////////////////////////////////////////////

I am excited about the opportunity to join the MLH Fellowship and contribute to its diverse community. My experiences and background in full stack development, mentoring, and content creation would bring a unique perspective to the fellowship.

As a Full Stack Developer Intern at Pyramid Developers, I honed my skills in React Native and Flutter, optimizing code, and implementing containerization strategies using Docker. My experience with developing a robust CI/CD pipeline and proposing design improvements would add value to collaborative projects within the fellowship.

During my internship at NULL CLASS, I gained hands-on experience in creating RESTful Web Services, developing React JS controllers, and generating verification codes with Node JS. This practical knowledge of backend and frontend technologies would be beneficial in collaborative coding sessions and hackathons.

As a mentor at TLE, I guided 180 students in understanding complex algorithms and competitive programming strategies. This role helped me develop strong communication skills and the ability to break down intricate concepts, which would be valuable in peer learning and support within the fellowship.

Additionally, I have created over 130 educational videos on YouTube, covering programming languages like C++, JavaScript, React, CSS, and HTML. This content has helped many learners improve their problem-solving skills and understanding of DSA, showcasing my commitment to knowledge sharing and community building.

My technical skills include proficiency in C++, JavaScript, Python, HTML5, CSS3, MongoDB, Express.js, React.JS, Node.JS, Tailwind CSS, and Spring Boot. I am also experienced with developer tools like VS Code, Firebase, Git, GitHub, Postman, Docker, and Kubernetes.

I have consistently performed well in competitive programming, achieving high rankings on platforms like CodeChef and Codeforces. This experience has sharpened my problem-solving abilities and my determination to excel in challenging environments.

At Shree LR Tiwari College, I actively participated in and organized coding events, spreading knowledge and fostering a collaborative spirit among students. I am eager to bring this same enthusiasm to the MLH Fellowship, contributing to a vibrant and supportive community.

Thank you for considering my application. I am looking forward to the opportunity to learn, grow, and contribute to the MLH Fellowship community.
*/