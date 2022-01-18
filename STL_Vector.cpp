// #include<bits/stdc++.h>

// using namespace std;
// int main()
// {
//     vector<int> vec;
//     for (int  i = 1; i <=5; i++)
//         vec.push_back(i);
// auto i=vec.begin();
// cout<<" "<<*i<<endl;
//     for (auto i = vec.begin(); i <vec.end();i++)
//         cout<<" "<<*i;
//     cout<<endl;

//     cout<<"Size is "<<vec.size()<<endl;
//     cout<<"Capacity is "<<vec.capacity()<<endl;
//     cout<<"Max_Size is "<<vec.max_size()<<endl;

//     // vec.resize(10);
//     // cout<<"Size is "<<vec.size()<<endl;
//     // cout<<"CApacity is "<<vec.capacity()<<endl;

// if(vec.empty()==true)
// cout<<"This vector is Empty"<<endl;
// else
// cout<<"This vector is not Empty"<<endl;

//     vec.resize(3);
// vec.shrink_to_fit();
//     cout<<"Size is "<<vec.size()<<endl;
// for (auto i = vec.begin(); i < vec.end(); i++)
//     cout<<" "<<*i;
// cout<<endl;
// return 0;
// }

// #include<bits/stdc++.h>

// using namespace std;
// void display(vector<int> &v)
// {
//     for (int i = 0; i <v.size() ; i++)
//     cout<<v.at(i)<<" ";
//     cout<<endl;
// }
// int main()
// {
//     vector<int> vec;
//     int size;
//     cout<<"Enter size of vector "<<endl;
//     cin>>size;
//     for (int  i = 0; i < size; i++)
//     {
//         int a;
//         cout<<"Enter a number to insert into Vector..."<<endl;
//         cin>>a;
//         vec.push_back(a);
//     }
//     // for (int i = 0; i <vec.size() ; i++)
//     // cout<<" "<<vec.at(i);
//     // cout<<endl;

//     display(vec);
// return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> vec;

//     vec.assign(5, 20);
//     for (int i = 0; i < vec.size(); i++)
//         cout << " " << vec[i];
//     cout << endl;

//  cout<<"After push_back ELements of vector :"<<endl;
//     vec.push_back(40);
//     cout << "Current Size of Vector is " << vec.size() << endl;
//     for (int i = 0; i < vec.size(); i++)
//         cout << " " << vec[i];
//     cout << endl;

//  cout<<"After pop_back ELements of vector :"<<endl;
//     vec.pop_back();
//     for (int i = 0; i < vec.size(); i++)
//         cout << " " << vec[i];
//     cout << endl;

//  cout<<"After vec.insert() ELements of vector :"<<endl;

//     vec.insert(vec.begin(), 100);
//     for (int i = 0; i < vec.size(); i++)
//         cout << " " << vec[i];
//     cout << endl;

//     vec.insert(vec.end(), 0);
//     for (int i = 0; i < vec.size(); i++)
//         cout << " " << vec[i];
//     cout << endl;

//     vec.emplace(vec.begin(), 2000);
//     for (int i = 0; i < vec.size(); i++)
//         cout << " " << vec[i];
//     cout << endl;

//     vec.emplace_back(300);
//     for (int i = 0; i < vec.size(); i++)
//         cout << " " << vec[i];
//     cout << endl;


//  cout<<"After vec.erase() ELements of vector :"<<endl;
//     vec.erase(vec.begin());
//     for (int i = 0; i < vec.size(); i++)
//         cout << " " << vec[i];
//     cout << endl;


//  cout<<"After vec.clear() ELements of vector :"<<endl;
//     vec.clear();
//     for (int i = 0; i < vec.size(); i++)
//         cout << " " << vec[i];
//     cout << endl;

//  cout<<"We are going to swap to the ELements of Two vector :"<<endl;

//     vector<int> a;
//     a.push_back(1);
//     a.push_back(2);

//     vector<int> b;
//     b.push_back(3);
//     b.push_back(4);
//     cout << "Before swap" << endl;
//     cout << "ELements of first vector :";
//     for (int i = 0; i < a.size(); i++)
//         cout << " " << a[i];
//     cout << endl;
//     cout << "ELements of first vector :";
//     for (int i = 0; i < b.size(); i++)
//         cout << " " << b[i];
//     cout << endl;

