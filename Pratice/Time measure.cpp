#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    double angle;
    cin >> angle;
    for (int h = 0; h < 12; h++)
    {
      for (int m = 0; m < 60; m++)
      {
        double h_angle = (double)30 * h + m / 2.0;
        double m_angle = (double)(m * 6.0);
        double anglediff = abs(h_angle - m_angle);
        if (anglediff > 180)
          anglediff = 360 - anglediff;
        double diff = abs(anglediff - angle);
        if (diff < 1 / 120.0)
        {
          printf("%.2d:%.2d\n", h, m);
        }
      }
    }
  }
  return 0;
}
