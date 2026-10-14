#include<iostream>
using namespace std;
struct node{
  int data;
  node *next;

};
int main()
{
  node *head = new node();
  node *second = new node();
  head -> data = 10;
  second -> data = 20;
  head -> next = second;
  second -> next = nullptr;
  cout<<"first node data "<<head -> data;
  cout<<endl;
  cout<<"address of second node "<<head ->next;
  cout<<endl;
  cout<<"Second node data "<<second ->data;
  cout<<endl;
  cout<<"address of last node "<<second ->next;
}
