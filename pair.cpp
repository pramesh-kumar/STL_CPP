#include<bits/stdc++.h>
using namespace std;
void display(pair<int,string>p[]){
    cout<<"Displaying Array of Pair :"<<endl<<endl;
    for(int i=0;i<3;i++){
        cout<<p[i].first<<" "<<p[i].second<<" "<<endl;
    }cout<<endl;
}
int main(){
    // pair<int,string>m;
    // // m=make_pair(2,"pramesh");
    // m={1,"pramesh"};
    // cout<<m.first<<endl;
    // cout<<m.second<<endl;

    pair<int,string>p[3];
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int n;string s;
        cin>>n;cin>>s;
        // p[i]={n,s};
        p[i]=make_pair(n,s);
    }

    // p[0]={1,"ram"};
    // p[1]={2,"shyam"};
    // p[2]={3,"Raju"};

    display(p);

    // p[0].swap(p[2]);
    // display(p);
    
return 0;
}



/*


#include<bits/stdc++.h>
using namespace std;

int main(){
    // vector<int> v={1,2,3,4,5};
    // // for(int i=0;i<v.size();i++){
    // //     cout<<v[i]<<" ";
    // // }cout<<endl;
    // vector<int>::iterator it;
    // for(it=v.begin();it!=v.end();){
    //     cout<<(*it)<<" ";
    //     // it++;
    //     it+=1;//  vector , array , pair, all are sequential container so ,
    //     //here +1 is worked  hmmm otherwise not work in map and set etc,
    //     //bcz they are random allocation in manner
    // }cout<<endl;

    cout<<"Pair of vector "<<endl;

    vector<pair<int ,int >>v={{1,2},{2,3},{3,4},{4,5}};
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i].first<<" "<<v[i].second<<endl;
    // }cout<<endl;


    // int size;
    // cin>>size;
    // vector<pair<int ,int > > v(size);
    // for(int i=0;i<size;i++){
    //     int x,y;
    //     cin>>x>>y;
    //     v[i]={x,y};
    // }
    // for(int i=0;i<size;i++){
    //     cout<<v[i].first<<" "<<v[i].second<<endl;
    // }



    // vector<pair<int,int>>::iterator it;
    // for(it=v.begin();it!=v.end();it++){  // here it is same like as pointer 
    //     cout<<it->first<<" "<<(*it).second<<endl;
    // }cout<<endl;

    for(auto i:v){ //  here auto key , automatically takes data type of variable v .
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;
return 0;
}

*/