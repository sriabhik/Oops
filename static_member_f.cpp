#include<bits/stdc++.h>
using namespace std;

class test{
    static int count ;
    int code;
    public:
        void setcode(){
            code = ++count;
        }
        static void showcount(){
            cout << "Count: " << count << endl;
        }
        void showcode(){
            cout <<"Object Count ::" << code <<endl;
        }

};
int test :: count;
int main(){
    test t1,t2,t3;
    t1.setcode();
    test :: showcount();//static member function call using class name
    t2.setcode();
    test::showcount();
    t3.setcode();
    t1.showcode();
    t2.showcode();
    t3.showcode();
    return 0;

}