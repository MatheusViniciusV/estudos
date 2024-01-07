#include <bits/stdc++.h>

#define fastios std::ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define dbg(x) cout << #x << " = " << x << endl
#define ll long long 
#define endl "\n"
#define pb push_back
#define f first
#define s second

using namespace std;

int main()
{
    fastios
    
    int N, M;
    cin >> N >> M;
    
    vector<int> pinos(N);
    
    for(int &pino : pinos)
    {
        cin >> pino;
    }
    
    int soma{0};
    
    for(auto it = pinos.begin(); it <= pinos.end()-1; ++it)
    {
        int val = M - *it;
        
        *it += val;
        if(it != pinos.end()) *(it + 1) += val;
        
        soma += abs(val);
    }
    
    cout << soma << endl;

    return 0;
}
