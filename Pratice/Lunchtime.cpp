// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   int t;
//   cin >> t;
//   while (t--)
//   {
//     scanf("%d", &s);
//     int arr[s], count[s];
//     for (int i = 0; i < s; i++)
//     {
//       scanf("%d", &arr[i]);
//       count[i] = 0;
//     }
//     for (int i = 0; i < s - 1; i++)
//     {
//       for (int j = i + 1; j < s; j++)
//       {
//         if (arr[i] == arr[j])
//         {
//           count[i] += 1;
//           count[j] += 1;
//         }
//         else if (arr[i] > arr[j])
//         {
//           continue;
//         }
//         else
//         {
//           break;
//         }
//       }
//     }
//     for (int i = 0; i < s; i++)
//     {
//       printf("%d ", count[i]);
//     }
//     printf("\n");
//   }
//   return 0;
// }
