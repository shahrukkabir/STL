#include<bits/stdc++.h>
using namespace std;
int main(){

    queue<int>q;
    
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout<<q.front()<<endl;    //1
    q.pop();                  //1
    cout<<q.front()<<endl;    //2
 
    cout<<"Queue Size : "<<endl;
    cout<<q.size()<<endl;

    cout<<"Printing Queue Element : "<<endl;
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
    
    return 0;
}

