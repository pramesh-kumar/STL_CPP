#include<bits/stdc++.h>


using namespace std;
template<typename T>
void show(T arr[],int size)
{
    for (int  i = 0; i < size; i++)
    {
        cout<<" "<<arr[i];
    }
    cout<<endl;
}

int main()
{
    int a[]={1,4,2,3,9,5,6,10};
    int s=sizeof(a)/sizeof(a[0]);
    
    cout<<"Before sorting\n";
    show(a,s);
    cout<<"After sorting\n";
    sort(a,a+s);
    show(a,s);
    lable:
int val;
cout<<"Enter value what u want to search"<<endl;
cin>>val;
if(binary_search(a,a+s,val))
    cout<<val<<" is present in array"<<endl;
else
    cout<<val<<" is not present in array"<<endl;
cout<<"Do u want to search again ....."<<endl;
char ans;
cin>>ans;
if( ans=='y'||ans=='Y')
    goto lable;
else
    exit;
return 0;
}