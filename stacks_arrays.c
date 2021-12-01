    #include<stdio.h>
  2 #include<stdlib.h>
  3 #define SIZE 5
  4 int top = -1,stack[SIZE];
  5 void push(int ele)
  6 {
  7     stack[++top]=ele;
  8 }
  9 int pop()
 10 {
 11     return(stack[top--]);
 12 }
 13 int peek()
 14 {
 15     return(stack[top]);
 16 }
 17 int display()
 18 {
 19     for(int i=top;i>=0;i--)
 20         printf("%d\n",stack[i]);
 21 }
 22 int main()
 23 {
 24     int ch,ele;
 25     while(1)
 26         {
 27             printf("1.push\n 2.pop\n 3.peek\n 4.display\n 5.exit\n");
 28             printf("enter your choice\n");
 29             scanf("%d",&ch);
 30          switch(ch)
 31           {
 32             case 1:if(top == SIZE-1)
 33                         printf("stack is full\n");
 34                    else
 35                      {
 36                         printf("enter element to be inserted\n");
 37                         scanf("%d",&ele);
 38                         push(ele);
 39                      }
 40                      break;
 41              case 2:if(top = -1)
 42                         printf("stack is empty\n");
 43                     else
                             {
 45                         printf("deleted element is %d",pop());
 46                     }
 47                     break;
 48              case 3:if(top == -1)
 49                         printf("stack is full\n");
 50                     else
 51                         printf("top element is %d",peek());
 52                         break;
 53             case 4:if(top == 1)
 54                         printf("stack is empty\n");
 55                    else
 56                    {
 57                         display();
 58                    }
 59                    break;
 60             case 5:exit(0);
 61   }
 62  }
    }
//output//

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
1
enter element to be inserted
7
1.push
 2.pop
 3.peek
 4.display
 5.exit
enter your choice
4
7
6
5
4
3
1.push
 2.pop
 3.peek
 4.display
 5.exit
enter your choice
3
top element is 71.push
 2.pop
 3.peek
 4.display
 5.exit
enter your choice
2
deleted element is 71.push
 2.pop
 3.peek
 4.display
 5.exit
enter your choice
5
                                                                                       

