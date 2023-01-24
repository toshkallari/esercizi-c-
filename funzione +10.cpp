#include<iostream>
using namespace std;
void calcolaMedia(double x, double y)
{
	double media;
	double tt;
	
	media = (x+y)/2;
	tt=media+10;
	cout<<tt;
}
int main(){
	double x;
	double y;
	cout<<"inserisci il primo numero ";
	cin>>x;
	cout<<"inserisci il secondo numero ";
	cin>>y;

	calcolaMedia(x,y);
	
	return 0;
}
 
