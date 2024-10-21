#include<stdio.h>
// using namespace std;
#define n 10
struct queue {
    int front;
    int back;
    int *arr;
    int size;
   
};
int isfull(struct queue *q)
{
    if (q->back == q->size -1)
    {
        return 1;
    }
    return 0;
    
}
int isempty (struct queue * q)
{
    if (q->front == q->back)
    {
        return 1;
    }
    return 0;
}
void enqueue (struct queue * q , int val)
{
    if (isfull(q))
    {
        printf("Queue Overflow");
    }
    else 
    {
        q->back++;
        q->arr[q->back] = val;
        printf("%d enqueued\n",val);
    }
}
int dequeue (struct queue * q)
{
    int a =-1;
    if (q->front == -1 && q->front == q->back)
    {
        printf("Queue is empty");
    }
    else 
    {
        q->front++;
        a = q->arr[q->front];
        printf("%d dequeued\n",a);
    }
    return a ;
    
}
int main()
{
    struct queue q;
    int m;
    printf ("Enter the size ");
    scanf("%d",&m);
    q.size = m;
    q.front = q.back = -1;
    q.arr = (int*) malloc(q.size*(sizeof(int)));

    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30);
    enqueue(&q,40);
    enqueue(&q,50);
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);

}