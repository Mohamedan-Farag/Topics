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

// we use set to remove the duplicate elements and then we  get the number of different colors
  
  set<char> st;

   for(int i = 0; i < 4; i++){

        char c;      cin>>c;

        st.insert(c);

      }

// if size of set is 1 then all the characters are the same so we dont need to change any of them//

// we see the number of different colors and minus it by one (why ? ----> because we need  minimum number of moves to make all 4pixels have the same color  //

 cout<<sz(st)-1<<endl;

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
