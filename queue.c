#include<stdio.h>
#include<stdlib.h>
struct queue
{
    int size;
    int f;
    int r;
    int*arr;
};
int isEmpty(struct queue *q){
    if(q->r== q->f){
        return 1;
    }
    return 0;
}
int isFull(struct queue *q){
    if(q->r == q->size-1){
        return 1;
    }
        return 0;
    }
void enqueue(struct queue *q , int val){
    if(isFull(q)){
        printf("queue is full can't add..\n");
    }
    else{
        q->r++;
        q->arr[q->r] = val;
    printf("%d value is added into queue\n", val);
    }
}
int dequeue(struct queue*q){
    int a=-1;
    if(isEmpty(q)){
        printf("queue is empty\n");
    }
    else{
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}
int main(){
    struct queue q;
    q.size = 10;
    q.f = q.r = 0;
    q.arr =(int*)malloc(q.size*sizeof(int));
    enqueue(&q, 1);
    enqueue(&q ,2);
    enqueue(&q ,3);
    enqueue(&q ,4);
    enqueue(&q ,4);
    enqueue(&q ,4);
    enqueue(&q ,4);
    enqueue(&q ,4);
    enqueue(&q ,4);
    enqueue(&q ,4);
    enqueue(&q ,4);
    // dequeue(&q);
    if(isEmpty(&q)){
        printf("queue is empty\n");
    }
    if(isFull(&q)){
        printf("queue is full\n");
    }

    return 0;
}