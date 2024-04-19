#include<bits/stdc++.h>
using namespace std;
int main(){

    stack<int>st;
    st.push(1);
    st.push(2);                   //O(n)
    st.push(3);
    st.push(4);
    st.push(5);
    cout<<st.top()<<"  "; //5
    st.pop();
    cout<<st.top()<<endl; //4

    cout<<"Printing current stack :  "<<endl;
    cout<<"Size : "<<st.size()<<endl;
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }

    return 0;
}

/*  
    find the minimum element in a stack
    
    int mn = 2e9;
    
    while ( !s.empty() ) 
    {
        mn = min ( s.top(), mn );
        s.pop();
    }

*/
