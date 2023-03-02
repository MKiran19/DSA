#include<stdio.h>
#include<conio.h>
#define MAX 10
int st[MAX],top=-1;
void push(int ele)
{
    
    st[++top]=ele;
}
int pop()
{
    return st[top--];
}
void show()
{
    int i;
    printf("\n\tStack is: ");
    for(i=0;i<=top;i++)
    printf("\t%d",st[i]);
}
int menu()
{
    int ch;
    printf("\nMenu: ");
    printf("1.Push");
    printf("\t2.Pop");
    printf("\t3.Show");
    printf("\t4.Quit");
    printf("\n\tChoice: ");
    scanf("%d",&ch);
    return ch;
}
int main()
{
    int ch,ele;
    do
    {
        ch = menu();
        switch(ch)
        {
            case 1: if(top == MAX-1) printf("\n\tStack overflows!");
            else
            {
                printf("\tElement: ");
                scanf("%d",&ele);
                push(ele);
                printf("\n\tPushed at %d",top);
            }
            break;
            case 2: if(top==-1) printf("\n\tStack underflows!");
            else printf("\n\t%d is poped",pop());
            break;
            case 3: if(top==-1) printf("\n\tStack underflows!");
            else show();
            break;
            case 4: printf("\n\tQuitted!");break;
            default:printf("\n\tInvalid Choice");
        }
        printf("\n\tPRESS ANY KEY TO CONT..");
        fflush(stdin);
        getch();
        
    }
    while(ch!=4);
}
