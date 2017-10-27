#include <iostream>
#include <sstream>
#include <utility>
#include <stdlib.h>
using namespace std;

bool str(float *st,int n)
{
	bool k=true;
	string t;
	getline(cin,t);
	istringstream stream(t);
	for(int i = 0; i<n; i++)
	{
		if(!(stream>>st[i]))
		{k = false;
		return false;}
	}
   return true;
 } 
 
 void sort (float* st, int n, int e) 
 {
   for (unsigned int i=0; i<n; i++) 
	{
	  for (unsigned j=i+1; j<n; j++) 
		{
		  if (st[i] > st[j])
			{
			 swap (st[i], st[j]);
			 e=e+5;
			}
		}
			if (e==0){cout << "An error has occured while input data";exit(0);
		}
	}
	
}
 void print_st(float * st, unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
	{
		cout << st[i] << " ";
	}
}
 int main()
 {

unsigned int n;
int e;
cin>>n;
cin.get();
float *st = new float[n];
if(str(st, n))
	{ 
		sort(st, n, e);
		print_st(st, n);
		cin.get();
		}
	}	
 
