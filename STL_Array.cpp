#include<bits/stdc++.h>

// #include<array>// for at(),array
// #include<tuple>//for get<>




using namespace std;
int main()
{
    array<int,8>a ={10,30,320,50,60,40,70,80};
    cout<<"Arrays Elements are ...."<<endl;
    for (int  i = 0; i < 8; i++)
        cout<<a.at(i)<<" ";
    cout<<endl;
    

    //     cout<<" "<<get<0>(a);
    //     cout<<" "<<get<1>(a);
    //     cout<<" "<<get<2>(a);
    //     cout<<" "<<get<3>(a);
    //     cout<<" "<<get<4>(a);
    //     cout<<" "<<get<5>(a);
    //     cout<<" "<<get<6>(a);
    //     cout<<" "<<get<7>(a);
    // cout<<endl;
    

        // for (int  i = 0; i < 8; i++)
        // cout<<" "<<a[i];
        // cout<<endl;


        cout<<"First elemnet is "<<a.front()<<endl;
        cout<<"Last elemnet is "<<a.back()<<endl;

        sort(a.begin(),a.end());
        cout<<"Sorted array are :"<<endl;
        
        for(int i=0;i<8;i++){
            cout<<a[i]<<" ";
        }cout<<endl;

        array<int,10>arr={1,2,3,4,6};
        cout<<"Size of array is "<<arr.size()<<endl;
        cout<<"Size of array is "<<arr.max_size()<<endl;
    
return 0;
}


// #include<bits/stdc++.h>

// using namespace std;
// int main()
// {
//     array<int,5>a={10,20,40,30,50};
//     // array<int,5>b={40,50,60,70,80};
//     array<int,5>b;
//     for(int i=0;i<5;i++){
//         cin>>b[i];
//     }


// a.swap(b);
// cout<<"First Array Elements \n";
// for (int  i = 0; i < 5; i++)
// cout<<" "<<a.at(i);
// cout<<endl;
// cout<<"Second Array Elements \n";
// for (int  i = 0; i < 5; i++)
// cout<<" "<<b.at(i);
// cout<<endl;

// a.empty()?cout<<"This array is empty":cout<<"This array is not empty"<<endl;

// a.fill(10);
// cout<<"Array a  after fill functions ..."<<endl;
// for (int  i = 0; i < a.size(); i++)
// cout<<" "<<a[i];
// cout<<endl;

// return 0;
// }
