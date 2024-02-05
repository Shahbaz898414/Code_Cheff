
#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    if (n == 1 || n == 3)
    {
      printf("2\n");
      continue;
    }

    if (n == 2 || n == 4)
    {
      printf("3\n");
      continue;
    }

    long long base = 2;
    bool flag = 0;
    long long tt;
    while (1LL * base * base <= n)
    {
      tt = n;
      if (!(tt % base))
      {
        ++base;
        continue;
      }
      long long left = tt / base;
      long long right = tt - base * left;
      long long q;
      if (right == 0)
      {
        ++base;
        continue;
      }
      for (q = left / base; q > right; q = left / base)
      {
        right = base * (right - q) + left;
        left = q;
      }
      if (left == right || q == right)
      {
        flag = 1;
        printf("%d\n", base);
        break;
      }
      ++base;
    }
    if (!flag)
    {
      base--;
      long long p;
      while ((p = n / base) == base + 1 || base * p != n)
        base--;
      printf("%lld\n", p - 1);
    }
  }

  return 0;
}






/*

#include<cstdio>
int main()
{
  int t;
  long long n;
  int base;
  scanf("%d",&t);
  while(t--)
    {
        scanf("%lld",&n);
        if(n==1||n==3)
        {
            printf("2\n");
            continue;
        }
        if(n==2||n==4)
        {
            printf("3\n");
            continue;
        }
        base = 2;
        bool flag = 0;
        long long tt ;
        while(1LL*base*base<=n)
        {
            tt = n;
            if(!(tt%base))
            {
              ++base;
              continue;
      }
            long long left = tt/base;
            long long right = tt - base*left;
            long long q;
            if(right==0)
            {
              ++base;
              continue;
      }
            for(q=left/base;q>right;q=left/base)
            {
              right = base *(right-q) + left;
              left = q;
      }
      if(left==right||q==right)
      {
        flag = 1;
        printf("%d\n",base);
        break;
      }
            ++base;
        }
        if(!flag)
        {
            base--;
            long long p;
            while((p=n/base)==base+1||base*p!=n)
                base--;
            printf("%lld\n",p-1);
        }
    }
  return 0;
}


*/