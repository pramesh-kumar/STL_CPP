#include<iostream>
using namespace std;

int main(){
	pair<int,string>p1;
	pair<int,string>p2(20,"Pramesh");

	pair<int,string>p3(p2);
	pair<int,string>p4=p2;


	cout<<"Pair 1"<<endl;
	// p1=make_pair(18,"RAM");
	p1={17,"Raju"};
	cout<<p1.first<<" "<<p1.second<<endl;

	cout<<"Pair 2"<<endl;
	cout<<p2.first<<" "<<p2.second<<endl;

	cout<<"Pair 3"<<endl;
	cout<<p3.first<<" "<<p3.second<<endl;

	cout<<"Pair 4"<<endl;
	cout<<p4.first<<" "<<p4.second<<endl;


	swap(p1,p4);

	cout<<"After swap "<<endl;
	cout<<p1.first<<" "<<p1.second<<endl;


return 0;	
}