#include<stdio.h> 
//using namespace std;

#define aa 50 

int push();
int pop();
int stack_print();

int arr[aa],top=0;

int main()
{
    int n=1,ck;

    while(n){
       
        printf("1--> push\n");
        printf("2--> pop\n");
        printf("3--> exit\n");
        
        printf("select opction : ");
        scanf("%d",&ck);

        switch(ck){

            case 1:
            push();
            stack_print();
            break;

            case 2:
            pop();
            stack_print();
            break;

            case 3:
            printf("if n==0 then this program off...\n");
            scanf("%d",&n);
            if(n==0)
            break;
        }

    }
}

int push()
{
    int val;
    printf("push element : ");
    scanf("%d",&val); 

    if(top>=aa){
        printf("stack is full...\n");
    }
    else{
        arr[top++]=val;
    }

}

int stack_print()
{
    int i;
    printf("stack element : ");
    
    for(i=0; i<top; i++){

        printf("%d ", arr[i]);
    }
    printf("\n");
}

int pop()
{
    if(top<=0){
        printf("stack is empty...\n");
    }
    else{
        
        top--;
        printf("top element : %d\n", arr[top]);
    }
}
