#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

int findMaxVertex(int V, bool visited[], int weights[]) {
	int index = -1;
	int maxW = INT_MIN;
	for (int i = 0; i < V; i++) {
		if (visited[i] == false
			&& weights[i] > maxW) {
			maxW = weights[i];
			index = i;
		}
	}
	return index;
}

void printMaximumSpanningTree(int V, int graph[V][V], int parent[]) {
	int MST = 0;
	for (int i = 1; i < V; i++) {
		MST += graph[i][parent[i]];
	}
	printf("Weight of the Maximum Spanning-tree: %d",MST);
}

void maximumSpanningTree(int V, int graph[V][V])
{
	bool visited[V];
	int weights[V];
	int parent[V];
	for (int i = 0; i < V; i++) {
		visited[i] = false;
		weights[i] = INT_MIN;
	}
	weights[0] = INT_MAX;
	parent[0] = -1;
	for (int i = 0; i < V - 1; i++) {
		int maxVertexIndex
			= findMaxVertex(V,visited, weights);
		visited[maxVertexIndex] = true;
		for (int j = 0; j < V; j++) {
			if (graph[j][maxVertexIndex] != 0
				&& visited[j] == false) {
				if (graph[j][maxVertexIndex] > weights[j]) {
					weights[j] = graph[j][maxVertexIndex];
					parent[j] = maxVertexIndex;
				}
			}
		}
	}
	printMaximumSpanningTree(V,graph, parent);
}

int main() {
	int V;
	scanf("%d",&V);
	int graph[V][V];
	for(int i=0;i<V;i++){
		for(int j=0;j<V;j++){
			scanf("%d",&graph[i][j]);
		}
	} 
	maximumSpanningTree(V, graph);
	return 0;
}
