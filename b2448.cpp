#include <bits/stdc++.h>

#define fastios std::ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define dbg(x) cout << #x << " = " << x << endl
#define endl "\n"
#define ll long long 
#define pb push_back
#define f first
#define s second

using namespace std;

int main()
{
    fastios
    
    int N, M; cin >> N >> M;

    int *arr = new int[N];
    map<int, int> pos;
    
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        pos[arr[i]] = i;
    }

    int distancia = 0;
    int posAtual = 0;

    for (int i = 0; i < M; i++)
    {
        int proximo; cin >> proximo;

        int posProximo = pos[proximo];

        distancia += abs(posAtual - posProximo);  
        
        posAtual = posProximo;
    }

    cout << distancia << endl;

    return 0;
}
