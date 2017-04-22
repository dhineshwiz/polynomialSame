#include<stdio.h>
#include<stdlib.h>
int no;
struct node
{
    int num;
    int expo_x;
    int expo_y;
    struct node*next;
}*head1=NULL,*head2=NULL,*head3=NULL,*p,*q,*r,*temp;
void insert()
{
    int ch;
    printf("\n1.List 1\n2.List 2\nEnter your choice\t");
    scanf("%d",&ch);
    if(ch==1)
    {
        if(head1==NULL)
        {
            temp=(struct node*)malloc(sizeof(struct node));
            printf("\nEnter the co-efficient number and exponent power for x and y\t");
            scanf("%d %d %d",&(temp->num),&(temp->expo_x),&(temp->expo_y));
            temp->next=NULL;
            head1=temp;
            p=head1;
        }
        else
        {
            temp=(struct node*)malloc(sizeof(struct node));
            printf("\nEnter the co-efficient number and exponent power for x and y\t");
            scanf("%d %d %d",&(temp->num),&(temp->expo_x),&(temp->expo_y));
            p->next=temp;
            temp->next=NULL;
            p=temp;
        }
    }
    else if(ch==2)
    {
        if(head2==NULL)
        {
            temp=(struct node*)malloc(sizeof(struct node));
            printf("\nEnter the co-efficient number and exponent power for x and y\t");
            scanf("%d %d %d",&(temp->num),&(temp->expo_x),&(temp->expo_y));
            temp->next=NULL;
            head2=temp;
            q=head2;
        }
        else
        {
            temp=(struct node*)malloc(sizeof(struct node));
            printf("\nEnter the co-efficient number and exponent power for x and y\t");
            scanf("%d %d %d",&(temp->num),&(temp->expo_x),&(temp->expo_y));
            q->next=temp;
            temp->next=NULL;
            q=temp;
        }
    }

}
void display()
{
    int ch,i;
    printf("\nDisplay\n1.List 1\n2.List 2\n3.List 3\nEnter your choice");
    scanf("%d",&ch);
    if(ch==1)
    {
        i=0;
        p=head1;
        while(p!=NULL)
        {
            printf("\t%dx%dy%d",p->num,p->expo_x,p->expo_y);
            p=p->next;
            i++;
            if(i!=no)
                printf(" +");
        }
        printf("=0");
    }
    else if(ch==2)
    {
        i=0;
        p=head2;
        while(p!=NULL)
        {
            printf("\t%dx%dy%d",p->num,p->expo_x,p->expo_y);
            p=p->next;
            i++;
            if(i!=no)
                printf(" +");
        }
        printf("=0");

    }
    else if(ch==3)
     {
         i=0;
        p=head3;
        while(p!=NULL)
        {
            printf("\t%dx%dy%d",p->num,p->expo_x,p->expo_y);
            p=p->next;
            i++;
            if(i!=no)
                printf(" +");
        }
        printf("=0");
    }

}
int count()
{
    p=head1;
    int c=0;
    while(p!=NULL)
    {
        c++;
        p=p->next;
    }
    return c;
}
void addition()
{
    int i=1,a;
    no=count();
    while(i<=no)
    {
        if(head3==NULL)
        {
            temp=(struct node*)malloc(sizeof(struct node));
            temp->num=head1->num+head2->num;
            temp->expo_x=head1->expo_x;
            temp->expo_y=head1->expo_y;
            head3=temp;
            temp->next=NULL;
            r=head3;
            p=head1->next;
            q=head2->next;
        }
        else
        {
            temp=(struct node*)malloc(sizeof(struct node));
            temp->num=p->num+q->num;
            temp->expo_x=p->expo_x;
            temp->expo_y=p->expo_y;
            q=q->next;
            r->next=temp;
            temp->next=NULL;
            p=p->next;
            r=temp;
        }
        i++;
    }
}
int main()
{
    int ch,op;
    do
    {
        printf("\n1.Insertion\n2.Addition\n3.Display\t");
        scanf("%d",&op);
        switch(op)
        {
            case 1:insert();break;
            case 2:addition();break;
            case 3:display();break;
        }
        printf("\nEnter 1 to continue\t");
        scanf("%d",&ch);
    }while(ch==1);
    return 0;
}

