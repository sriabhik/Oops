#include<bits/stdc++.h>
using namespace std;
class binary
{
    string s;
    public:
        void read()
        {
            cout << "Enter A Binary String:" << endl;
            cin >> s;
            ones();
        }
        int chk_bin()
        {
            for(int i = 0 ; i < s.size();i++)
            {
                if(s.at(i) != '0' && s.at(i) != '1')
                {   
                    cout << "Invalid Input:" <<endl;
                    return 0;   
                }
                    
            }
            return 1;
        }

        void ones()
        {
            if(chk_bin())//nesting of member function(calling member function without using object )
            {
                string res = "";
                cout <<"Inside" << endl;
                for(int i = 0 ; i < s.size() ; i++)
                {
                    if(s.at(i) == '0')
                        res += "1";
                    else    
                        res += "0";
                }
            cout << "Complement is :: " << res <<endl;
            }
            
        }
};
int main()
{
    binary T;
    T.read();
    return 0;
}