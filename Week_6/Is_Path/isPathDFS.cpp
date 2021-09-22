#include <iostream>
#include <stack>
using namespace std;

bool isPathDFS(int **AdjM, int V, int s, int d) {
    stack<int> st;
    bool *visited=new bool[V]();
    st.push(s);
    visited[s]=1;
    while (!st.empty()) {
        int u=st.top();
        st.pop();
        for (int v=0;v<V;v++) {
            if (AdjM[u][v] && v==d)
                return true;
            if (AdjM[u][v] && !visited[v]) {
                st.push(v);
                visited[v]=1;
            }
        }
    }
    return false;
}


int main(){
    int v,s,d;
    cin>>v; //Size of adjacency matrix
    int **AdjM; //Adjacency Matrix
    AdjM=(int **)malloc(v*sizeof(int *));
    for(int i=0;i<v;i++)
        AdjM[i]=(int *)malloc(v*sizeof(int));
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            cin>>AdjM[i][j];
        }
    }
    cin>>s>>d; //Source vertex and Destination vertex
    if(isPathDFS(AdjM,v,s-1,d-1)==true)
        cout<<"Yes Path Exists"<<endl;
    else
        cout<<"No Such Path Exists"<<endl;
}