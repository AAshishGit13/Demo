#include<stdio.h>
#include<math.h>
#define MAXSTACK 4

void push(int);
int pop();

int STACK[MAXSTACK],TOP=-1;

void push(int op)
{
  if(TOP==MAXSTACK-1)
  {
    printf("\nOverflow Condition");
    return;
  }
  TOP++;
  STACK[TOP] = op;
}

int pop()
{
  int temp;
  if(TOP==-1)
  {
    printf("\nUnderflow Condition");
    return -1;
  }
  temp = STACK[TOP];
  TOP--;
  return temp;
}

 int main()
{
  int A,B,option,operand,result;
  char choice='Y',operator;
  while(choice=='Y' || choice=='y')
  {
    printf("\n1. Operand\n2.Operator\nEnter your option no. ");
    fflush(stdin);
    scanf("%d",&option);

    if(option==1)
    {
      printf("\nEnter the operand value: ");
      fflush(stdin);
      scanf("%d",&operand);
      push(operand);
    }

    if(option==2)
    {
      printf("\nEnter the operator: ");
      fflush(stdin);
      scanf("%c",&operator);

      A = pop();
      B = pop();

      switch(operator)
      {
	case '^': result=pow(B,A);
		  break;
	case '*': result= B * A;
		  break;
	case '/': result= B / A;
		  break;
	case '+': result= B + A;
		  break;
	case '-': result= B - A;
		  break;
      }
      push(result);
    }//End of if(option==2)

    printf("\nDo you wish to continue input of an operand or operator(Y/N): ");
    fflush(stdin);
    scanf("%c",&choice);
  }//End of while loop body

  result = pop();
  printf("\nThe value of the Postfix Expression is %d",result);
   
}