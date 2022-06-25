/****
    Code Challenge
Day - 16
Disjoint set union and Application of DSU- Kruskals algorithm.
****/

///--- Disjoint set union ---/// 
/*
#include <bits/stdc++.h>
using namespace std;

int parent[100000];
int rank[100000];

void makeset(int n){
    for (int i = 0; i < n; i++)
    {
        parent[i] = i;
        rank[i] = 0;
    }
}

int findparent(int node)
{
    if (node == parent[node])
    {
        return node;
    }
    
    // for path compression 
    return parent[node] = findparent(parent[node]);
}

void unionFunc(int u, int v)
{
    u = findparent(u);
    v = findparent(v);
    
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
}

int main()
{
    int u, v;
    makeset(4);
    
    unionFunc(0, 1);
    unionFunc(1, 3);
    unionFunc(2, 3);
    unionFunc(2, 0);
    unionFunc(0, 3);
    
    if (find(2) != find(3))
    {
        cout<<"Different component"<<endl;
    }
    else{
        cout<<"Same component"<<endl;
    }
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

