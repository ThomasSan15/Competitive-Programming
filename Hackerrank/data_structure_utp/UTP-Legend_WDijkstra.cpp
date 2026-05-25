//https://www.hackerrank.com/contests/data-structure-utp/challenges/utp-legend/problem

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAXV 100000
#define myInfinite 2147483647
#define NIL -1


struct edge
{
    int vertex;
    int weight;
    struct edge *next;
};

struct graph
{
    int n_vertices;
    int m_edges;
    struct edge *Adj[MAXV + 1];
};

struct nodePQ
{
    int vertex;
    int distance;
};


int Parent(int i)
{
    return i >> 1;
}


int Left(int i)
{
    return i << 1;
}


int Right(int i)
{
    return (i << 1) + 1;
}


void MinHeapify(struct nodePQ Q[], int i, int heapSize, int p[])
{
    int l, r, least, tempPosition;
    struct nodePQ tempNode;
    l = Left(i);
    r = Right(i);

    if((l <= heapSize) && (Q[l].distance < Q[i].distance))
        least = l;
    else
        least = i;

    if((r <= heapSize) && (Q[r].distance < Q[least].distance))
        least = r;

    if(least != i)
    {
        tempPosition = p[Q[i].vertex];
        tempNode = Q[i];

        p[Q[i].vertex] = p[Q[least].vertex];
        Q[i] = Q[least];

        p[Q[least].vertex] = tempPosition;
        Q[least] = tempNode;

        MinHeapify(Q, least, heapSize, p);
    }
}


int MinPQ_Extract(struct nodePQ Q[], int *heapSize, int p[])
{
    int vertexMinDistance = 0;

    if(*heapSize >= 1)
    {
        vertexMinDistance = Q[1].vertex;

        p[Q[*heapSize].vertex] = 1;
        Q[1] = Q[*heapSize];

        *heapSize = *heapSize - 1;
        MinHeapify(Q, 1, *heapSize, p);
    }
    return vertexMinDistance;
}


void MinPQ_DecreaseKey(struct nodePQ Q[], int i, struct nodePQ key, int p[])
{
    int tempPosition;
    struct nodePQ tempNode;

    if(key.distance < Q[i].distance)
    {
        Q[i] = key;
        while((i > 1) && (Q[Parent(i)].distance > Q[i].distance))
        {
            tempPosition = p[Q[i].vertex];
            tempNode = Q[i];

            p[Q[i].vertex] = p[Q[Parent(i)].vertex];
            Q[i] = Q[Parent(i)];

            p[Q[Parent(i)].vertex] = tempPosition;
            Q[Parent(i)] = tempNode;

            i = Parent(i);
        }
    }
}


void MinPQ_Insert(struct nodePQ Q[], struct nodePQ key, int *heapSize, int p[])
{
    *heapSize = *heapSize + 1;
    Q[*heapSize].distance = myInfinite;
    Q[*heapSize].vertex = key.vertex;
    p[key.vertex] = *heapSize;
    MinPQ_DecreaseKey(Q, *heapSize, key, p);
}


struct graph *ReadGraph(int vertices, int edges)
{
    int idVertex, idEdge, u, v, w = 1;
    struct graph *G;
    struct edge *tempEdge;

    G = (struct graph *) malloc(sizeof(struct graph));
    G->n_vertices = vertices;
    G->m_edges = edges;

    for(idVertex = 1; idVertex <= G->n_vertices; idVertex++)
        G->Adj[idVertex] = NULL;

    for(idEdge = 1; idEdge <= G->m_edges; idEdge++)
    {
        scanf("%d %d", &u, &v);
/*
        u++;
        v++;
*/
        tempEdge = (struct edge *) malloc(sizeof(struct edge));
        tempEdge->vertex = v;
        tempEdge->weight = w;
        tempEdge->next = G->Adj[u];
        G->Adj[u] = tempEdge;

        if(u != v)
        {
            tempEdge = (struct edge *) malloc(sizeof(struct edge));
            tempEdge->vertex = u;
            tempEdge->weight = w;
            tempEdge->next = G->Adj[v];
            G->Adj[v] = tempEdge;
        }
    }
    return G;
}


