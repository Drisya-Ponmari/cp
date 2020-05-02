#include <iostream>
#include <bits/stdc++.h>
#include <list>
using namespace std;
///////////////GRAPH//////////////////
class Graph
{
	long int V;
	list<long int> *adj;
  public:
  	Graph(long int V);
	void addEdge(long int u,long int v);
	vector<long int> BFS(long int u,long int v);
};
Graph::Graph(long int V)
{
	this->V = V;
	adj = new list<long int>[V];
}
void Graph::addEdge(long int x,long int y)
{
	adj[x].push_back(y);
	adj[y].push_back(x);
}

vector<long int>Graph::BFS(long int u,long int v)
{
	vector<long int> path;
	bool *visited = new bool[V];
	long int j;
	for(j=0;j<V;j++)
		visited[j] = false;
	list<long int> queue;
	visited[u] = true;
	queue.push_back(u);
	
	list<long int>::iterator i; 
	while(!queue.empty())
	{
		u = queue.front();
//		cout<< u << " ";
		path.push_back(u);
		if( u == v)
		{
			return path;
		}
		queue.pop_front();
		long int nei;
		for(i=adj[u].begin();i!=adj[u].end();i++)
		{
			nei = *i;
			if(!visited[nei])
			{
				visited[nei] = true;
				queue.push_back(nei);
				if(nei == v)
				{
//					cout<<v<<" "<<"Hurray"<<endl;
					path.push_back(v);
					return path;

				}

			}
		}
	}	

}
long long int getDivisor(long long int n)
{
	long long int cnt = 0; 
    for (long long int i = 1; i <= sqrt(n); i++) { 
        if (n % i == 0) { 
            // If divisors are equal, 
            // count only one 
            if (n / i == i) 
                cnt++; 
  
            else // Otherwise count both 
                cnt = cnt + 2; 
        } 
    } 
    return cnt; 
}
int main()
{
	long long int M =  1000000007;
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long int n,q,u,v;
		scanf("%ld",&n);
		Graph g(n);
		long int i,j;
		for(i=0;i<n-1;i++)
		{
			scanf("%ld %ld",&u,&v);
			g.addEdge(u-1,v-1);
		}
		long int a[n];
		for(i=0;i<n;i++)
			scanf("%ld",&a[i]);
		scanf("%ld",&q);
		vector<long int> p;
		long int s ;
		long long int pro;
		long long int ans;
		for(j=0;j<q;j++)
		{
			scanf("%ld %ld",&u,&v);
			p=g.BFS(u-1,v-1);
			s = p.size();
			pro=1;
			for(i=0;i<s;i++)
			{
				//cout<<p[i]<<" ";
				pro = pro * a[p[i]];
			}
			//cout<<endl;
			//cout<<"PRODUCT : "<<pro<<endl;
			ans = getDivisor(pro);
			//cout<<"Answer"<<ans%M<<endl;
			printf("%lld\n",ans%M);
		}
	
	}
	return 0;
}
