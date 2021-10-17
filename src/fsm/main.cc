// Copyright 2021 MIT
// Authors: Xuhao Chen <cxh@mit.edu>
#include "fsm.h"

int main(int argc, char *argv[]) {
  if (argc < 2) {
    std::cout << "Usage: " << argv[0] << " <filename> [max_num_edges(2)] [min_support(5000)]\n";
    std::cout << "Example: fsm_omp_base /mico/graph 2 300\n";
    exit(1);
  } 
  int k = 2;
  if (argc > 2) k = atoi(argv[2]);
  int minsup = 5000;
  if (argc > 3) minsup = atoi(argv[3]);
  std::cout << "Frequent Subgraph Mining (undirected graphs), ";
  std::cout << "max_size = " << k << ", ";
  std::cout << "min_support = " << minsup << "\n";

  Graph g(argv[1], 0, 1);
  auto m = g.num_vertices();
  auto nnz = g.num_edges();
  int nlabels = g.get_vertex_classes();
  std::cout << "|V| " << m << " |E| " << nnz << "\n";
  std::cout << "Number of unique labels: " << nlabels << "\n";
  int num_freqent_patterns = 0;
  FsmSolver(g, k, minsup, nlabels, num_freqent_patterns);
  std::cout << "Number of frequent patterns: " << num_freqent_patterns << "\n";
  return 0;
}

