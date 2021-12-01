#include<stdio.h>
  2 #include<stdlib.h>
  3 struct node
  4 {
  5 int data;
  6 struct node*link;
  7 };
  8 struct node*top=NULL,*cur,*temp;
  9 
 10 void push(int ele)
 11 {
 12 cur = (struct node*)malloc(sizeof(struct node));
 13 cur->data=ele;
 14 if(top ==NULL)
 15   cur->link=NULL;
 16 else
 17 {
 18   cur->link=top;
 19 }
 20   top=cur;
 21 
 22 }
 23 int pop()
 24 {
 25 temp=top;
 26 if(top==NULL)
 27   printf("stack is empty\n");
 28 else
 29   top=top->link;
 30   return(temp->data);
 31   free(temp);
 32 }
 33 int peek()
 34 {
 35 return(top->data);
 36 }
 37 void display()
 38 {
 39 temp=top;
 40 while(temp!=NULL)
 41 {
 42 printf("%d\n",temp->data);
 43 temp=temp->link;
 44 }
 45 }
int main()
 47 {
 48 int ch,ele;
 49 while(1)
 50 {
 51    printf("1.push\n 2.pop\n 3.peek\n 4.display\n 5.exit\n");
 52    printf("enter your choice\n");
 53    scanf("%d",&ch);
 54    switch(ch)
 55    {
 56    case 1: printf("enter element to be inserted\n");
 57            scanf("%d",&ele);
 58            push(ele);
 59            break;
 60    case 2: printf("deleted element is %d",pop());
 61            break;
 62    case 3: if(top == NULL)
 63               printf("stack is empty\n");
 64            else
 65               printf("top element is %d",peek());
 66            break;
 67    case 4: if(top == NULL)
 68              printf("stack is empty\n");
 69            else
 70             {
 71              display();
 72             }
 73             break;
 74     case 5: exit(0);
 75 }
 76 }
 77 }
-- INSERT --                                                                                                                        77,2          Bot

//output//
1.push
 2.pop
 3.peek
 4.display
 5.exit
enter your choice
1
enter element to be inserted
1
1.push
 2.pop
 3.peek
 4.display
 5.exit
enter your choice
1
enter element to be inserted
2
1.push
 2.pop
 3.peek
 4.display
 5.exit
enter your choice
1
enter element to be inserted
3
1.push
 2.pop
 3.peek
 4.display
 5.exit
enter your choice
1
enter element to be inserted
4
1.push
 2.pop
 3.peek
 4.display
 5.exit
enter your choice
1
enter element to be inserted
5
1.push
 2.pop
 3.peek
 4.display
 5.exit
enter your choice
1
enter element to be inserted
6
1.push
 2.pop
 3.peek
 4.display
 5.exit
enter your choice
4
6
5
4
3
2
1
1.push
 2.pop
 3.peek
 4.display
 5.exit
enter your choice
3
top element is 61.push
 2.pop
 3.peek
 4.display
 5.exit
enter your choice
2
deleted element is 61.push
 2.pop
 3.peek
 4.display
 5.exit
enter your choice
5
