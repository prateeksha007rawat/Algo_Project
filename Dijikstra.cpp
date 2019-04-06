# include<iostream>
# include<limits>
# define V 9
using namespace std;
int min_dist(int dist[V], bool sptset[V])
{
    int min1=INT_MAX, min_index;
    for(int i=0;i<V;i++)
    {
        if(dist[i]<min1 && sptset[i]==false)
        {
            min1=dist[i];
            min_index=i;
        }
    }
    return min_index;
}
void printdijikstra(int dist[V], int n)
{
    cout<<"Dijikstra traversal: "<<endl<<endl;
    cout<<"Vertex       Distance from source"<<endl;
    for(int i=0;i<V;i++)
    {
        cout<<" "<<i<<"               "<<dist[i]<<endl;
    }
}
void dijikstra(int graph[V][V], int src)
{
    int dist[V];
    bool sptset[V];

    for(int i=0;i<V;i++)
    {
        dist[i]=INT_MAX;
        sptset[i]=false;
    }
    dist[src]=0;
    for(int count1=0;count1<V-1;count1++)
    {
        int u=min_dist(dist,sptset);
        sptset[u]=true;
        for(int v=0;v<V;v++)
        {
            if(!sptset[v] && graph[u][v] && dist[u]!=INT_MAX && dist[u]+graph[u][v] < dist[v])
            {
                dist[v]=dist[u]+ graph[u][v];
            }
        }
    }

    printdijikstra(dist,V);
}
int main()
{
    int graph[V][V]={{0,4,0,0,0,0,0,8,0},
                    {4,0,8,0,0,0,0,11,0},
                    {0,8,0,7,0,4,0,0,2},
                    {0,0,7,0,9,14,0,0,0},
                    {0,0,0,9,0,10,0,0,0},
                    {0,0,4,14,10,0,2,0,0},
                    {0,0,0,0,0,2,0,1,6},
                    {8,11,0,0,0,0,1,0,7},
                    {0,0,2,0,0,0,6,7,0}};
    dijikstra(graph,0);

    return 0;
}
