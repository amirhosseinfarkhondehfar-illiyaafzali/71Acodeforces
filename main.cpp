#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    string s[a], sss[a];
    ;
    int ii[a];
    for (int i = 0; i < a; i++)
    {   
        string ss;
        cin >> ss;
       
        if (ss.size()<=10)
        {
            s[i] = ss;
            ii[i]=0;
            sss[i]="";
        }
        else
        {
            int c = ss.size() - 1;
            s[i] = ss[0];
            ii[i] = ss.size() - 2;
            sss[i] = ss[c];
        }
    }
    for (int i = 0; i < a; i++)
    {
        if(ii[i]==0)
            cout << s[i] <<endl;
        else
            cout << s[i] <<ii[i]<<sss[i]<<endl;
    }
}