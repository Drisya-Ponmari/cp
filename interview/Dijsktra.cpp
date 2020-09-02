#include <iostream>
#include <bits/stdc++.h>

using namespace std;

typedef struct Edge
{
	int src, dest, weight;
} Edge;

typedef struct Graph
{
	int V, E;
	Edge* edge;
} Graph;

Graph* CreateGraph( int V, int E)
{
	Graph* graph = new Graph();
	graph -> V = V;
	graph -> E = E;
	graph -> edge = new Edge[E];
	return graph;

}

int MinIndex (vector <bool> &vis, vector <int> &dist, int V)
{
	int min_val = INT_MAX, min_index;
	for( int i = 0; i < V; i++)
	{
		if( !vis[i] && min_val >= dist[i] )
		{
			min_val = dist[i];
			min_index = i;
		}
	}

	return min_index;
}
void Dijsktra ( Graph* graph, int start )
{
	int V = graph -> V;
	int E = graph -> E;
	int src, dest, wt;
	vector <int> dist ( V, INT_MAX );
	dist[start] = 0;
	vector <bool> vis ( V, false );

	for(int i = 0; i < V; i++)
	{
		int u = MinIndex( vis, dist , V);
		vis[u] = true;
		for( int j = 0; j < E; j++)
		{
			src = graph -> edge[j].src;
			dest = graph -> edge[j].dest;
			wt  = graph -> edge[j].weight;
			if(wt < 0)
			{
				cout << " Negative weight Not work" << endl; 
				return ;
			}
			if( src == u && vis[dest] == false && dist[src] != INT_MAX && dist[src] + wt <= dist[dest])
				dist[dest] = dist[src] + wt;
			
		}
	
	}

	
	for (int i = 0; i < V; i++)
		cout << i << " " << dist[i] << endl;
	return;
	
}
int main()
{

	cout<<"Enter the V and E";
	int V, E;
	cin >> V >>E;

	int i, u, v, wt;
	Graph* graph =  CreateGraph ( V, E);
	for( i = 0; i < E ; i++)
	{
		cin >> u >> v >> wt;
		graph -> edge[i].src = u;
		graph -> edge[i].dest = v;
		graph -> edge[i].weight = wt;

	}	

	int start; 
	cout << "Enter the start node ";
	cin >> start;
	Dijsktra( graph, start );
	return 0;
}
