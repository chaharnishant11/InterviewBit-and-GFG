#include <bits/stdc++.h>
using namespace std;
void fractionToDecimal(int numr, int denr)
{
    string res;
    map <int, int> mp;
    mp.clear();

    int rem = numr%denr;

    while ( (rem!=0) && (mp.find(rem) == mp.end()) ){
        mp[rem] = res.length();
        rem = rem*10;
        int res_part = rem / denr;
        res += to_string(res_part);
        rem = rem % denr;
    }
     (rem == 0)? cout<<(double)numr/denr<<endl : cout<<(numr/denr)<<"." <<(res.substr(0,mp[rem]))<<"("<<res.substr(mp[rem])<<")"<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--){

        int numr, denr;
        cin>>numr;
        cin>>denr;
        fractionToDecimal(numr, denr);

    }
    return 0;
}
