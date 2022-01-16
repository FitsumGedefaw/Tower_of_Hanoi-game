#include<iostream>
#include <math.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    
};
class Stack
{
  public:
  Node* top = NULL;
bool isEmpty()
{
    if(top == NULL)
    return true;
    else 
    return false;
}

void push(int num)
{
   Node* temp = new Node();
   temp->data = num;
   temp->next = top;
   top = temp; 
}
void pop()
{
  if(isEmpty())
  {
    std ::cout<<"the stack is empty\n";
    return;
  }
  else
   {
     Node* temp = top;
  top = top->next;
  delete temp;
   }
}
int topValue()
{
    if(isEmpty())
    {
        return -1;
    }
    else
  return top->data;
}
void printStack()
{
    if(isEmpty())
    {
    //  std :: cout<<"The stak is empty\n";
    cout<<endl;
      return;
    }
    else
    {
      Node* temp = top;
      while ( temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    }
    
}

};
bool gameCompleted(Stack rod1, Stack rod2, Stack rod3, int a, int b)
{
  if((a <= b && rod1.isEmpty() && rod2.isEmpty()) ||  (a <= b && rod1.isEmpty() && rod3.isEmpty()))
    return true;
    else
    return false;
}
int main()
{

            Stack rod1;
            Stack rod2;
            Stack rod3;
             int n, m;
             int counter = 0;
            cout<<"Enter the number of Disks: ";
                cin>>n;
                int allowedMoves = (pow(2,n) - 1) + 3;
                for(int i=n; i>0;i--)
                {
                  rod1.push(i);
                }
                rod2.push(2);
                rod1.
      
            Node* temp1 = rod1.top;
            Node* temp2 = rod2.top;
            Node* temp3 = rod3.top;
          
            string s1, s2, s3;
            for(int i = 0; i < n; i++)
              {
                if(!rod1.isEmpty() && rod2.isEmpty() && rod3.isEmpty() )
                {
                  s1 = to_string(temp1->data);
                  s2 = " ";
                  s3 = " ";
                  cout<<"\xb2   \xb2   \xb2   \xb2   \xb2   \xb2\n\xb2 " <<s1 <<" \xb2   \xb2 " <<s2 <<" \xb2   \xb2 " <<s3 <<" \xb2\n\xb2___\xb2   \xb2___\xb2   \xb2___\xb2\n";
                 temp1 = temp1->next;
                }
                else if(!rod1.isEmpty() && !rod2.isEmpty() && rod3.isEmpty() )
                {
                  s1 = to_string(temp1->data);
                  s2 = to_string(temp2->data);
                  s3 = " ";
                  cout<<"\xb2   \xb2   \xb2   \xb2   \xb2   \xb2\n\xb2 " <<s1 <<" \xb2   \xb2 " <<s2 <<" \xb2   \xb2 " <<s3 <<" \xb2\n\xb2___\xb2   \xb2___\xb2   \xb2___\xb2\n";
                 temp1 = temp1->next;
                 temp2 = temp2->next;
                }

                // temp2 = temp2->next;
                // temp3 = temp3->next;
              }
            
             

                



            //     for(int i=0; i<n; i++)
            //  {
            //     // cout<<"                                  \xb2   \xb2   \xb2   \xb2   \xb2   \xb2\n                                  \xb2___\xb2   \xb2___\xb2   \xb2___\xb2\n";
            //     cout<<"\xb2   \xb2   \xb2   \xb2   \xb2   \xb2\n\xb2___\xb2   \xb2___\xb2   \xb2___\xb2\n";
            //  }
            // do
            // {
            //     cout<<"Rod 1: ";
            //  rod1.printStack();
            //  cout<<"Rod 2: ";
            //  rod2.printStack();
            //  cout<<"Rod 3: ";
            //  rod3.printStack();
            //     cout<<"1.Press 12 to move disk from rod1 to rod2.     2.Press 13 to move disk from rod1 to rod3." <<endl;
            //     cout<<"3.Press 21 to move disk from rod2 to rod1.     4.Press 23 to move disk from rod2 to rod3." <<endl;
            //     cout<<"5.Press 31 to move disk from rod3 to rod1.     6.Press 32 to move disk from rod3 to rod2." <<endl;
            //     cout<<"                                   7.Enter 0 to Exit" <<endl;
            //     cout<<"Enter Here: ";
            //     cin>>m;
            //     switch(m)
            //     {
            //       case 12:
            //       if(!rod2.isEmpty() && rod1.topValue() > rod2.topValue())
            //       {
            //         cout<<"Wrong Move! You can't move larger number on the top of smaller number." <<endl;
            //       }
            //       else
            //       {
            //         rod2.push(rod1.topValue());
            //         rod1.pop();
            //       }
            //       counter++;
            //       break;
            //       case 13:
            //        if(!rod3.isEmpty() && rod1.topValue() > rod3.topValue())
            //       {
            //         cout<<"Wrong Move! You can't move larger number on the top of smaller number." <<endl;
            //       }
            //      else
            //         {
            //            rod3.push(rod1.topValue());
            //             rod1.pop();
            //         }
            //       counter++;
            //       break;
            //       case 21:
            //        if(!rod1.isEmpty() && rod2.topValue() > rod1.topValue())
            //       {
            //         cout<<"Wrong Move! You can't move larger number on the top of smaller number." <<endl;
            //       }
            //       else
            //         {
            //           rod1.push(rod2.topValue());
            //       rod2.pop();
            //         }
            //       counter++;
            //       break;
            //       case 23:
            //        if(!rod3.isEmpty() && rod2.topValue() > rod3.topValue())
            //       {
            //         cout<<"Wrong Move! You can't move larger number on the top of smaller number." <<endl;
            //       }
            //       else
            //         {
            //           rod3.push(rod2.topValue());
            //       rod2.pop();
            //         }
            //       counter++;
            //       break;
            //       case 31:
            //        if(!rod1.isEmpty() && rod3.topValue() > rod1.topValue())
            //       {
            //         cout<<"Wrong Move! You can't move larger number on the top of smaller number." <<endl;
            //       }
            //       else
            //       {
            //         rod1.push(rod3.topValue());
            //         rod3.pop();
            //       }
            //       counter++;
            //       break;
            //       case 32:
            //        if(!rod2.isEmpty() && rod3.topValue() > rod2.topValue())
            //       {
            //         cout<<"Wrong Move! You can't move larger number on the top of smaller number." <<endl;
            //       }
            //       else
            //       {
            //         rod2.push(rod3.topValue());
            //         rod3.pop();
            //       }
            //       counter++;
            //       break;
            //       case 0:
            //       break;

            //     }
            //     if(gameCompleted(rod1, rod2, rod3, counter, allowedMoves))
            //       {
            //         cout<<"Bravo! You won the game." <<endl;
            //         m = 0;
            //       }
            //     else if((counter == allowedMoves) && !gameCompleted(rod1, rod2, rod3, counter, allowedMoves))
            //     {
            //       cout<<"Game Over!" <<endl;
            //       m = 0;
            //     }
               
            // }
            // while(m !=0);


    
    return 0;
}
