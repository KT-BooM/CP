#include <iostream>
#include<list>

using namespace std;


//direct 0 = up ,1 = right ,2 = left ,3 = down
//int mazeDFS(char maze[17][17],int x,int y,int direct){
//	int finish = 0;
//	maze[x][y] = '.'; //mark as visited
//	while(finish==0){
//		if((x == 0) && (y == 15))
//			finish = 1;
//		else if(direct == 0){
//			if(maze[x-1][y]==' '||maze[x-1][y]=='F')//up
//				finish = mazeDFS(maze,x-1,y,0);
//			else if(maze[x][y+1]==' '||maze[x][y+1]=='F')//right
//				finish = mazeDFS(maze,x,y+1,1);
//			else if(maze[x][y-1]==' '||maze[x][y-1]=='F')//left
//				finish = mazeDFS(maze,x,y-1,2);
//			else
//				return 0;
//		}
//		else if(direct == 1){
//			if(maze[x-1][y]==' '||maze[x-1][y]=='F')//up
//				finish = mazeDFS(maze,x-1,y,0);
//			else if(maze[x][y+1]==' '||maze[x][y+1]=='F')//right
//				finish = mazeDFS(maze,x,y+1,1);
//			else if(maze[x+1][y]==' '||maze[x+1][y]=='F')//down
//				finish = mazeDFS(maze,x+1,y,3);
//			else
//				return 0;
//		}
//		else if(direct == 2){
//			if(maze[x-1][y]==' '||maze[x-1][y]=='F')//up
//				finish = mazeDFS(maze,x-1,y,0);
//			else if(maze[x][y-1]==' '||maze[x][y-1]=='F')//left
//				finish = mazeDFS(maze,x,y-1,2);
//			else if(maze[x+1][y]==' '||maze[x+1][y]=='F')//down
//				finish = mazeDFS(maze,x+1,y,3);
//			else
//				return 0;
//		}
//		else if(direct == 3){
//			if(maze[x][y+1]==' '||maze[x][y+1]=='F')//right
//				finish = mazeDFS(maze,x,y+1,1);
//			else if(maze[x][y-1]==' '||maze[x][y-1]=='F')//left
//				finish = mazeDFS(maze,x,y-1,2);
//			else if(maze[x+1][y]==' '||maze[x+1][y]=='F')//down
//				finish = mazeDFS(maze,x+1,y,3);
//			else
//				return 0;
//		}
//			
//	}
//	return finish; // check can or cannot finish maze
//}				
//	 
//int main(){	
//	int finish = 0;
//						// 1   2   3   4   5   6   7   8   9   10  11  12  13  14  15  16  17
//	char maze[17][17] = {{'#','S','#','#','#','#','#','#','#','#','#','#','#','#','#','F','#'},
//						 {'#',' ',' ',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ','#',' ','#'},
//						 {'#',' ','#','#','#',' ','#',' ','#','#','#','#','#',' ','#',' ','#'},
//						 {'#',' ',' ',' ',' ',' ','#',' ','#',' ',' ',' ',' ',' ',' ',' ','#'},
//						 {'#',' ','#','#','#','#','#',' ','#','#','#','#','#','#','#',' ','#'},
//						 {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','#',' ','#'},
//						 {'#',' ','#','#','#','#','#',' ','#','#','#',' ',' ',' ','#',' ','#'},
//						 {'#',' ','#',' ','#',' ','#',' ','#',' ','#',' ',' ',' ','#',' ','#'},
//						 {'#',' ','#',' ','#',' ','#',' ','#',' ','#','#','#','#','#',' ','#'},
//						 {'#',' ','#',' ','#',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ','#'},
//						 {'#',' ','#',' ','#','#','#','#','#','#','#','#','#','#','#',' ','#'},
//						 {'#',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','#'},
//						 {'#',' ','#',' ','#','#','#',' ','#','#','#','#','#',' ','#',' ','#'},
//						 {'#',' ','#',' ','#',' ',' ',' ',' ',' ',' ',' ','#',' ','#',' ','#'},
//						 {'#',' ','#',' ','#',' ','#','#','#','#','#','#','#',' ','#',' ','#'},
//						 {'#',' ',' ',' ','#',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ','#'},
//						 {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'}};
//	
//	
//	for(int i = 0;i<17;i++){//print graph
//		for(int j=0;j<17;j++){
//			cout << maze[i][j] << ' ' ;
//		}
//		cout << endl;
//	}
//	
//	finish = mazeDFS(maze,0,1,3);
//	
//	if(finish == 1)
//		cout << "\nYES\n\n";
//	else
//		cout << "\nNO\n\n";
//	
//	
//	maze[0][1] = 'S';
//	maze[0][15] = 'F';
//	for(int i = 0;i<17;i++){
//		for(int j=0;j<17;j++){
//			cout << maze[i][j] << ' ' ;
//		}
//		cout << endl;
//	}
//}
//-----------------------------------------------------------------------------------------------------------------------------
//-------------version after 25 sep
class Graph
{
	int V; 
	list<int> *adj;
	list<int> visit; 
	void DFSVisit(int s, bool visited[],int e); 
	public:
	Graph(int V); 
	bool isConnect;
	void addEdge(int v, int w); 
	void DFSInit(int s,int e); 
	};
Graph::Graph(int V){
	this->V = V;
	adj = new list<int>[V];
	}
void Graph::addEdge(int v, int w){
	adj[v].push_back(w); 
	adj[w].push_back(v); 
}
void Graph::DFSVisit(int s, bool visited[],int e){
	visited[s] = true;
	if(visited[e]==true){
		isConnect = true;
	}
	list<int>::iterator i;
	for (i = adj[s].begin(); i != adj[s].end(); ++i){
		
		if (!visited[*i])
			DFSVisit(*i, visited,e);
	}
}
//void Graph::isConnect(int dist){
//	list<int>::iterator i;
//	for (i = visit.begin(); i != visit.end(); ++i){
//		if(visit[i]==dist){
//			cout << "Yes" << endl;
//			break;
//		}
//	}
	
		

void Graph::DFSInit(int s,int e){
	bool *visited = new bool[V];
	for (int i = 0; i < V; i++)
	visited[i] = false;
	DFSVisit(s, visited,e);
	if(!isConnect)
		cout<< "No"<<endl;
	else
		cout<< "Yes"<<endl;
	
}
int main(){
	Graph g(19);
	g.addEdge(0, 1);
	g.addEdge(0, 3);
	g.addEdge(2, 1);
	g.addEdge(3, 2);
	g.addEdge(3, 4);
	g.addEdge(4, 5);
	g.addEdge(5, 6);
	g.addEdge(5, 7);
	g.addEdge(5, 8);
	g.addEdge(4, 9);
	g.addEdge(9, 10);
	g.addEdge(9, 11);
	g.addEdge(11, 12);
	g.addEdge(11, 13);
	g.addEdge(12, 13);
	g.addEdge(11, 14);
	g.addEdge(11, 15);
	g.addEdge(14, 15);
	g.addEdge(11, 16);
	g.addEdge(14, 16);
	g.addEdge(11, 17);
	g.addEdge(14, 17);
	g.addEdge(11, 18);
	g.addEdge(14, 18);
	g.DFSInit(2,18);
}












