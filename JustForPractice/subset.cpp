/**
 * Output power set of a sorted array.
 */
#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>>res;
void subset(vector<int> &seq, int depth) {
	static vector<int>ans;
	if(depth==0)ans.resize(0);
	else if(depth==seq.size()) {
		res.push_back(ans);
		return;
	}
	ans.push_back(seq[depth]);
	subset(seq, depth + 1);
	ans.pop_back();
	subset(seq, depth + 1);
}

int main() {
	vector<int>v={1,2,5,7,8,9};
	res.resize(0);
	subset(v, 0);
	for(auto list:res) {
		cout<<'[';
		for(auto n:list) {
			cout<<n<<' ';
		}
		cout<<"]\n";
	}

	return 0;
}
