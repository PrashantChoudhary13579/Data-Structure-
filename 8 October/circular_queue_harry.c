#include<stdio.h>
#include<stdlib.h>
struct queue {
    int front;
    int rear;
    int * arr;
    int size;
};
int isempty(struct queue *q)
{
    //&& q->front == q->rear
    if (q->front == -1 )
    {
        return 1;
    }
    return 0;
    
} 
int isfull(struct queue * q)
{
    if ((q->rear +1 ) % q->size == q->front)
    {
        return 1;
    }
    return 0;
    
}
void enqueue (struct queue *q , int val)
{
    if (isfull(q))
    {
        printf("Queue is overflow\n");
    }
    else{
        q->rear++;
        q->rear = (q->rear +1)%q->size;
        q->arr[q->rear] = val;
        printf("%d Enqueued\n", val);
    }
    
}
int dequeue(struct queue * q )
{
    int a =-1;
    if (isempty(q))
    {
        printf("Queue is empty\n");
    }
    else{
        q->front++;
        q->front = (q->front + 1) % q->size;
        a = q->arr[q->front];
        printf("%d dequeued\n",a);
    }
    return a;
}
int main()
{
    struct queue q;
    int m;
    // printf("Enter the size ");
    // scanf("%d",&m);
    // q.size= m;
    q.front = q.rear = -1;
    q.arr = (int*) malloc(q.size* sizeof(int));
    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30);
    enqueue(&q,40);
    enqueue(&q,50);

    dequeue(&q);
    dequeue(&q);
    dequeue(&q);
}