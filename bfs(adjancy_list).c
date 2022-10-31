#include <stdio.h>
#include <malloc.h>
#include<stdlib.h>
#define SIZE 10
//int adj_m[SIZE][SIZE];
int vis[SIZE];

struct ll_node
{
    int vertex;
    struct ll_node *next;
};
struct ll_node *adj[SIZE]; 

struct queue1
{
    int a[SIZE];
    int front,rear;
}q1;
void enqueue(int x)
{
    if(q1.front==-1)
    {
        q1.front++;
        q1.rear++;
        q1.a[q1.front]=x;
        return;
    }
    q1.rear++;
    q1.a[q1.rear]=x;
    return;
}
int dequeue()
{
    int t;
    t=q1.a[q1.front];
    q1.front++;
    return t;
}

void bfs(int s)
{
    int p;
    enqueue(s);
    vis[s]=1;
    p=dequeue();
    if(p!=0)
    {
        printf("\t%d",p);
    }
    while(p!=0)
    {
        while(adj[p]!=NULL && vis[adj[p]->vertex]==0)
        {
            enqueue(adj[p]->vertex);
            vis[adj[p]->vertex]=1;
            adj[p]=adj[p]->next;
        }
        p=dequeue();
        if (p!=0)
        {
            printf("\t%d",p);
        }
    }
}

struct ll_node* creategraph(struct ll_node *temp, int x)
{
    struct ll_node *new1;
    new1=(struct ll_node*)malloc(sizeof(struct ll_node));
    new1->vertex=x;
    new1->next=temp;
    temp=new1;
    return(temp);
}

int main()
{
    int node, edges, sp, ep, sv;
    struct ll_node *hp;
    //struct queue1 q1;
    q1.front=-1;
    q1.rear=-1;
    printf("Hello BFS- Queue\n");
    
    for(int i=1;i<=SIZE;i++)
    {
        vis[i]=0;
    }
    
    for(int i=1;i<=SIZE;i++)
    {
        adj[i]=NULL;
    }
    
    printf("Insert No. of Nodes\n");
    scanf("%d",&node);
    printf("Insert No. of Edges\n");
    scanf("%d",&edges);
    for(int i=1;i<=edges;i++)
    {
        printf("Enter the start point\n");
        scanf("%d",&sp);
        printf("Enter the end point\n");
        scanf("%d",&ep);
        
        //adj_m[sp][ep]=1;
        //adj_m[ep][sp]=1;
        
        adj[sp]=creategraph(adj[sp],ep);
        adj[ep]=creategraph(adj[ep],sp);
        
        
    }
    printf("Adjacency List");
    for(int i=1;i<=SIZE;i++)
    {
        hp=adj[i];
        printf("\n");
        while(hp!=NULL)
        {
            printf("%d->",hp->vertex);
            hp=hp->next;
        }
    }
    
    printf("\nEnter the source vertex\n");
    scanf("%d",&sv);
    
    bfs(sv);
    
    return 0;
}
