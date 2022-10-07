#include<bits/stdc++.h>


#define ll long long int
#define sumUpto(l,r) std::accumulate(a.begin()+l,a.begin()+r,0)
#define ifPresent(a,t) find(a.begin(),a.end(),t)
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define fsort(a) sort(a.begin(),a.end())
#define rsort(a) sort(a.rbegin(),a.rend())
#define printv(a) for(int i:v){cout<<i<<" ";}cout<<'\n';
#define vi vector<int>
#define vf vector<float>
#define vc vector<char>
#define vll vector<ll>
#define vlp vector<pair<ll,ll>>
#define si set<int>
#define sll set<ll>
#define fr(n) for(int pp=0;pp<n;pp++)
#define rfr(n) for(int i=n-1;i>=0;i--)
#define yesOrNo(cond) cout<<((cond)?"YES\n":"NO\n");
#define lcm(a,b) (a*b)/(__gcd(a,b))
#define tc int t;cin>>t;while(t--)
#define maxOfVec(a) *max_element(a.begin(),a.end())
#define minOfVec(a) *min_element(a.begin(),a.end())
#define log2(x) log(x)/log(2)
using namespace std;
const ll mod=pow(10,9)+1;
int main()
{
    int cases;cin>>cases;
    fr(cases)
    {
        double n;cin>>n;
        double sum=0;
        bool b=1;
        fr(n)
        {
            double temp;cin>>temp;
            sum+=temp;
            if(temp==0)
            {
                b=0;
            }
        }
        if(sum==n)
        {
            cout<<0<<endl;
        }
        else if(sum<n)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<sum-n<<endl;
        }
    }
    return 0;
}

