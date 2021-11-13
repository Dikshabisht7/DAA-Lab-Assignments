#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

int minDistance(int dist[],bool sptSet[],int V) {
	int min = INT_MAX, min_index;
	for (int v = 0; v < V; v++)
		if (sptSet[v] == false && dist[v] <= min)
			min = dist[v], min_index = v;
	return min_index;
}

void printPath(int parent[], int j) {
	if (parent[j] == - 1)
		return;
	printPath(parent, parent[j]);
	printf("%d ", j);
}

int printSolution(int dist[], int V, int parent[], int src) {
	printf("Vertex\t Distance\tPath");
	for (int i = 1; i < V; i++)
	{
		printf("\n%d -> %d \t\t %d\t\t%d ", src, i, dist[i], src);
		printPath(parent, i);
	}
}

void dijkstra(int V, int graph[][V], int src) {
	int dist[V];
	bool sptSet[V];
	int parent[V];
	for (int i = 0; i < V; i++)
	{
		parent[0] = -1;
		dist[i] = INT_MAX;
		sptSet[i] = false;
	}
	dist[src] = 0;
	for (int count = 0; count < V - 1; count++) {
		int u = minDistance(dist, sptSet, V);
		sptSet[u] = true;
		for (int v = 0; v < V; v++)
			if (!sptSet[v] && graph[u][v] &&
				dist[u] + graph[u][v] < dist[v]) {
				parent[v] = u;
				dist[v] = dist[u] + graph[u][v];
			}
	}
	printSolution(dist, V, parent,src);
}

int main() {
    int V,src;
    scanf("%d",&V);
    int graph[V][V];
    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
            scanf("%d",&graph[i][j]);
        }
    }
    scanf("%d",&src);
	dijkstra(V, graph, src-1);
	return 0;
}
