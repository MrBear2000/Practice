#include<iostream>

using namespace std;
int main(){
    long int N,M,sum;
    while(cin>>N>>M){
        int mp[N];sum=0;
        for(int i=0;i<N;i++){
            cin>>mp[i];
            sum+=mp[i];
        }
        if(sum<M)cout<<"GGGGGZ"<<endl;
        else{
            int x,y=100000000;
        for(int i=0;i<N;i++){
            x=i;
            sum=0;
        while(sum<M&&x<N){
            sum+=mp[x];
            x++;
        }
        if(sum>=M&&x-i<y)y=x-i;
        }
        cout<<y<<endl;
        }
    }
}
