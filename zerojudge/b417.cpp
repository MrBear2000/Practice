#include<bits/stdc++.h>
using namespace std;
struct Query {
	int l,r,block,id;

	inline bool operator < (const Query &q) const {
		if(block==q.block)return r<q.r;
		return block < q.block;
	}
}q[1000005];

int n,m,lim;

int seq[100005];
int cnt[100005];
int howmany[100005];
int cur_ans;
int ans[1000005];
int hans[1000005];

inline void add(int x) {
	int n = ++cnt[x];
	--howmany[n-1];
	++howmany[n];
	cur_ans=max(cur_ans,n);
}

inline void sub(int x) {
	int n = --cnt[x];
	--howmany[n+1];
	++howmany[n];
	if(!howmany[cur_ans]) --cur_ans;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>seq[i+1];
	lim=1+(int)sqrt(n);
	for(int i=0;i<m;i++) {
		cin>>q[i].l>>q[i].r;
		q[i].block=q[i].l/lim;
		q[i].id=i;
	}

	sort(q,q+m);
	for(int i=0,L=1,R=0;i<m;i++) {
		while(R<q[i].r)add(seq[++R]);
		while(L>q[i].l)add(seq[--L]);
		while(R>q[i].r)sub(seq[R--]);
		while(L<q[i].l)sub(seq[L++]);
		ans[q[i].id]=cur_ans;
		hans[q[i].id]=howmany[cur_ans];
	}

	for(int i=0;i<m;i++)cout<<ans[i]<<' '<<hans[i]<<'\n';
	return 0;
}
