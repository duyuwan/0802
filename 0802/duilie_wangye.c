#include<stdio.h>
#define N 200    //预设队列大小
int queue[N];
int flag=0;                 //队列标识 0为不存在，1为存在
int front=0,rear=0;   //队列头，队列尾


void creat()    //创建队列
{
 int i;
    if(flag==1)
 {printf("队列已经存在。");}
 else
 {
 for(i=0;i<6;i++)
    {
  printf("输入初始化的第%d数:",i);
  scanf("%d",&(queue[i]));
    }
    rear=5; flag=1;
 }
}




void enqueue()     //进队列
{
 if(flag==0)
 {printf("当前还没有队列，请先创建队列：");}
 else
 {
 printf("输入进入队列的元素：");
 scanf("%d",&queue[rear+1]);
 rear++;
 }
}


void gethead()    //出队列
{
  int i;
 if(flag==0)
 {printf("当前还没有队列，请先创建队列：");}
 else
 {
 printf("出队列的元素：%d",queue[front]);
 front++;
 printf("\n出列后的队列为：");
 for(i=front;i<=rear;i++)
 {printf("%d  ",queue[i]);}
 }
}


void print()    //打印当前队列
{
int i;
 printf("\n当前队列为：");
 for(i=front;i<=rear;i++)
 {
  printf("%d  ",queue[i]);
 }

}


int main()
{
 int servse=-1;   //服务标识
 while(servse!=0)
 {
  printf("\n1.创建队列\n");
  printf("2.元素进队\n");
  printf("3.元素出列\n");
  printf("4.打印队列\n");
  printf("0.退出\n");
  printf("选择：");
  scanf("%d",&servse);
  switch(servse)
  {
  case 1:creat();break;
  case 2:enqueue();break;
  case 3:gethead();break;
  case 4:print();break;
  case 0:return 0;break;
  }
}
return 0;
}
