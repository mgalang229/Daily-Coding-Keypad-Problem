#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array;

void solve() {
	string s;
	getline(cin, s);
	map<string, int> mp;
	mp["abc"]=2, mp["def"]=3;
	mp["ghi"]=4, mp["jkl"]=5;
	mp["mno"]=6, mp["pqrs"]=7;
	mp["tuv"]=8, mp["wxyz"]=9;
	int sum=0;
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	for(int i=0; i<(int)s.size(); ++i) {
		bool ok=0;
		for(auto x : mp)
			if(x.first.find(s[i])<x.first.size()&&s[i]!='\0') {
				ok=1;
				sum+=x.second;
			}
		if(!ok&&s[i]!=' ')
			sum+=1;
	}	
	cout << sum << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	cin.ignore();
	while(t--)
		solve();
}
