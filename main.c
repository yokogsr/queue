#include <stdio.h>
#include <stdlib.h>

#define capacity 5
int queue[capacity];
int front =0;
int rare =0;

void insert();
void earse();
void display();

int main()
{
int ch;
while(1)

{


printf("1.insert an element\n");
printf("2.delet an elemnetn\n");
printf("3.display an element\n");
printf("Enter operation u want to do:\n");
scanf("%d",&ch);



switch (ch)
{
case(1):
insert();
break;
case(2):
earse();
break;
case(3):
display();
break;
default:printf("invalid input");
break;
}

}
return 0;
}

void insert(){
int ele;
if(rare==capacity-1){
    printf("queue is full\n");
}
else{
    printf("Enter the element\n");
    scanf("%d",&ele);
    queue[rare]=ele;
    rare++;

}
}
void earse()
{
int i;
if(rare==front)
{
    printf("queue is empty\n");
}
else
{
printf("deleted element is %d\n",queue[front]);
for(i=0;i<rare;i++)
{
    queue[i]=queue[i+1];
}
rare--;
}
}
void display()
{
    int i;
    if (front==rare)
    {
        printf("queue is empty\n");
    }else
    printf("queue element is \n");
    for(i=front;i<rare;i++)
    {
        printf("%d\n",queue[i]);
    }
}
