#include<bits/stdc++.h>
using namespace std;
void printmap(map<int,string> &m){ // me passed m by & operator , by using this actual map came here not a copy , and even copy operation taked o(logn) time 
    // cout<<m.size()<<endl;

    // for(auto &i:m){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }

  cout<<"\nPrinting Map "<<endl;
  for(auto it=m.begin();it!=m.end();it++){
    cout<<it->first<<" "<<(*it).second<<endl;
  }

}
int main(){
    map<int,string>m;
    m[1]="Hello"; // logn , this not only but all operation in map is of orderd logn
    m[1]="Hello";
    m[3]="are";
    m[2]="How";
    m[4]="You?";
    m[4]="You?";
    m[6];// this is also inserted into map with key =6 and paired value = "" empty string

    m.insert({5,"Pramesh Kumar"});
    m.insert({5,"Pramesh Kumar"});
    m.insert({5,"Pramesh Kumar"});
    m.insert({5,"Pramesh Kumar"});
    printmap(m);

    m.erase(4);// here given a key 
    printmap(m);

    // map<int,string>::iterator it=m.find(1);//  m.find() -> use to find an iterator of key
    auto it=m.find(1);
    m.erase(it);// here given and iterator 
    printmap(m);
    m.clear();
    cout<<"After clear operation "<<endl;
    printmap(m);
return 0;
}

 
// #include<bits/stdc++.h>
// using namespace std;

// void print(map<string,int>&m){
//     for(auto i : m){
//         cout<<i.first<<" "<<i.second<<endl;
//     }cout<<endl;
// }
// int main(){
//     map< string,int >m;
//     m["Cde"]=3;
//     m["Abcd"]=1;
//     m["Bcd"]=2;

//     m["Guys"]+=1;  // these two line inserting key as Guys and by defalut taking value is 0 but on incrementing it's value increasing by 1;
//     m["Guys"]++;

//     m.insert({"Hello",4});

//     // int n;
//     // cin>>n;
//     // for(int i=0;i<n;i++){
//     //     string s;
//     //     cin>>s;
//     //     m[s]++;
//     // }

//     print(m);

     
// return 0;
// }

//  Question on map....

/*
Given N string print unique strings in lexiographical order with their frequency....

N<=10^5
s<=100

*/
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     map<string,int>m;
//     int N;
//     cin>>N;
//     for(int i=0;i<N;i++){
//         string s;cin>>s;
//         m[s]++;
//         // m[s]=m[s]+1;
//     }
//     for(auto i:m){
//         cout<<i.first<<" "<<i.second<<endl;
//     }cout<<endl;
// return 0;
// }

// T(n)=N*log(n)= 10^5*10^2 <= 10^7  ( N for loop and logn for instertion of string)


  // // All opeartion of multimap is simmiler to map but differnce is it can take more than one same key 
// #include<bits/stdc++.h>
// using namespace std;
// void printmap(multimap<int,string> m){
//     cout<<m.size()<<endl;

//     for(auto i:m){
//         cout<<i.first<<" "<<i.second<<endl;
//     }
// }
// int main(){
//     multimap<int,string>m;
//     // m[1]="Hello";  // here yout can't insert like this 

//     m.insert({5,"Prameshm Kumar"});
//     m.insert({5,"Prameshm Kumar"});
//     m.insert({5,"Prameshm Kumar"});
//     m.insert({5,"Prameshm Kumar"});
//     printmap(m);
// return 0;
// }


// UNORDERD MAP
// nearly all time complexity will be of o(1);
/*

*/

// #include<bits/stdc++.h>
// using namespace std;
// void printmap(unordered_map<int,string>&m){
//     for(auto i:m){
//         cout<<i.first<<" "<<i.second<<endl;
//     }cout<<endl;
// }
// int main(){
//     unordered_map<int,string>m;
//     m[1]="pramesh";
//     m[5]="pramesh kumar";
//     m[5]="pramesh";
//     m[2]="pramesh";
//     m[19]="pramesh";
//     printmap(m);
// return 0;
// }