//     a.swap(b);
//     cout << "After  swap" << endl;
//     cout << "ELements of first vector :";
//     for (int i = 0; i < a.size(); i++)
//         cout << " " << a[i];
//     cout << endl;
//     cout << "ELements of first vector :";
//     for (int i = 0; i < b.size(); i++)
//         cout << " " << b[i];
//     cout << endl;
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// void ptintvec(vector<int>& vec){  // by using & , here actual vector is passed not copy
//     for(int i=0;i<vec.size();i++){
//         cout<<vec[i]<<" ";
//     }cout<<endl;
//     vec.push_back(10);
// }
// int main(){
//     vector<int>v;
//     int n;
//     cin>>n;

//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         v.push_back(x);
//     }
//     ptintvec(v);
//     ptintvec(v);
//     cout<<v[6]<<endl;

// return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// void printvec(vector<int> vec){
//     // vector<int>::iterator it;
//     // auto it=vec.begin();
//     // for(auto it=vec.begin();it!=vec.end();it++){
//     //     cout<<(*it)<<" ";
//     // }cout<<endl;
//     for(auto val:vec){
//         cout<<val<<" ";
//     }cout<<endl;
// }
// int main(){
//     vector<int>v;
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         v.push_back(x);
//     }
//     printvec(v);
//     cout<<v.front()<<endl;
//     cout<<v.back()<<endl;
//     v.clear();
//     printvec(v);
//     v.assign(5,10);
//     printvec(v);

// return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     array<int,5>a;
//     for(int i=0;i<5;i++){
//         cin>>a[i];
//     }
//     // for(int i=0;i<5;i++){
//     //     cout<<a[i]<<" ";
//     // }cout<<endl;

//     // for(auto i:a){
//     //     cout<<i<<" ";
//     // }cout<<endl;

//     array<int,5>::iterator it=a.begin();
//     for(it=a.begin();it!=a.end();it++){
//         cout<<(*it)<<" ";
//     }cout<<endl;

//     array<int,10>b;
//     b.fill(10);
//     for(int i:b){
//         cout<<i<<" ";
//     }cout<<endl;

// return 0;
// }



// C++ program to demonstrate working of fill()
// #include <bits/stdc++.h>
// using namespace std;
  
// int main()
// {
//     int arr[10];
//     // array<int ,10>arr; //here below function not work
  
//     // calling fill to initialize values in the
//     // range to 4
//     fill(arr, arr + 10, 4);
  
//     for (int i = 0; i < 10; i++)
//         cout << arr[i] << " ";
  
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// void printvec(vector<int>v){
//     for(auto i:v){
//         cout<<i<<" ";
//     }cout<<endl;
// }

// int main(){
//     vector<int>v(5,10);
//     // vector<int>vec(v);
//     // vector<int>&vec(v);
//     // vector<int>&vec=v;
//     vector<int>vec=v;
//     vec.push_back(1);
//     printvec(v);
//     printvec(vec);
// return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// void printvec(vector<int>v){
//     for(auto i:v){
//         cout<<i<<" ";
//     }cout<<endl;
// }
// void printreverse(vector<int>v){
//     for(auto it=v.rbegin();it!=v.rend();it++){
//         cout<<*it<<" ";
//     }cout<<endl;
// }
// int main(){
//     int n;cin>>n;
//     vector<int>v;
//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         v.push_back(x);
//     }


//     printvec(v);
//     printreverse(v);

// return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// void display(vector<int>v){
//     for(auto i:v){
//         cout<<i<<" ";
//     }cout<<endl;
// }
// int main(){
//     vector<int>v1(5,4);
//     vector<int>v2(10,5);
//     display(v1);
//     display(v2);
//     v1.swap(v2);
//     display(v1);
//     display(v2);

//     v2.clear();
//     display(v2);

//     v2.push_back(10);
//     v2.insert(v2.begin()+1,5,4);
//     display(v2);
// return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     vector<string> v;
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         string s;
//         cin>>s;
//         v.push_back(s);
//     }
//     for(auto i:v){
//         cout<<i<<" ";
//     }
//     cout<<endl;
// return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//         vector<pair<int,int>>v;
//         int n;cin>>n;
//         for(int i=0;i<n;i++){
//             int x,y;
//             cin>>x>>y;
//             v.push_back({x,y});
//         }

//         // for(auto i:v){
//         //     cout<<i.first<<" "<<i.second<<endl;
//         // }

//         vector<pair<int,int>>::iterator it;
//         for(it=v.begin();it!=v.end();it++){
//             cout<<it->first<<" "<<it->second<<endl;
//         }cout<<endl;
// return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//         vector<pair<int,int>>v={{1,2},{2,3},{3,4}};
//         // for(int i=0;i<v.size();i++){
//         //     cout<<v[i].first<<" "<<v[i].second<<endl;
//         // }cout<<endl;
//         for(auto i:v){
//             cout<<i.first<<" "<<i.second<<endl;
//         }cout<<endl;

