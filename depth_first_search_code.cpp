//c191040@ugrad.iiuc.ac.bd
//bfs

#include<bits/stdc++.h>
using namespace std;
#define MAX 100000

void init_code()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
}

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}

vector<int>edges[MAX];

bool visited[MAX];//false

void dfs(int node)
{
    visited[node] = true;//visited[1] = true; [2] = true, [4] = true, [3] = true;

    cout<<node<<" ";//1 

    for(auto it : edges[node])      // for(int i = 0; i < edges[node].size(); i++ ){ if( !visited[edges[node][i]])  dfs(edges[node][i]) }
    {
        if(!visited[it])// false==visited[it]
        {
            dfs(it);//
        }
    }
}


int main()
{
    init_code();
    fastIO();

    edges[1].push_back(2);
    //edges[1].push_back(3);//edge[1] = 2  3 

    edges[2].push_back(1);
    edges[2].push_back(4);//edge[2] = 1 4

    //edges[3].push_back(1);
    edges[3].push_back(4);//edge[3] = 1 4

    edges[4].push_back(3);
    edges[4].push_back(2);//edge[4] = 3 2
    cout<<"Traversal : ";
    dfs(1);
}

/*
    1
   / 
  2   3 
  \   /
    4
*/