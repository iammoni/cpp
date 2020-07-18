#include<bits/stdc++.h>

using namespace std;

class Graph{
  map<int,vector<int>> m;
  
  public:
  void addEdge(int x,int y){
      m[x].push_back(y);
      m[y].push_back(x);
  }
  
  void print(){
      for(auto x:m){
          vector<int> l=x.second;
          cout<<x.first<<"-> ";
          for(int y:l){
              cout<<y<<","<<" ";
          }
          cout<<endl;
      }
  }
  
  
int minEdgeBFS(int u,int v,int n) 
{ 
    // visited[n] for keeping track of visited 
    // node in BFS 
    vector<bool> visited(n, 0); 
  
    // Initialize distances as 0 
    vector<int> distance(n, 0); 
  
    // queue to do BFS. 
    queue <int> Q; 
    distance[u] = 0; 
  
    Q.push(u); 
    visited[u] = true; 
    while (!Q.empty()) 
    { 
        int x = Q.front(); 
        Q.pop(); 
  
        for (int i=0; i<m[x].size(); i++) 
        { 
            if (visited[m[x][i]]) 
                continue; 
  
            // update distance for i 
            distance[m[x][i]] = distance[x] + 1; 
            Q.push(m[x][i]); 
            visited[m[x][i]] = 1; 
        } 
    } 
    return distance[v]; 
}

void kittCalculation(vector<int> &v,int n){
    int si=v.size();
    int sum=0;
    for(int i=0;i<si;i++){
        for(int j=i+1;j<si;j++){
            sum+=(v[i]*v[j]*minEdgeBFS(v[i],v[j],n));
        }
    }
    
     int z=pow(10,9)+7;
     z=sum%z;
    cout<<z<<endl;//mod(sum,(pow(10,9)+7))<<endl;
}
};
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;cin>>n;
    int q;cin>>q;
    
    Graph g;
    for(int i=1;i<n;i++){
    int a,b;
    cin>>a>>b;
    g.addEdge(a,b);
    }
    
    //g.print();
    
    //cout<<g.minEdgeBFS(1,6,n);
    for(int i=0;i<q;i++){
        int k;cin>>k;
        vector<int> v;
        for(int j=0;j<k;j++){
            int a;cin>>a;
            v.push_back(a);
        }
        g.kittCalculation(v,n);
    }
    return 0;
}
