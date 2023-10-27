#include <iostream>
#include <vector>
#include <set>
#ifndef MYGRAPH_H
#define MYGRAPH_H
using namespace std;

struct Link {
public:
    int v1, v2;
    float w;
    bool operator<(const Link &other) const {
        return w < other.w;
    }
    bool operator==(const Link &other) const {
        return v1 == other.v1 && v2 == other.v2 && w == other.w;
    }
};
class MyHelper {

public:
    MyHelper();
    vector<Link> sortedList;
    vector<Link> MST;
    int numOfNodes;
};



ostream &operator<<(ostream &, const Link &);

class MyGraph {
//    vector<vector<Link>> adjacencyList;
int numOfNodes;
std::set<std::pair<int, int>> edgeSet;
vector<Link> sortedList;
public:
    MyGraph();

    MyGraph(int numOfNodes) : numOfNodes(numOfNodes){}

    MyGraph(const MyGraph &);

    bool addEdge(int a, int b, float w);
    vector<Link> findMinimumSpanningTree(MyHelper& m);
    int findRoot(vector<int> &parent, int node);

    void output(ostream &os);

    pair<bool, float> weight(int a, int b);


};



vector<Link> Task1(int n, vector<Link> &pipes, MyHelper &helper);

pair<bool, Link> Task2(int n, vector<Link> &pipes, Link newPipe, MyHelper helper);


#endif