#include<iostream>
using namespace std;

int main(){
    int a,b,c,d,e,f,A,A1,x[4],y[4],Dx,Dy;
    while(cin>>a>>b>>c>>d>>e>>f){
        A=A1=a*e-b*d;
        if(!A){
            if(a*f==d*c)cout<<"Too many";
            else cout<<"No answer";
        }
        else{
        Dx=c*e-b*f;
        Dy=a*f-c*d;
        cout<<"x=";
        if(A*Dx<0)cout<<"-";
        if(A<0)A*=-1;
        if(Dx<0)Dx*=-1;
        for(int i=0;i<4;i++){
            x[i]=Dx/A;
            Dx%=A;
            Dx*=10;
        }
        if(x[3]>=5)x[2]+=1;
        cout<<x[0]<<"."<<x[1]<<x[2]<<endl<<"y=";
        A=A1;
        if(A*Dy<0)cout<<"-";
        if(A<0)A*=-1;
        if(Dy<0)Dy*=-1;
        for(int i=0;i<4;i++){
            y[i]=Dy/A;
            Dy%=A;
            Dy*=10;
        }
       if(y[3]>=5)y[2]+=1;
        cout<<y[0]<<"."<<y[1]<<y[2]<<endl;
        }
    }
}
