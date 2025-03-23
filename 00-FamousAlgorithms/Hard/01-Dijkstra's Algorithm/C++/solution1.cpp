#include<vector>
#include<queue>
#include<limits.h>
using namespace std;

class MyComp{
public:
    bool operator()(vector<int> a, vector<int> b){
        return a[1] > b[1];
    }
};
// O((V + E)logV) time | O(V) space or O(E) worst space
vector<int> dijkstrasAlgorithm(int start, vector<vector<vector<int>>> edges){
    int n = edges.size();
    vector<int> res(n, INT_MAX);
    vector<bool> finalised(n, false);
    priority_queue<vector<int>, vector<vector<int>>, MyComp> minHeap;
    minHeap.push({start, 0});

    while(!minHeap.empty()){
        int u = minHeap.top()[0], cost = minHeap.top()[1];
        minHeap.pop();

        if(finalised[u])
            continue;
        
        res[u] = cost;
        finalised[u] = true;

        for(vector<int> edge : edges[u]){
            int v = edge[0], weight = edge[1];
            if(finalised[v] == false && res[u] + weight < res[v])
                minHeap.push({v, res[u] + weight});
        }
    }

    for(int i = 0; i < n; i++)
        if(res[i] == INT_MAX)
            res[i] = -1;

    return res;
}