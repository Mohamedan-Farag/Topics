/** حَسْبِيَ اللَّهُ لا إِلَـهَ إِلاَّ هُوَ عَلَيْهِ تَوَكَّلْتُ وَهُوَ رَبُّ الْعَرْشِ الْعَظِيمِ **/
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long 
#define sz(x) int(x.size())
#define PI acos(-1)
#define all(x) x.begin(),x.end()
#define sz(x) int(x.size())
#define clr(v, d) memset(v, d, sizeof(v))
#define endl "\n"
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
typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
const ll aka =1e5 + 5;
const long long OO =(ll)1e18;
//int dx[8] = {0,0,1,-1,1,-1,1,-1};
//nt dy[8] = {1,-1,0,0,1,-1,-1,1};
/*-------------------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------*/
//Sloution -> 
struct Nod{
 int num;
};
const int N=2e5+1;
int n;
Nod s[N];

struct segmentTree
{
    int sz; vector<Nod>seg; Nod ret={0};
    segmentTree(int n)
    {
        sz=1;
        while(sz<n)sz*=2;
        seg.resize(2*sz);
    }
///////////////////////////////////////////////////////////////////////
    Nod get(int idx){
      return query(idx,idx);
    }

    Nod query(int l,int r){
      return query(l,r,0,sz-1,1);
    }

    void update(int idx,int val){
      update(0,sz-1,1,idx,val);
    }

///////////////////////////////////////////////////////////////////////
        Nod merge(Nod a,Nod b)
    {
        Nod res;
        res.num=max(a.num,b.num);
        return res;
        
    }

        Nod sum(Nod a,Nod b){
      Nod res;
      res.num=a.num+b.num;
      return res;
        }
    
    void build(int l,int r,int node)
    {
        if(l==r){
          if(l<n){
            seg[node]={s[l].num};
          }
          else {
            seg[node]={ret};
          }
            return;
        }
        int mid=(l+r)/2;
        build(l,mid,2*node);
        build(mid+1,r,2*node+1);
        seg[node]=merge(seg[2*node],seg[2*node+1]);
        return;
    }
    void update(int l,int r,int node,int idx,int val)
    {
        if(l==r)
        {
            seg[node]=sum(seg[node],{val});
            return;
        }
        int mid=(l+r)/2;
        if(mid<idx)
        {
            update(mid+1,r,2*node+1,idx,val);
        }
        else
        {
            update(l,mid,2*node,idx,val);
        }
        seg[node]=merge(seg[2*node],seg[2*node+1]);
    }
    Nod query(int lx,int rx,int l,int r,int node)
    {
        if(l>rx||r<lx)
        {
            return ret;
        }
        if(l>=lx&&r<=rx)
        {
            return seg[node];
        }
        int mid=(l+r)/2;
        return merge(query(lx,rx,l,mid,2*node),query(lx,rx,mid+1,r,2*node+1));
    }
};

void solve(){

cin >> n;
ll q; cin >> q;
for(int i=0;i<n;i++){
  cin >> s[i].num;
}

segmentTree st(n);
st.build(0,n-1,1);

while(q--){
 int t; cin >> t;
 if(t==2){
  cout<<st.query(0,n-1).num<<endl;
 }
 else {
  int idx,val; cin >> idx >> val;
  st.update(idx,val);
 }
}

for(int i=0;i<n;i++){
  cout<<st.query(i,i).num<<" ";
}

}

signed main(){
  M7MDAN_FRAG();cout << fixed << setprecision(0);
//freopen("easy.in", "r", stdin); freopen("easy.out", "w", stdout);
	int t=1; 
//cin>>t;
	while(t--){
		solve(); 
	}
}