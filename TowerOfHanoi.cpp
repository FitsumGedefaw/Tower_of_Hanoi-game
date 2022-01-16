#include<iostream>
#include <math.h>
using namespace std;
class Stack
{
private:
int arr[30];
int top;
public:
 Stack(){
     top = -1;
    for(int i = 0; i < 30; i++){
    arr[i] = 0;} 
}

bool isEmpty(){
    if(top == -1)
        return true;
    else
        return false;
}

bool isFull(){
    if(top == 29)
        return true;
    else
        return false;
}

void push(int num){
    if(isFull())
    {
        cout<< "Stack overflow!";
    }
    else{
    top++;
    arr[top] = num;
    }
}

void pop(){
    if(isEmpty())
    {
        cout<< "Stack underflow!";
    }
    else{
        arr[top] = 0;
        top--;
    }
}

void printStack(){
    int temp = top;
    for(int i = temp; i>=0; i--)
    {
    cout<<arr[temp] <<" ";
    temp--;
    }
    cout<<endl;
}
int val(int index)
{
    return arr[index];

}
int topValue()
{
  return arr[top];
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
                
            do
            {
               string s1, s2, s3;
           for(int i = n-1; i >= 0; i--)
           {
             if(rod1.val(i) == 0)
              s1 = " ";
              else
              s1 = to_string(rod1.val(i));

              if(rod2.val(i) == 0)
              s2 = " ";
              else
              s2 = to_string(rod2.val(i));

              if(rod3.val(i) == 0)
              s3 = " ";
              else
              s3 = to_string(rod3.val(i));
             
            // cout<<"\xb2   \xb2   \xb2   \xb2   \xb2   \xb2\n\xb2 " <<s1 <<" \xb2   \xb2 " <<s2 <<" \xb2   \xb2 " <<s3 <<" \xb2\n\xb2___\xb2   \xb2___\xb2   \xb2___\xb2\n";
             cout<<"                                  \xb2   \xb2   \xb2   \xb2   \xb2   \xb2\n                                  \xb2 " <<s1 <<" \xb2   \xb2 " <<s2 <<" \xb2   \xb2 " <<s3 <<" \xb2\n                                  \xb2___\xb2   \xb2___\xb2   \xb2___\xb2\n";
           }
                cout<<"1.Press 12 to move disk from rod1 to rod2.     2.Press 13 to move disk from rod1 to rod3." <<endl;
                cout<<"3.Press 21 to move disk from rod2 to rod1.     4.Press 23 to move disk from rod2 to rod3." <<endl;
                cout<<"5.Press 31 to move disk from rod3 to rod1.     6.Press 32 to move disk from rod3 to rod2." <<endl;
                cout<<"                                   7.Enter 0 to Exit" <<endl;
                cout<<"Enter Here: ";
                cin>>m;
                switch(m)
                {
                  case 12:
                  if(rod1.isEmpty())
                  {
                    cout <<"Wrong Move! Rod 1 is Empty." <<endl;
                  }
                  else if(!rod2.isEmpty() && rod1.topValue() > rod2.topValue())
                  {
                    cout<<"Wrong Move! You can't move larger number on the top of smaller number." <<endl;
                  }
                  
                  else
                  {
                    rod2.push(rod1.topValue());
                    rod1.pop();
                  }
                  counter++;
                  break;
                  case 13:
                  if(rod1.isEmpty())
                  {
                    cout <<"Wrong Move! Rod 1 is Empty." <<endl;
                  }
                   else if(!rod3.isEmpty() && rod1.topValue() > rod3.topValue())
                  {
                    cout<<"Wrong Move! You can't move larger number on the top of smaller number." <<endl;
                  }
                 else
                    {
                       rod3.push(rod1.topValue());
                        rod1.pop();
                    }
                  counter++;
                  break;
                  case 21:
                  if(rod2.isEmpty())
                  {
                    cout <<"Wrong Move! Rod 2 is Empty." <<endl;
                  }
                   else if(!rod1.isEmpty() && rod2.topValue() > rod1.topValue())
                  {
                    cout<<"Wrong Move! You can't move larger number on the top of smaller number." <<endl;
                  }
                  else
                    {
                      rod1.push(rod2.topValue());
                  rod2.pop();
                    }
                  counter++;
                  break;
                  case 23:
                  if(rod2.isEmpty())
                  {
                    cout <<"Wrong Move! Rod 2 is Empty." <<endl;
                  }
                   else if(!rod3.isEmpty() && rod2.topValue() > rod3.topValue())
                  {
                    cout<<"Wrong Move! You can't move larger number on the top of smaller number." <<endl;
                  }
                  else
                    {
                      rod3.push(rod2.topValue());
                  rod2.pop();
                    }
                  counter++;
                  break;
                  case 31:
                  if(rod3.isEmpty())
                  {
                    cout <<"Wrong Move! Rod 3 is Empty." <<endl;
                  }
                   else if(!rod1.isEmpty() && rod3.topValue() > rod1.topValue())
                  {
                    cout<<"Wrong Move! You can't move larger number on the top of smaller number." <<endl;
                  }
                  else
                  {
                    rod1.push(rod3.topValue());
                    rod3.pop();
                  }
                  counter++;
                  break;
                  case 32:
                  if(rod3.isEmpty())
                  {
                    cout <<"Wrong Move! Rod 3 is Empty." <<endl;
                  }
                  else if(!rod2.isEmpty() && rod3.topValue() > rod2.topValue())
                  {
                    cout<<"Wrong Move! You can't move larger number on the top of smaller number." <<endl;
                  }
                  else
                  {
                    rod2.push(rod3.topValue());
                    rod3.pop();
                  }
                  counter++;
                  break;
                  case 0:
                  break;

                }
                if(gameCompleted(rod1, rod2, rod3, counter, allowedMoves))
                  {
                    cout<<"Bravo! You won the game." <<endl;
                    m = 0;
                  }
                else if((counter == allowedMoves) && !gameCompleted(rod1, rod2, rod3, counter, allowedMoves))
                {
                  cout<<"Game Over!" <<endl;
                  m = 0;
                }
               
            }
            while(m !=0);


    
    return 0;
}
