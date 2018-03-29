#include <iostream>
#include<cmath>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	float num;
	float n=1;
	float eq1,eq2,eq3;
	float sqr=0;
	cout<<"please enter the number "<<endl;
	cin>>num;
	if(num<0)
	cout<<"please enter positive number"<<endl;
	else if(num==0)
	cout<<"sqrt is 0"<<endl;
	else
	{
      n=sqrt(num);
      eq1 = num - (n*n);     
      eq2 = eq1/(2.0*n);  
      eq3 = n+eq2;     
      sqr = eq3-((eq2*eq2)/(2.0*eq3));
    cout<< "sqrt root of number"<<num<<"="<<sqr ;
}
	return 0;
}
