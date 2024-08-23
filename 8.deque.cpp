#include<bits/stdc++.h>
using namespace std;                       // * push_front() , push_back()
                                           // * pop_front()  , pop_back()
                                           // * dq.front()   , dq.back()  (output)
int main(){

    deque<int>dq;
    
    dq.push_front(1);                     
    dq.push_front(2);
    dq.push_front(3);
    dq.push_front(4);      // (F) 5 4 3 2 1 8 9 (R) ----> deque
    dq.push_front(5);
    dq.push_back(8);
    dq.push_back(9);
    

    cout<<dq.front()<<" "<<dq.back()<<endl;    // 5  9
    dq.pop_front();                            // 5
    cout<<dq.front()<<" "<<dq.back()<<endl;    // 4  9
    dq.pop_back();                             // 9
    cout<<dq.front()<<" "<<dq.back()<<endl;    // 4 8

    cout<<dq.size()<<endl;
    cout<<dq.empty()<<endl;

    while(!dq.empty()){
        cout<<dq.front()<<" ";
        dq.pop_front();
    }


    return 0;
}

