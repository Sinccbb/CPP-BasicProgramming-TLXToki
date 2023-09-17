#include <iostream>
#include <string>
#define ll long long 
#define fast ios::sync_with_stdio();cin.tie();

using namespace std;

ll sq[128][128];

void sepuh(ll r, ll c, ll k, string ccd){
    if(ccd.length() == 1 and ccd[0] == '1'){
        for (int i = r; i < r + k; i++){
            for (int j = c; j < c + k; j++){
                sq[i][j] = 1;
            }
            
        }
    }else{
        if (ccd[1] == '0'){
            sepuh(r,c,k/2,ccd.erase(1,1));
        }else if (ccd[1] == '1')
        {
            sepuh(r,c+ k/2, k/2, ccd.erase(1,1));
        }else if (ccd[1] == '2')
        {
            sepuh(r+ k/2 ,c, k/2, ccd.erase(1,1));
        }else if (ccd[1] == '3')
        {
            sepuh(r+ k/2,c + k/2, k/2, ccd.erase(1,1));
        }
    }
}

int main(){
    fast
    ll n,r,c;
    cin >> n;
    string ans[n];

    for (int i = 0; i < n; i++){
        cin >> ans[i];
    }

    cin >> r >> c;
    ll maks = max(r,c), pper = 1;
    while (pper < maks){
        pper = pper*2;
    }
    for (int i = 0; i < n; i++)
    {
        sepuh(0,0,pper,ans[i]);
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << sq[i][j] << " ";
        }cout << endl;
        
    }
    
    return 0;
    
}