void PrintGraph(struct graph *G)
{
    int idVertex;
    struct edge *tempEdge;

    if(G != NULL)
    {
        printf("\n");
        printf("Graph representation using adjacency lists: \n\n");
        for(idVertex = 1; idVertex <= G->n_vertices; idVertex++)
        {
            printf("[%d]: ", idVertex);
            tempEdge = G->Adj[idVertex];
            while(tempEdge != NULL)
            {
                printf(" -> (%d, %d)", tempEdge->vertex, tempEdge->weight);
                tempEdge = tempEdge->next;
            }
            printf(" -> NULL\n");
        }
    }
    else
    {
        printf("\n");
        printf("Empty Graph.\n");
    }
}


struct graph *DeleteGraph(struct graph *G)
{
    int idVertex;
    struct edge *CurrentEdge, *NextEdge;

    for(idVertex = 1; idVertex <= G->n_vertices; idVertex++)
    {
        CurrentEdge = G->Adj[idVertex];
        while(CurrentEdge != NULL)
        {
            NextEdge = CurrentEdge->next;
            free(CurrentEdge);
            CurrentEdge = NextEdge;
        }
    }
    free(G);
    G = NULL;
    return G;
}


void Dijkstra(struct graph *G, int d[], int pi[], int s)
{
    int u, v, w, heapSize = 0;
    struct nodePQ Q[MAXV + 1], key;
    int p[MAXV + 1];
    struct edge *tempEdge;

    for(u = 1; u <= G->n_vertices; u++)
    {
        pi[u] = NIL;
       

        if(u == s)
            d[u] = 0;
        else
            d[u] = myInfinite;

        key.vertex = u;
        key.distance = d[u];
        MinPQ_Insert(Q, key, &heapSize, p);
    }

    while(heapSize >= 1)
    {
        u = MinPQ_Extract(Q, &heapSize, p);
        

        if(d[u] == myInfinite)
            break;

        tempEdge = G->Adj[u];
        while(tempEdge != NULL)
        {
            v = tempEdge->vertex;
            w = tempEdge->weight;

            if( (d[v] > d[u] + w))
            {
                d[v] = d[u] + w;
                pi[v] = u;
                key.vertex = v;
                key.distance = d[v];
                MinPQ_DecreaseKey(Q, p[v], key, p);
            }
            tempEdge = tempEdge->next;
        }
    }
}


void solver(struct graph *G, int U, int Se, int Sa, int D)
{
    int d_U[MAXV + 1], pi_U[MAXV + 1];
    int d_Se[MAXV + 1], pi_Se[MAXV + 1];
    int d_Sa[MAXV + 1], pi_Sa[MAXV + 1];
    int d_D[MAXV + 1], pi_D[MAXV + 1];
    int u , minDistanceSe, minDistanceSa, minDistanceD;
    int maxDistance = 0;

  
    
    Dijkstra(G, d_U, pi_U, U);
    Dijkstra(G, d_Se, pi_Se, Se);
    Dijkstra(G, d_Sa, pi_Sa, Sa);
    Dijkstra(G, d_D, pi_D, D);
      minDistanceSe = d_U[Se];
    minDistanceSa = d_U[Sa];
    minDistanceD = d_U[D];

    for(u = 1; u <= G->n_vertices; u++)
    {
       if(((d_Se[u] + d_U[u] ) == minDistanceSe) &&
           ((d_Sa[u] + d_U[u] ) == minDistanceSa) &&
        ((d_D[u] + d_U[u] ) == minDistanceD)  && 
        (maxDistance < d_U[u])){

            maxDistance = d_U[u];
        } 
    }

    printf("%d %d %d %d\n", maxDistance, d_U[Se] - maxDistance, d_U[Sa] - maxDistance, d_U[D] - maxDistance);


}


int main()
{
    int vertices, edges, U, Se, Sa, D;
    struct graph *G;


    scanf("%d %d %d %d %d %d", &vertices, &U, &Se, &Sa, &D, &edges);
        G = ReadGraph(vertices, edges);
        solver(G, U, Se, Sa, D);

    return 0;
}


/*
9 16
9 8 1
9 6 7
9 5 12
9 4 11
9 3 4
8 7 8
8 3 6
8 2 5
8 1 2
7 6 3
7 1 2
6 5 4
5 4 2
4 3 5
3 2 3
2 1 1
*/


/*
9 14
9 8 7
9 7 6
9 3 2
8 7 1
8 2 11
8 1 8
7 6 2
6 5 10
6 4 14
6 3 4
5 4 9
4 3 7
3 2 8
2 1 4
*/