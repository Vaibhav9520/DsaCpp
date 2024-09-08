#include <iostream>
using namespace std;

class Edge {
public:
    int source;
    int destination;
    int weight;

    Edge(int s, int d, int w){
        this->source = s;
        this->destination = d;
        this->weight = w;
    }
};

int main() {
    int V=5;
    
    Edge *graph[V];
    for (int i = 0; i < V; i++) {
        graph[i] = nullptr;
    }

    // 0 - vertex
    graph[0] = new Edge(0, 1, 5);

    // 1 - vertex
    graph[1] = new Edge(1, 0, 5);
    graph[1] = new Edge(1, 2, 1);
    graph[1] = new Edge(1, 3, 3);


    // 2 - vertex
    graph[2] = new Edge(2, 1, 1);
    graph[2] = new Edge(2, 3, 1);
    graph[2] = new Edge(2, 4, 4);
    

    // 3 - vertex
    graph[3] = new Edge(3, 1, 3);
    graph[3] = new Edge(3, 2, 1);
    
    
    // 4 - vertex
    graph[4] = new Edge(4, 2, 2);

    // 2 neighbors
    for (int i = 0; i < V; i++) {
        if (graph[i] != nullptr) {
            std::cout << graph[i]->destination << std::endl;
        }
    }

    // Don't forget to free memory
    for (int i = 0; i < V; i++) {
        delete graph[i];
    }

    return 0;
}
