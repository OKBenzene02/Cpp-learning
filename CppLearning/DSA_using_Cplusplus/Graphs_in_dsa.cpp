/**** Breadth first search ****/
/*
#include<bits/stdc++.h>
using namespace std;

class BFS{
private:
  int V;
  vector<list<int>> adj;
public:

  BFS(int V){
      this -> V = V;
      adj.resize(V);
  }
  
  void createGraph(int v, int w){
      adj[v].push_back(w);
  }
  
  void traversal(int start){
      vector<bool> visited;
      visited.resize(V, false);
      
      list<int> queue;
      
      visited[start] = true;
      queue.push_back(start);
      
      while (!queue.empty())
      {
          start = queue.front();
          cout<<"\t"<<start<<" ";
          queue.pop_front();
          
          for (auto adjacent: adj[start])
          {
              if (!visited[adjacent]){
                  visited[adjacent] = true;
                  queue.push_back(adjacent);
              }
          }
      }
      
  }
};

int main(){
    BFS bfs(7);
    bfs.createGraph(0, 1);
    bfs.createGraph(0, 3);
    bfs.createGraph(0, 5);
    bfs.createGraph(1, 2);
    bfs.createGraph(2, 6);
    bfs.createGraph(6, 4);
    bfs.createGraph(4, 1);
    bfs.createGraph(4, 5);
    bfs.createGraph(3, 5);
    cout<<"Breadth first search order with starting node as 0: "<<endl; 
    bfs.traversal(0);
    return 0;
}
*/


/*** Depth first search ***/ 
/*
#include<bits/stdc++.h>
using namespace std;

class DFS{
private:
  int V;
  vector<list<int>> adj;
public:

  DFS(int V){
      this -> V = V;
      adj.resize(V);
  }
  
  void createGraph(int v, int w){
      adj[v].push_back(w);
  }
  
  void traversal(int start){
      vector<bool> visited;
      visited.resize(V, false);
      
      list<int> stack;
      
      visited[start] = true;
      stack.push_back(start);
      
      while (!stack.empty())
      {
          start = stack.back();
          cout<<"\t";
          cout<<start<<" ";
          stack.pop_back();
          
          for (auto adjacent: adj[start])
          {
              if (!visited[adjacent]){
                  visited[adjacent] = true;
                  stack.push_back(adjacent);
              }
          }
      }
      
  }
};

int main(){
    DFS bfs(7);
    bfs.createGraph(0, 1);
    bfs.createGraph(0, 3);
    bfs.createGraph(0, 5);
    bfs.createGraph(1, 2);
    bfs.createGraph(2, 6);
    bfs.createGraph(6, 4);
    bfs.createGraph(4, 1);
    bfs.createGraph(4, 5);
    bfs.createGraph(3, 5);
    
    cout<<"Depth first search order with starting node as 0: "<<endl; 
    
    bfs.traversal(0);
    return 0;
}
*/

///---- Minimum spanning tree using kruskal's algorithm ----///
/*
#include<bits/stdc++.h>
using namespace std;

class DisJoint{
    int* parent;
    int* rank;
    
public:
    
     DisJoint(int n){
         parent = new int[n];
         rank = new int[n];
        for (int i = 0; i < n; i++)
        {
            parent[i] = -1;
            rank[i] = 0;
        }
    }
    
    int find(int node)
    {
        if (parent[node] == -1)
        {
            return node;
        }
        
        return parent[node] = find(parent[node]);
    }
    
    void unionFunc(int u, int v)
    {
        u = find(u);
        v = find(v);
        if (u != v)
        {
            if (rank[u] < rank[v])
            {
                parent[u] = v;
                rank[v] += rank[u];
            }
            
            else
            {
                parent[v] = u;
                rank[u] += rank[v];
            }
        }
            
        }
        
        
};

class Graph {
    vector<vector<int>> edgeList;
    int V;
    
public:
    Graph(int V)
    {
        this -> V = V;
    }
    
    void addEdge(int x, int y, int weight)
    {
        edgeList.push_back({x, y, weight});
    }
    
    void kruskal()
    {
        sort(edgeList.begin(), edgeList.end());
        
        DisJoint s(V);
        int res = 0;
        
        cout << "Following are the edges in the constructed MST"<< endl;
        
        for (auto edge: edgeList)
        {
            int x = edge[0];
            int y = edge[1];
            int wt = edge[2];
            
            if (s.find(x) != s.find(y))
            {
                s.unionFunc(x, y);
                res += wt;
                cout << x << " -- " << y << " == " << wt << endl;
            }
        }
        
        cout << "Minimum Cost Spanning Tree: " << res; 
    }
    
};

int main()
{
    Graph g(7);
    
    g.addEdge(0, 1, 28);
    g.addEdge(0, 5, 10);
    g.addEdge(1, 2, 16);
    g.addEdge(2, 3, 12);
    g.addEdge(3, 4, 22);
    g.addEdge(3, 6, 18);
    g.addEdge(4, 5, 25);
    g.addEdge(4, 6, 24);

    g.kruskal();

    return 0;
}

*/

