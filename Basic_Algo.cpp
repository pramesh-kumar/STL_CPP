#include <bits/stdc++.h>

using namespace std;
int main()
{
    int a[] = {2, 4, 3, 1,4, 5, 6, 7, 8, 9};
    int s = sizeof(a) / sizeof(a[0]);

    vector<int> vec(a, a + s);
    cout << "Vector Elements are " << endl;
    for (int i = 0; i < s; i++)
    {
        cout << " " << vec.at(i);
    }
    cout << endl;
//this is stl sort function
    sort(vec.begin(), vec.end());
    cout << "Vector Elements are After sorting... " << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cout << " " << vec.at(i);
    }
    cout << endl;
    reverse(vec.begin(), vec.end());
    cout << "Vector Elements are After revrsing ..." << endl;
    for (int i = 0; i < s; i++)
    {
        cout << " " << vec.at(i);
    }
    cout << endl;

    cout << "Max valu of vector is ...." << endl;
    cout << *max_element(vec.begin(), vec.end()) << endl;
    cout << "Min valu of vector is ...." << endl;
    cout << *min_element(vec.begin(), vec.end()) << endl;

    int ans = accumulate(vec.begin(), vec.end(), 0);
    cout << "Summation is " << ans << endl;
    
    // This commit is done in Github 
    
    cout<<"occurance of 4 is "<<count(vec.begin(),vec.end(),4)<<endl;
    find(vec.begin(), vec.end(),5) != vec.end()?cout << "\nElement found": cout << "\nElement not found";
    cout<<endl;
  
    vec.erase(vec.begin()+1);
    cout << "Vector Elements are After erasion ... " << endl;
    for (int i = 0; i < s-1; i++)//up to (s-1) bcs i have deleted on element.
    {
        cout << " " << vec.at(i);
    }
cout<<endl;
    vec.erase(unique(vec.begin(),vec.end()),vec.end());
        cout << "Vector Elements are After deletion of Duplicate elements ... " << endl;
    for (int i = 0; i < s-2; i++)
    {
        cout << " " << vec.at(i);
    }
cout<<endl;


sort(vec.begin(),vec.end());
    cout << "Vector Elements are After sorting... " << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cout << " " << vec.at(i);
    }
    cout<<"\nDistance b/w first and maximum_element"<<endl;
int dist=distance(vec.begin(),max_element(vec.begin(),vec.end()));
cout<<dist<<endl;

    return 0;
}
