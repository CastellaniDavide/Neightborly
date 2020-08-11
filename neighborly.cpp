#include <bits/stdc++.h>

using namespace std;

int dispute(string N, string S)
{
    // insert your code here
    int inizio=0, fine=N.length()-1, res=0;

    while(inizio<fine)
    {
   // cout <<"INI "<<inizio<<endl;
        //cout <<"FINE "<<fine<<endl;
        //cout<<N.substr(inizio, fine)<<endl;
        size_t found = S.find(N.substr(inizio, fine));
        if(found != string::npos) //found
        {
            //cout<<"FF"<<endl;
            inizio=fine;
            fine = N.length()-1;
            res++;
        }
        else
        {
            fine--;
        }
        /*cout <<"INI "<<inizio<<endl;
        cout <<"FINE "<<fine<<endl;
        cout<<endl;*/
    }
    return res;
}
/*@dd10  v1cin*
0  v@d1ci*n*/
string N, S;

int main()
{
    getline(cin, N);
    getline(cin, S);

    cout << dispute(N, S) << endl;
    return 0;
}
