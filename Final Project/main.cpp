#include "graph.hpp"

int main() {
    //Number of cities to list
    const int size = 8;
    //Initialize the graph
    Graph graph(size);

    //Populate the graph with test values
    graph.add_edge(0, 2, 500); //Sac to Portland
    graph.add_edge(0, 7, 400); //Sac to Las Vegas
    graph.add_edge(0, 1, 650); //Sac to Pheonix

    graph.add_edge(1, 6, 510); //Pheonix to Salt Lake City
    graph.add_edge(1, 4, 600); //Pheonix to Denver
    graph.add_edge(1, 5, 330); //Pheonix to Albuquerque
    graph.add_edge(1, 7, 260); //Pheonix to Las Vegas

    graph.add_edge(2, 8, 150); //Portland to Seattle
    graph.add_edge(2, 3, 340); //Portland to Boise
    graph.add_edge(2, 7, 760); //Portland to Las Vegas

    graph.add_edge(3, 8, 400); //Boise to Seattle
    graph.add_edge(3, 7, 520); //Boise to Las Vegas
    graph.add_edge(3, 6, 290); //Boise to Salt Lake City

    graph.add_edge(4, 6, 390); //Denver to Salt Lake City
    graph.add_edge(4, 5, 350); //Denver to Albuquerque

    graph.add_edge(6, 7, 370); //Salt Lake City to Las Vegas
    graph.add_edge(6, 5, 490); //Salt Lake City to Albuquerque
 
    //Print nodes adjacent to Sacramento
    graph.print_adjacent_airports(0);

    //Print nodes adjacent to Pheonix
    graph.print_adjacent_airports(1);
 
    return 0;
}
