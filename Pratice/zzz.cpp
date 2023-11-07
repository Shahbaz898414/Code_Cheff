

#include <bits/stdc++.h>

using namespace std;



int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int arraySize, targetSum;
        cin >> arraySize >> targetSum;
         //  bool result = true;
        // int count = 0,sum=0,sum2=100000,h=-1;

        // for (int i = 0; i < arraySize; ++i)
        // {
        //     cin >> inputArray[i];
        // }

        vector<int> inputArray(arraySize);

         //  bool result = true;
        // int count = 0,sum=0,sum2=100000,h=-1;

        // for (int i = 0; i < arraySize; ++i)
        // {
        //     cin >> inputArray[i];
        // }

        vector<int> arr;

         bool result = true;
        int count = 0,sum=0,sum2=100000,h=-1;

        for (int i = 0; i < arraySize; ++i)
        {
            cin >> inputArray[i];
        }


        vector<int> modifiedArray(arraySize + 1, 0);



        for (int i = 1; i <= arraySize; ++i)
        {
            modifiedArray[i] = inputArray[i - 1];
             //  bool result = true;
        // int count = 0,sum=0,sum2=100000,h=-1;

        // for (int i = 0; i < arraySize; ++i)
        // {
        //     cin >> inputArray[i];
        // }


            arr.push_back(modifiedArray[i]);
        }

        int n = arraySize;

        sort(arr.begin(),arr.end());


        vector<bool> visited(arraySize + 1, false);
       

        while (!visited[n] && count < targetSum  and arr.size()>0)
        {
            if (modifiedArray[n] > arraySize)
            {
                result = false;

                 //  bool result = true;
        // int count = 0,sum=0,sum2=100000,h=-1;

        // for (int i = 0; i < arraySize; ++i)
        // {
        //     cin >> inputArray[i];
        // }

            }
            count++;
            arr.pop_back();
            visited[n] = true;
             //  bool result = true;
        // int count = 0,sum=0,sum2=100000,h=-1;

        // for (int i = 0; i < arraySize; ++i)
        // {
        //     cin >> inputArray[i];
        // }

            n -= modifiedArray[n];
             //  bool result = true;
        // int count = 0,sum=0,sum2=100000,h=-1;

        // for (int i = 0; i < arraySize; ++i)
        // {
        //     cin >> inputArray[i];
        // }

            sum+=modifiedArray[n];
             //  bool result = true;
        // int count = 0,sum=0,sum2=100000,h=-1;

        // for (int i = 0; i < arraySize; ++i)
        // {
        //     cin >> inputArray[i];
        // }

            sum2-=modifiedArray[n];
             //  bool result = true;
        // int count = 0,sum=0,sum2=100000,h=-1;

        // for (int i = 0; i < arraySize; ++i)
        // {
        //     cin >> inputArray[i];
        // }

            n--;


            n = ((n % arraySize) + arraySize) % arraySize + (2+h);

            arr.push_back(count);


            continue;
        }

        if(sum<0){
            sum*=h;
        }


        if(result and arr.size()>0  and sum>=0 ){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
       
    }

    return 0;
}





/*


Today was my 34th day out of the 100 days  hard challenge.

So today, I solved 5 problems .

1. Vaccine Drive (https://www.codechef.com/problems/VACCINE3)


2. XOR Equal (https://www.codechef.com/problems/PALINT)


3. B. Borze (https://codeforces.com/problemset/problem/32/B)


4. C. Anonymous Informant (https://codeforces.com/contest/1894/problem/C)


5. B. Two Out of Three  (https://codeforces.com/contest/1894/problem/B)



*/