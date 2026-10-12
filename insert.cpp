#include<iostream>
using namespace std;
int main()
{
  int a[10] = {45,23,89,12,67,34,11,9,75,50};
  int n = 10;
  for(int i = 0 ; i <10 ;i++)
  {
       cout<<a[i]<<" ";
      
  }
  for(int i = 0 ; i <n-1 ; i++){

  
  for(int j = 0 ; j< n-i-1 ; j++)
  {
    if (a[j] > a[j+1])
    {
int temp = a[j];
a[j] = a[j+1];
a[j+1] = temp;
    }
  }
}
cout<<endl;
cout<<"***\tArrange in ascending order***";
cout<<endl;
for(int i =0; i<n;i++)
{
  cout<<a[i]<<" ";
}
}
