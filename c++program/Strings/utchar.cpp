#include<iostream>
#include<map>

using namespace std;

int main()
{
  int max=0;
  char prev;
  string k;
  cout<<"enter any string"; 
  cin>>k;
  map<char,int> m;
  for(int i=0;i<k.size();i++) m[k[i]]++;
  map<char,int>::iterator itr;
  for(itr=m.begin();itr!=m.end();++itr){
    cout<<itr->first<<" == "<<itr->second<<endl;
     if(itr->second>max){
      max = itr->second;
      prev = itr->first;
    }
  }
  cout<<"Maximum occuring character is "<<prev<<endl;
}