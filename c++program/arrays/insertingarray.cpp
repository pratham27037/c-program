#include<iostream>
 
using namespace std;
 
int main()
{
    int i,a[50],no,pos,size;
    cout<<"Enter array size( Max:50 ) ";
    cin>>size;
        cout<<"\nEnter array elements  \n";
 
        for(i=0; i<size; i++)
        {
                cin>>a[i];
        }
 
  cout<<"\nStored Data in Array :: \n\n";
 
  for(i=0;i<size;i++)
  {
  cout<<" "<<a[i]<<" ";
  }
 
  cout<<"\n\nEnter position to insert number :: ";
  cin>>pos;
 
  if(pos>size)
  {
    cout<<"\nThis is out of range.\n";
  }
  else
  {
    cout<<"\nEnter number to be inserted :: ";
    cin>>no;
    --pos;
 
  for(i=size;i>=pos;i--)
  {
    a[i+1]=a[i];
  }
  a[pos]=no;
 
  cout<<"\nNew Array is :: \n\n";
 
  for(i=0;i<size+1;i++)
  {
    cout<<" "<<a[i]<<" ";
  }
 
  }
  cout<<"\n";
 
  return 0;
 
  }