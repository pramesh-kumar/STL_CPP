// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     int n;
//     cin>>n;
//     stack<int>s;
//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         s.push(x);
//     }

//     while(!s.empty()){
//         cout<<s.top()<<endl;
//         s.pop();
//     }
// return 0;
// }


// Balamce Paranthesis  


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     stack<char>s;
//     string str;
//     cin>>str;
//     bool ans=true;
//     for(int i=0;i<str.size();i++){
//         if(str[i]=='{'||str[i]=='['||str[i]=='('){
//             s.push(str[i]);
//         }
//         else if(str[i]=='}'){
//             if(!s.empty()&&s.top()=='{'){
//                 s.pop();
//             }
//             else{
//                 ans=false;
//                 break;
//             }   
//         }
//         else if(str[i]==']'){
//             if(!s.empty()&&s.top()=='['){
//                 s.pop();
//             }
//             else{
//                 ans=false;
//                 break;    
//             }   
//         }
//         else if(str[i]==')'){
//             if(!s.empty()&&s.top()=='('){
//                 s.pop();
//             }
//             else{
//                 ans=false;
//                 break;
//             }   
//         }
//     }
           
//     if(!s.empty()){
//         ans=false;
//     }

//     if(ans){
//         cout<<"Balance"<<endl;
//     }
//     else{
//         cout<<"Not Balance"<<endl;
//     }

// return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
            
//         stack<char>s;
//         string str;
//         cin>>str;
//         bool ans=true;
//         for(int i=0;i<str.size();i++){
//             if(str[i]=='{'||str[i]=='['||str[i]=='('){
//                 s.push(str[i]);
//             }
//             else if(str[i]=='}'){
//                 if(!s.empty()&&s.top()=='{'){
//                     s.pop();
//                 }
//                 else{
//                     ans=false;
//                     break;
//                 }   
//             }
//             else if(str[i]==']'){
//                 if(!s.empty()&&s.top()=='['){
//                     s.pop();
//                 }
//                 else{
//                     ans=false;
//                     break;    
//                 }   
//             }
//             else if(str[i]==')'){
//                 if(!s.empty()&&s.top()=='('){
//                     s.pop();
//                 }
//                 else{
//                     ans=false;
//                     break;
//                 }   
//             }
//         }
            
//         if(!s.empty()){
//             ans=false;
//         }

//         if(ans){
//             cout<<"YES"<<endl;
//         }
//         else{
//             cout<<"NO"<<endl;
//         }
//     }
// return 0;
// }


// #include <bits/stdc++.h>

// using namespace std;

// unordered_map<char,int>symbols={{'(',-1},{'{',-2},{'[',-3},{')',1},{'}',2},{']',3}};
// string isBalanced(string s) {
//     stack<char>st;
//     for(char bracket :s){
//         if(symbols[bracket]<0){
//             st.push(bracket);
//         }
//         else{
//             if(st.empty()){
//                 return "NO";
//             }
//             char top=st.top();
//             st.pop();
//             if(symbols[top]+symbols[bracket]!=0){
//                 return "NO";
//             }
//         }
//     }
//     if(st.empty()){
//         return "YES";
//     }
//     return "NO";
// }

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--){
//         string s;
//         cin>>s;
//         cout<<isBalanced(s)<<endl;
//     }
//     return 0;
// }




// Next Greater Element ........


#include<bits/stdc++.h>
using namespace std;

vector<int> NGE(vector<int> v){
    vector<int>nge(v.size());
    stack<int>st;
    for(int i=0;i<v.size();i++){
        while(!st.empty()&&v[i]>v[st.top()]){
            nge[st.top()]=i;
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
        nge[st.top()]=-1;
        st.pop();
    }

return nge;
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int> nge=NGE(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" "<<((nge[i]==-1)? -1 : v[nge[i]])<<endl;
    }
return 0;
}