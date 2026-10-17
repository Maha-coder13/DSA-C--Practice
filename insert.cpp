#include<iostream>
using namespace std;
struct node
{
  int value;
  node *next;
};
void start(node* &head , int data)
{
  node *newnode = new node();
  newnode->value = data;
  newnode->next = head;
  head = newnode;
}
void func(node *head)
{
  node *current = head;
  while(current != nullptr) 
  {
    cout<<current->value;
    cout<<endl;
    cout<<current->next;
    cout<<endl;
    current = current->next;
  }
}
int main()
{
  node *head = nullptr;
  start(head , 30);
  start(head,20);
  start(head , 10);
  func(head);

}

