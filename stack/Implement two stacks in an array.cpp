/*Your task is to implement  2 stacks in one array efficiently.

 

Example 1:

Input:
push1(2)
push1(3)
push2(4)
pop1()
pop2()
pop2()

Output:
3 4 -1

Explanation:
push1(2) the stack1 will be {2}
push1(3) the stack1 will be {2,3}
push2(4) the stack2 will be {4}
pop1()   the poped element will be 3 
from stack1 and stack1 will be {2}
pop2()   the poped element will be 4 
from stack2 and now stack2 is empty
pop2()   the stack2 is now empty hence -1 .
*/

//CODE:
void twoStacks :: push1(int x)
{
  top1++;
  arr[top1]=x;
  
}
   
//Function to push an integer into the stack2.
void twoStacks ::push2(int x)
{
    top2--;
    arr[top2]=x;

}
   
//Function to remove an element from top of the stack1.
int twoStacks ::pop1()
{
if(top1==-1)
{
    return -1;
}
else
{
    return arr[top1--];
}
}

//Function to remove an element from top of the stack2.
int twoStacks :: pop2()
{
    if(top2==size)
    {
        return -1;
    }
    else
    {
        return arr[top2++];
    }

}

