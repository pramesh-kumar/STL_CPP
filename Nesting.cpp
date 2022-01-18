// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     pair<int,int>p1;
//     pair<int,int>p2;
//     p1={1,4};
//     p2={1,3};
//     cout<<(p1>p2)<<endl; // first key then value will be compared

// return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     map<pair<string,string>,vector<int>>m;
//     int N;
//     cin>>N;
//     for(int i=0;i<N;i++){
//             string s1,s2;
//             int n;
//             cin>>s1>>s2>>n;
     
//         for(int j=0;j<n;j++){
//             int x;
//             cin>>x;
//             m[{s1,s2}].push_back(x);
//         }

//         for(auto &p:m){
//             auto & fullname=p.first;
//             auto &list=p.second;
//             cout<<fullname.first<<" "<<fullname.second<<" ";
            
//             cout<<list.size()<<endl;
            
//             for(auto &&element : list){
//                 cout<<element<<" ";
//             }
//             cout<<endl;
//         }
//     }
// return 0;
// }


// Monk and his class 


#include<bits/stdc++.h>
using namespace std;
int main(){

	int n;
	cin>>n;
    map<int,set<string>>map_marks;
    for(int i=0;i<n;i++){
        string name;
        int mark;
        cin>>name>>mark;
        // set<string>s;
        map_marks[mark].insert(name);
    }
    auto curr_it= --map_marks.end();
    while(true){
        auto &student=(*curr_it).second;
        auto &marks=(*curr_it).first;
        for(auto &i:student){
            cout<<i<<" "<<marks<<endl;
        }
        if(curr_it==map_marks.begin()){
            break;
        }
        curr_it--;
    }
	return 0;
}