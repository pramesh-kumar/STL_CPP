// #include<bits/stdc++.h>
// using namespace std;
// void print(set<int>&s){
//     for(auto &i: s){
//         cout<<i<<" ";
//     }cout<<endl;
// }
// int main(){
//     set<int>s;
//     s.insert(1);
//     s.insert(6);
//     s.insert(7);
//     s.insert(9);
//     s.insert(10);
//     s.insert(2);   

//     print(s);

//     set<int>:: iterator it;
//     it=s.find(2);
//     if(it!=s.end()){
//         s.erase(it);
//     }

//     print(s);
// return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// void print(set<string>&s){
//     for(auto &i: s){
//         cout<<i<<endl;
//     }cout<<endl;
// }
// int main(){
//     set<string>s;
//     s.insert("Aman");
//     s.insert("pk");
//     s.insert("Ajay");
//     s.insert("ravi");

//     print(s);

//     set<string>:: iterator it;
//     it=s.find("ravi");
//     if(it!=s.end()){
//         s.erase(it);
//     }

//     print(s);
// return 0;
// }



// set and multiset both have same time complexity O(logn) 

// Multiset ....................................................................................................................

#include<bits/stdc++.h>
using namespace std;
void print(multiset<int>&s){
    for(auto &i: s){
        cout<<i<<" ";
    }cout<<endl;
}
int main(){
    multiset<int>s;
    s.insert(1);
    s.insert(6);
    s.insert(7);
    s.insert(9);
    s.insert(10);
    s.insert(2);
    s.insert(2);
    s.insert(2);

    s.erase(2); // By this all key have value 2 will be deleted 
    print(s);

    multiset<int>:: iterator it;
    it=s.find(2);
    cout<<*it<<endl;
    if(it!=s.end()){
        s.erase(it);  // By using iterator Only that key will be deleted where it is pointing 
    }

    print(s);
return 0;
}


/*
Given N string and Q quries .
In each queries you are given a string  print YES if present and NO if absent
*/
// Que.  me  sirf check karne ki bat ki gayi hai so just use unordered_set   bcz it  has lesser time complexity O(1)

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int N;
//     cin>>N;
//     unordered_set<string>s;
//     for(int i=0;i<N;i++){
//         string str;
//         cin>>str;
//         s.insert(str);
//     }
//     int q;
//     cin>>q;
//     while(q--){
//         string str;
//         cin>>str;
//         if(s.find(str)!=s.end()){
//             cout<<"YES"<<endl;
//         }
//         else{
//             cout<<"No"<<endl;
//         }
//     }
// return 0;
// }



// Monk and candies question on hackerearth.



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int n,k;
// 		cin>>n>>k;
// 		multiset<long long int>s;
// 		for(int i=0;i<n;i++){
//             long long x;
//             cin>>x;
// 			s.insert(x);
// 		}

//         long long int candies=0;
//         while(k--){
//             auto it=--s.end();
//             long long int x=(*it);
//             candies+=x;
//             s.erase(it);
//             s.insert(x/2);
//         }

//         cout<<candies<<endl;
// 	}
// 	return 0;
// }





/*
#include<bits/stdc++.h>
using namespace std;
void print(set<int>&s){
    for(auto &i: s){
        cout<<i<<" ";
    }cout<<endl;
}
int main(){
    set<int>s;
    s.insert(1);
    s.insert(6);
    s.insert(7);
    s.insert(9);
    s.insert(10);
    s.insert(2);


    print(s);

    auto it=s.find(12);

    if(it==s.end()){
        cout<<"Not Present"<<endl;
    }
    else{
        cout<<(*it)<<" Present "<<endl;
    }

    // print(s);
return 0;
}

*/

