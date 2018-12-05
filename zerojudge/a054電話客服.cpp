#include<iostream>
using namespace std;
int main()
{
    int x,s;
    char str[9];
    while(cin>>str[0])
    {
        x=(str[0]-48)*8;
        for(int i=1;i<8;i++)
            {
                cin>>str[i];
                x+=(str[i]-48)*(8-i);
            }
        x%=10;
        cin>>str[8];
        s=58-str[8];
        for(int t=1,a,b;t<=3;t++)
        {
            a=s-x;
            b=(a+t+8)%10;
            if(a==3&&b>5)break;
            cout<<t<<b<<endl;
        }
    }
}
