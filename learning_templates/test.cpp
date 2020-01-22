#include<iostream>
#include<stack>
#include<queue>
#include<vector>
#include<set>
#include<map>
#include<utility>
#include<algorithm>
#include<numeric>
#include<math.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define loop(i,n) for(int i=0;i<n;i++)
#define longloop(i,n) for(long long int i=0;i<n;i++)
typedef long long int ll;
typedef float ft;
ll mod=1000000007;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int a,b,c,x;
  cin>>a>>b>>c;
  vector<int> V;
  set<int> res;
  set<int>::iterator it;
  int sum=a+b+c;
  cout<<sum<<" "<<endl;
  int flag=0;
  while(sum--)
  {
    cin>>x;
    V.pb(x);
  }
  for(int i=0;i<sum;i++)
  cout<<V[i]<<" ";
  sort(V.begin(),V.end());
  for(int i=0;i<sum;i++)
  cout<<V[i]<<" ";
  cout<<endl;
  for(ll i=1;i<sum;i++)
  {
    if(V[i]==V[i-1])
    res.insert(V[i]);
  }
  cout<<V.size()<<endl;
  cout<<res.size()<<endl;
  for(it=res.begin();it!=res.end();it++)
    cout<<*it<<endl;
}
