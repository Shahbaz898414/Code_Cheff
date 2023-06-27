#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long m, n, r;
  cin >> m >> n >> r;

  vector<vector<long long>> matrix(m, vector<long long>(n));
  for (long long i = 0; i < m; i++)
  {
    for (long long j = 0; j < n; j++)
    {
      cin >> matrix[i][j];
    }
  }

  long long k = min(m, n) / 2;
  vector<vector<long long>> rows(k);

  for (long long ii = 0; ii < k; ii++)
  {
    vector<long long> row;
    for (long long i = ii; i < m - 1 - ii; i++)
    {
      row.push_back(matrix[i][ii]);
    }
    for (long long i = ii; i < n - 1 - ii; i++)
    {
      row.push_back(matrix[m - 1 - ii][i]);
    }
    for (long long i = m - 1 - ii; i > ii; i--)
    {
      row.push_back(matrix[i][n - 1 - ii]);
    }
    for (long long i = n - 1 - ii; i > ii; i--)
    {
      row.push_back(matrix[ii][i]);
    }
    rows[ii] = row;
  }

  vector<vector<long long>> result = matrix;

  for (long long ii = 0; ii < k; ii++)
  {
    vector<long long> row = rows[ii];
    long long shift = r % row.size();
    long long idx = row.size() - shift;

    for (long long i = ii; i < m - 1 - ii; i++)
    {
      result[i][ii] = row[idx];
      idx = (idx + 1) % row.size();
    }
    for (long long i = ii; i < n - 1 - ii; i++)
    {
      result[m - 1 - ii][i] = row[idx];
      idx = (idx + 1) % row.size();
    }
    for (long long i = m - 1 - ii; i > ii; i--)
    {
      result[i][n - 1 - ii] = row[idx];
      idx = (idx + 1) % row.size();
    }
    for (long long i = n - 1 - ii; i > ii; i--)
    {
      result[ii][i] = row[idx];
      idx = (idx + 1) % row.size();
    }
  }

  for (const auto &row : result)
  {
    for (long long num : row)
    {
      cout << num << " ";
    }
    cout << endl;
  }

  return 0;
}
