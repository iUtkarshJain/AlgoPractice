#include <optional>
#include <unordered_map>
using namespace std;

class UnionFind {
    unordered_map<int, int> parent, rank;
public:
    // O(1) time | O(1) space
    void createSet(int value) {
        parent[value] = value;
        rank[value] = 0;
    }
    // O(alpha(n)) time | O(alpha(n)) space 
    // alpha is inverse ackermann function -> amortised time and space complexity
    optional<int> find(int value) {
        if(parent.find(value) == parent.end())
            return nullopt;
        if(parent[value] != value)
            parent[value] = *find(parent[value]);
        return parent[value];
    }
    // O(alpha(n)) time | O(alpha(n)) space 
    // alpha is inverse ackermann function -> amortised time and space complexity
    void createUnion(int valueOne, int valueTwo) {
        if(parent.find(valueOne) == parent.end() || parent.find(valueTwo) == parent.end())
            return;
        int repOne = *find(valueOne), repTwo = *find(valueTwo);
        if(rank[repOne] > rank[repTwo])
            parent[repTwo] = repOne;
        else if(rank[repOne] < rank[repTwo])
            parent[repOne] = repTwo;
        else{
            parent[repTwo] = repOne;
            rank[repOne]++;
        }
    }
};
