#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define ll long long

ll gcd(ll a,ll b) {
	return b?gcd(a%b,a):a;
}

typedef struct fraction {
	ll a,b;
}Fraction;

Fraction simplify(Fraction f) {
	if(f.a==0)return (Fraction){0,1};
	ll u=gcd(f.a,f.b);
	f.a/=u;
	f.b/=u;
	return f;
}

Fraction add(Fraction a,Fraction b) {
	Fraction res;
	res.b=a.b*b.b;
	res.a=a.a*b.b+a.b*b.a;
	res=simplify(res);
	return res;
}

Fraction mul(Fraction a,Fraction b) {
	Fraction u,v;
	u.a=a.a;
	v.b=a.b;
	v.a=b.a;
	u.b=b.b;
	u=simplify(u);
	v=simplify(v);
	Fraction res={u.a*v.a,u.b*v.b};
	return res;
}

void printFrac(Fraction f) {
	printf("%lld/%lld\n",f.a,f.b);
}

int main() {
	int n;
	Fraction *ans=malloc(20*sizeof(Fraction));
	Fraction *tmp=malloc(20*sizeof(Fraction));
	scanf("%d",&n);
	int i,j,k;
	for(i=0;i<20;i++) {
		ans[i].a=0;
		ans[i].b=1;
		tmp[i]=ans[i];
	}
	ans[0].a=1;
	for(i=1;i<=n;i++) {
		for(j=0;j<i;j++) {
			int a,b;
			scanf("%d%d",&a,&b);
			Fraction l={a,a+b},r={b,a+b};
			tmp[j]=add(tmp[j],mul(ans[j],l));
			tmp[j+1]=add(tmp[j+1],mul(ans[j],r));
		}
		for(k=0;k<n;k++) {
			ans[k].a=0;
			ans[k].b=1;
		}
		Fraction *t=ans;
		ans=tmp;
		tmp=t;
	}
	for(i=0;i<n;i++)
		printFrac(ans[i]);
	return 0;
}

