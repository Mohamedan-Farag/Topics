/** حَسْبِيَ اللَّهُ لا إِلَـهَ إِلاَّ هُوَ عَلَيْهِ تَوَكَّلْتُ وَهُوَ رَبُّ الْعَرْشِ الْعَظِيمِ **/
#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define ll long long 
#define sz(x) int(x.size())
#define PI acos(-1)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define Num_of_Digits(n) ((int)log10(n) + 1)
#define rep(i, v)		for(int i=0;i<sz(v);++i)
#define lp(i, n)		for(int i=0;i<(int)(n);++i)
#define GCin(a)	 getline(cin,a);
#define clr(v, d) memset(v, d, sizeof(v))
#define endl "\n"
#define c_2  300000000
#define vl vector<ll>
#define vi vector<int>
#define pb push_back
#define MOD ((ll) 1e9 + 7)
void M7MDAN_FRAG(){
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin),freopen("output.txt", "w", stdout);
  #endif
}

///*-*-*-*-*-*-*-*-*-*-*-*-*-*-*>> # solution # <<*-*-*-*-*-*-*-*-*-*-*-*-*-*-*///

void solve(){

ll n; cin>>n;

  vl v(n);    ll count=0;

for( int i = 0  ; i < n ; i++){
  
        cin>>v[i];
  
// here we count the number of 1's in the array to know how many times we need to kill  2 monsters in the same time //

      if(v[i]==1)count++;

}
  
// here we divide the count by 2  to know minimum number of times we need to kill all monsters have 1 health //

 ll time_to_1=count/2;

// here we see the minimum time to kill all monster (any monster have health more than 1 we can kill it in one move) //

 ll min_time=n-time_to_1;
  
 
cout<<min_time<<endl;

}
int main(){
  cout << fixed << setprecision(5);
	
  M7MDAN_FRAG();
//freopen("easy.in", "r", stdin); freopen("easy.out", "w", stdout);
	int t=1; 
// tast case input 
  //
cin>>t;

	while(t--){

		solve(); 
   
	}
}
