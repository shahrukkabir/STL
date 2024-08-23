#include<bits/stdc++.h>
using namespace std;
int main(){

    priority_queue<int>pq;
    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.push(4);

    cout<<pq.top()<<endl;  // 4 
    pq.pop();
    cout<<pq.top()<<endl;  // 3

    cout<<"Size of pq : ";
    cout<<pq.size()<<endl;

    cout<<"Printing priority queue element :"<<endl;
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
       
   return 0;
}


#include<bits/stdc++.h>
using namespace std;

int main(){
    
    priority_queue<pair<int,int>>pq; //normally without comparator value prints with big to small

    // priority_queue<int,vector<int>,greater<int>>pq; // comparator-> small to big
    // priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq; // comparator-> small to big

    pq.push({1, 2});
    pq.push({2, 4});
    pq.push({1, 3});
    pq.push({1, 5});
    pq.push({3, 1});

    while(!pq.empty()){
        cout<<pq.top().first<<" "<<pq.top().second<<endl;
        pq.pop();
    }

    cout<<endl<<endl;
     
    // first column ->  large to small 
    // second column -> small to large

    priority_queue<pair<int,int>> q; //normally without comparator value prints with big to small
    q.push({1, -2});
    q.push({2, -4});
    q.push({1, -3});
    q.push({1, -5});
    q.push({3, -1});

    while(!q.empty()){
        cout<<q.top().first<<" "<<q.top().second*-1<<endl;
        q.pop();
    }


    return 0;
}












