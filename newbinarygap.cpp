#include <iostream>
#include <vector>
#include <bits/stdc++.h>
//#include <algorithm>

using namespace std;

int solution(int64_t &);

int main()
{
	int64_t input;
	
	cin>>input;
	cout<<"\n"; 
	
		cout<<solution(input)<<"\n";	
	
	return 0;
}


int solution(int64_t &N)
{
	vector<int> inarr;
	vector<int> outarr;
	int temp=0,counter=0,result=0;
		
	/*first convert the integer to binary*/
	while(N!=0){
		temp= N % 2;
		inarr.push_back(temp);
		N=N/2;
	}
	reverse(inarr.begin(),inarr.end());
	
	//display the binary form
	for(auto j :inarr)
		cout<<j;
cout<<"\n";

//find the next "1" den subtract the index i from 
//   index m( where m keeps the previous position of i)
	auto len=inarr.size();
	size_t j,m=0;
	for(size_t i=1;i<len;i++){
		if(inarr[i]==1){
		  		int temp= i - (m+1);
		  		
		  		outarr.push_back(temp);
		  		m=i; 
		    }
		}
	
	//select the largest value in outarr	
 	auto outsize=outarr.size();
 	for(auto j=0;j<outsize;j++)
 	{
 		if(outarr[j]>result)
 			result=outarr[j];
	 }
	 
	 return result;
}
