#include <bits/stdc++.h>

using namespace std;
#define ll long long
const  int N=1e5+5;


ll n,x,a[N],dp[N][2];



int main()
{

  int t;
  cin >> t;

  while (t--)
  {

    cin>>n>>x;

    for (ll i = 1; i <=n; i++) {
      cin>>a[i];
    }

   for(int i = 2; i <= n; i++) {

      dp[i][0] = max((a[i]^a[i - 1]) + dp[i - 1][0], (a[i]^ (a[i - 1] + x)) + dp[i - 1][1]);


      dp[i][1] = max(((a[i] + x) ^ a[i - 1]) + dp[i - 1][0], ((a[i] + x)^ (a[i - 1] + x)) + dp[i - 1][1]);

   }
       
       
       
    cout << max(dp[n][0], dp[n][1]) << endl;
    
    

       
        
  }
  return 0;
}



/*



bhai mujhe kuch pata chala hai ki tua meri baate jake un logo ko bata hai  mujhe sak tha par abhi pakka hoga hai mere ss bhi tune dekhaye hai un logo ko first time mujhe ayesa laga tha ki mujhe ek dost mil kya hai par bhai mai samaja gya ki mairi hi galti thi sari sab  mere hi vajah hua hai tua or ab mai agge ye yaad rakhu ga kuch bolne se pehle soch luaga varna mera hi bura hota hai mai samajgya hua maine apne dimmag ki nhi suni apne dil ki suni  mai bhool gya tha ki mai kon tha. tum sab log milkar mere sath game khel rahe ho mera majak bana rahe ho, meri sare bate us ladhki to batate ho mujhe aaj samaj mai aaya ki mai kya nhi kar sakta hua mai kisi par bharosa nhi kar sakta hua mai kisi ke sath apni feeling share nhi kar sakta hua, kuch bhi karlu log mujhe se nafrat hi karege 
mai bhalehi unki baat kisi ko nhi batau par vo log kuch ladhki kiyo ke najro mai acha banane ke liye  meri dost ko bhechoge. tum log sab bohot badhe jhoote ho mai pagal ho gya hua tum log ke jhoot sun sun ke  mujhe kuch samaj nhi raha hai ki kispar bharosa karu tum sab ko pata hai ki sach kya par nhi baatana hai. tua mere samne natak karta raha ki mujhe kuch nhi pata hai, tua meri sari baate jake unhe bata raha, tua ne baat diya ki tua kiske sath hai vo ladhki ko bhi pata tha ki mai kya feel karta hua uske liye ho bhi kuch nhi bol rahi hai sab game khel rahe ho.Or fir tum log jake us ladhki yo ko bolte ho ki mai kuch bata nhi.
dekh bhai tune mujhe jo bhi bataya hai tere ex ke baare mujhe mai vo kisi ko nhi batauga kyuki meri unbringing ayesi nhi hai. mai apni dost kabhi nhi bhechta hua.

tua abhi bhi mujhse baat karta hai taki tua unko meri khabar de sake 

maine kabhi tere bare mai kisi ko jugli nhi ki to mere sath hi ayesa kyu hota hai mujhe lagta tha ki mai galat hua par ab nhi tum log neech dogle and jhoodhe ho jo log group mai rehkar dusko ki gossip karte ho jo log apne dosti ko bechte ho.

dekha maine bola tha ki dosti or ladhki mai hamesa ladhki hi jit ti hai  hence proof

good bye farzi dost





*/