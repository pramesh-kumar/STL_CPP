#include<bits/stdc++.h>
using namespace std;

void print( list<int> l){
    for(auto it=l.begin();it!=l.end();it++){
        cout<<*it<<" ";
    }cout<<endl;    
}

int main(){
    int n;
    cin>>n;
    list<int> l;

    for(int i=1;i<=n;i++){
        l.push_back(i);
    }

    print(l);
    l.pop_back();
    l.pop_back();
    
    print(l);

    l.push_front(10);
    l.push_front(20);
    l.push_front(30);

    print(l);

    l.pop_back();
    l.pop_back();
    l.pop_back();

    print(l);


return 0;
}





#include<bits/stdc++.h>
using namespace std;

int main(){
    for(int i=1;i<=10;i++){
        cout<<i<<" ";
    }cout<<endl;
return 0;
}