// Student ID: 20274909

#include <string>
#include <sstream>
#include <math.h>
#include <vector>
#include <iostream>
#include "Graph.h"

using namespace std;

//int main()
//{
//   Graph test = Graph();
//   test.make_mr_sticky();
//}

Graph* Graph::add_edge(int src, int dst, string tag) {
   _nodes[src].push_back(Edge(dst, tag));
   return this;
}

string Graph::to_string() const {
   string output = "";
   for (int i = 0; i < _nodes.size(); i++) {
      if (_nodes[i].empty()) {
         continue;
      }
      output += "Node " + std::to_string(i) + ":\n";
      for (int j = 0; j < _nodes[i].size(); j++) {
         output += "   dst:" + std::to_string(_nodes[i][j]._dst) + " tag:" + _nodes[i][j]._tag + "\n";
      }
   }
   return output;
}

void Graph::make_silly_snake() {
   this->clear_and_resize(6);
   this->add_edge(0, 1, "i-see")
      ->add_edge(1, 2, "the-silly-snake")
      ->add_edge(2, 3, "i-be")
      ->add_edge(3, 4, "you-saw-me")
      ->add_edge(4, 5, "once-like")
      ->add_edge(5, 0, "kekule");
      cout << this->to_string();
}

void Graph::make_mr_sticky() {
   this->clear_and_resize(7);
   this->add_edge(0, 1, ".")
      ->add_edge(1, 2, ".")
      ->add_edge(1, 3, ".")
      ->add_edge(1, 4, ".")
      ->add_edge(4, 5, ".")
      ->add_edge(4, 6, ".");
   cout << this->to_string();
}

void Graph::make_driftin_dragonfly() {
   this->clear_and_resize(13);
   this->add_edge(0, 1, "dis-be-me-head")
      ->add_edge(1, 2, "me")
      ->add_edge(2, 3, "long-tail")
      ->add_edge(3, 4, "be-dis")
      ->add_edge(1, 5, "dis-be-me")
      ->add_edge(5, 6, "front-right")
      ->add_edge(6, 7, "me-right")
      ->add_edge(7, 8, "back")
      ->add_edge(8, 2, "be-dis")
      ->add_edge(1, 9, "dis-be-me")
      ->add_edge(9, 10, "front-left")
      ->add_edge(10, 11, "and-left")
      ->add_edge(11, 12, "back")
      ->add_edge(12, 2, "be-dis");
   cout << this->to_string();
}

void Graph::make_slinky_star() {
   this->clear_and_resize(15);
   this->add_edge(0, 1, "-")
      ->add_edge(1, 2, "-")
      ->add_edge(0, 3, "-")
      ->add_edge(3, 4, "-")
      ->add_edge(0, 11, "-")
      ->add_edge(11, 12, "-")
      ->add_edge(0, 7, "-")
      ->add_edge(7, 8, "-")
      ->add_edge(0, 5, "-")
      ->add_edge(5, 6, "-")
      ->add_edge(0, 9, "-")
      ->add_edge(9, 10, "-")
      ->add_edge(0, 13, "-")
      ->add_edge(13, 14, "-");
   cout << this->to_string();
}

void Graph::make_kathy_da_grate() {
   this->clear_and_resize(15);
   this->add_edge(0, 5, "-")
      ->add_edge(5, 6, "-")
      ->add_edge(0, 1, "-")
      ->add_edge(1, 7, "-")
      ->add_edge(7, 8, "-")
      ->add_edge(1, 2, "-")
      ->add_edge(2, 9, "-")
      ->add_edge(9, 10, "-")
      ->add_edge(2, 3, "-")
      ->add_edge(3, 11, "-")
      ->add_edge(11,12, "-")
      ->add_edge(3, 4, "-")
      ->add_edge(4, 13, "-")
      ->add_edge(13, 14, "-")
      ->add_edge(4, 0, "-");
   cout << this->to_string();
}

void Graph::make_dodos_in_space() {
   clear_and_resize(50);
   for (int i = 0; i < _nodes.size(); i++) {
      if (i % 2 == 0) {
         add_edge(i, i + 1, "Yippee-Dodo-#" + std::to_string(i));
      }
   }
   cout << this->to_string();
}

void Graph::make_purty_pitcher() {
   clear_and_resize(17);
   this->add_edge(0, 1, "-")
      ->add_edge(1, 2, "-")
      ->add_edge(2, 3, "-")
      ->add_edge(3, 4, "-")
      ->add_edge(4, 5, "-")
      ->add_edge(5, 6, "-")
      ->add_edge(6, 0, "-")
      ->add_edge(5, 14, "-")
      ->add_edge(14, 15, "-")
      ->add_edge(15, 1, "-");
      //->add_edge(7, 1, "-")
      //->add_edge(5, 8, "-")
      //->add_edge(8, 6, "-")
      //->add_edge(1, 9, "-")
      //->add_edge(9, 10, "-")
      //->add_edge(10, 11, "-")
      //->add_edge(5, 13, "-")
      //->add_edge(13, 12, "-")
      //->add_edge(12, 11, "-");
}