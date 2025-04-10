/*
--------------------------------------------------
Project: a10q3
File:    algorithm.c
Author:  Antonio Taseski
Version: 2025-04-02
--------------------------------------------------
*/

#ifndef ALGORITHM_H
#define ALGORITHM_H

#include "edgelist.h"
#include "graph.h"

EDGELIST *mst_prim(GRAPH *g, int start);
EDGELIST *spt_dijkstra(GRAPH *g, int start);
EDGELIST *sp_dijkstra(GRAPH *g, int start, int end);

#endif