#include<bits/stdc++.h>
using namespace std;


vector<string> permutaion(string s,int l,int r){
	vector<string> ans;

	if(l==r){
		ans.push_back(s);
		cout<<s<<endl;
	}
	else{
		for(int i=l;i<=r;i++){
			// swapping
			swap(s[i],s[l]);
			// recursion
			permutaion(s,l+1,r);
			// backtracking
			swap(s[i],s[l]);
		}
	}

	return ans;
}
int main(){
	string s="RAM";
	// cin>>s;
	vector<string> result= permutaion(s,0,s.size()-1);
	for(auto x:result){
		cout<<x<<endl;
	}
	// cout<<"Hello"<<endl;

return 0;	
}