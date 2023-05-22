#include<bits/stdc++.h>
using namespace std;
int main()
{
    int age,year,month,day;
    cin>>age;
    year=age/365;
    month=(age%365)/30;
    day=(age%365)%30;
    cout<<year<<" years"<<endl;
    cout<<month<<" months"<<endl;
    cout<<day<<" days"<<endl;
    return 0;
}
