#include<iostream>
using namespace std;
struct node{
  int data;
  node *next;
};
int main()
{
  node *first = new node();
  node *second = new node();
  node *third = new node();
  first->data = 100;
  second->data = 150;
  third->data = 200;
  first->next = second;
  second->next = third;
  third->next = nullptr;
  node *current = first;
  while(current != nullptr)
  {
    cout<<current->data;
    cout<<endl;
    cout<<current->next;
    cout<<endl;
    current = current->next;
  }




}
