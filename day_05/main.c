#include "BFS.h"

int main() {
    int i;
    graphType* G9;
    G9 = (graphType*)malloc(sizeof(graphType));
    createGraph(G9);

    // 그래프 G9 구성 : 정점 u에 대한 간선(u,v)는 v가 큰 것부터 삽입
    for(i=0;i<7;i++) 
        insertVertex(G9,i);
    insertEdge(G9,0,2);
    insertEdge(G9,0,1);
    insertEdge(G9,1,4);
    insertEdge(G9,1,3);
    insertEdge(G9,1,0);
    insertEdge(G9,2,4);
    insertEdge(G9,2,0);
    insertEdge(G9,3,6);
    insertEdge(G9,3,1);
    insertEdge(G9,4,6);
    insertEdge(G9,4,2);
    insertEdge(G9,4,1);
    insertEdge(G9,5,6);
    insertEdge(G9,6,5);
    insertEdge(G9,6,4);
    insertEdge(G9,6,3);
    printf("\n G9의 인접 리스트");
    print_adjList(G9);        // G9 인접 리스트를 확인용 출력

    printf("\n\n///////////////\n\n 너비 우선탐색>>");

    BFS_adjustList(G9,0);        //0번 정점인 정점 A에서 깊이 우선 탐색 시작

    
    return 0;
}