#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
int min(int a,int b){
    return a<b?a:b;
}
int shortestPath(int V,int graph[][V], int u, int v, int k) {
    if (k == 0 && u == v)			 
        return 0;
    if (k == 1 && graph[u][v] != INT_MAX) 
        return graph[u][v];
    if (k <= 0)					 
        return INT_MAX;
    int res = INT_MAX;
    for (int i = 0; i < V; i++)
    {
        if (graph[u][i] != INT_MAX && u != i && v != i)
        {
            int rec_res = shortestPath(V,graph, i, v, k-1);
            if (rec_res != INT_MAX)
                res = min(res, graph[u][i] + rec_res);
        }
    }
    return res;
}

int main() {
    int V,src,des,k;
    scanf("%d",&V);
    int graph[V][V];
    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
            scanf("%d",&graph[i][j]);
        }
    }
    scanf("%d%d",&src,&des);
    scanf("%d",&k);
    printf("Weight of the shortest path from (%d,%d) with %d edges: %d",src,des,k,shortestPath(V,graph, src-1, des-1, k));
	return 0;
}