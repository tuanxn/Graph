// Student ID: 20274909

#include <string>
#include <sstream>
#include <math.h>
#include <vector>
#include <iostream>

using namespace std;

#ifndef Graph_h
#define Graph_h

class Graph {
protected:
   struct Edge {
      int _dst;
      std::string _tag;
      Edge(int dst = -1, std::string tag = "") : _dst(dst), _tag(tag) {}
   };
   std::vector<std::vector<Edge> > _nodes;
   // Suggested private helpers. Not tested.
   Graph* add_edge(int src, int dst, std::string tag);
   void clear_and_resize(int size) {
      _nodes.clear(); _nodes.resize(size);
   }
   std::string to_string() const;
public:
   void make_silly_snake();
   void make_mr_sticky();
   void make_driftin_dragonfly();
   void make_slinky_star();
   void make_kathy_da_grate();
   void make_dodos_in_space();
   void make_purty_pitcher();
   friend class Tests; // Don't remove this line.
};

#endif