// return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// void printvec(vector<int>v){
//     for(auto i:v){
//         cout<<i<<" ";
//     }cout<<endl;
// }
// int main(){
//     int N;
//     cin>>N;

//     vector<int>v[N]; // array of vector ( vector to hai but row fix hai)

//     for(int i=0;i<N;i++){
//         int n;
//         cin>>n; // size of vector lentgh
//         for(int j=0;j<n;j++){
//             int x;
//             cin>>x;
//             v[i].push_back(x);
//         }
//     }
//     for(int i=0;i<N;i++){
//         printvec(v[i]);
//     }
// return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// void printvec(vector<int>v){
//     for(auto i:v){
//         cout<<i<<" ";
//     }cout<<endl;
// }
// int main(){
//     vector<vector<int>>v; // vector of vector ( vector to hai aur iska row v dyanamic hai)
//     int N;
//     cin>>N;
//     for(int i=0;i<N;i++){
//         int n;
//         cin>>n;
//         vector<int>temp;
//         // v.push_back(vector<int> ()); not recommanded never do this confusion

//         for(int j=0;j<n;j++){
//             int x;cin>>x;
//             temp.push_back(x);
//             // v[i].push_back(x);

//         }
//         v.push_back(temp);
//     }
//     // v[0].push_back(66);// first vector me pushabck
//     // v[3].push_back(32); //fourth vector me pushback
//     for(int i=0;i<N;i++){
//         printvec(v[i]);
//     }
// return 0;
// }






// SOME ALGORITHM IN VECTOR 


// #include<bits/stdc++.h>
// using namespace std;
// void print(vector<int>& v){
//     for(int i:v){
//         cout<<i<<" ";
//     }cout<<endl;

// }
// int main(){
//     vector<int>v={1,2,5,6,4,3};

//     // for(int i=0;i<v.size();i++){
//     //     cout<<v[i]<<" ";
//     // }cout<<endl;
//     print(v);

//     // cout<<v.front()<<endl;
//     // cout<<v.back()<<endl;

//     v.push_back(10);
//     v.push_back(10);
//     v.push_back(10);
//     v.push_back(10);
//     v.push_back(10);
//     v.push_back(11);
//     v.push_back(12);


//     sort(v.begin(),v.end());// Ascending order
//     // sort(v.begin(),v.end(),greater<int>());// Desending order
//     print(v);

//     // bool flag = binary_search(v.begin(),v.end(),5);

//     // if(flag==true){
//     //     cout<<"Yes Present"<<endl;
//     // }
//     // else{
//     //     cout<<"Not Present"<<endl;
//     // }



//     // print(v);

//     // vector<int> ::iterator it1 = upper_bound(v.begin(),v.end(),10);
//     // cout<<"upper_bound of 10 is : "<<(*it1)<<endl;

//     // auto it2 = lower_bound(v.begin(),v.end(),10);
//     // cout<<"lower_bound of 10 is : "<<(*(it2))<<endl;
//     // // auto it3= it1-it2;
//     // // cout<<"10 is present "<<(it3)<<" times in my vector"<<endl;
//     // cout<<"10 is present "<<(it1-it2)<<" times in my vector"<<endl;
    

//     // v.pop_back();
//     // v.pop_back();

//     print(v);

//     // vector<int > :: iterator  i =v.end();

//     auto it= v.end(); //  this iterator  will point to memory after last element of vector it will hold 0  in vector but in set/map/ it will show core dump

//     cout<<*--it<<endl;  // no priblem bcz Unary operator have Right to Left Associativity

// return 0;
// }


// Reduced array ......
// hamne comperator dena v sikh liya ....
/*
i/p= 10,16,7,14,5,3,12,9
o/p= 4,7,2,6,1,0,5,3
*/

#include<bits/stdc++.h>
using namespace std;
bool mycompare(pair<int,int>p1,pair<int,int>p2){
        return p1.first<p2.first;
}
int main(){
    int a[]={10,16,7,14,5,3,12,9};
    int n=sizeof(a)/sizeof(a[0]);

    vector<pair<int,int>>v;

    for(int i=0;i<n;i++){
        v.push_back({a[i],i});
    }

    // cout<<"output"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }cout<<endl;

    sort(v.begin(),v.end(),mycompare);

    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }cout<<endl;
    
    for(int i=0;i<v.size();i++){
        a[v[i].second]=i;
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }cout<<endl;
return 0;
}