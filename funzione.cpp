#include<iostream>
using namespace std;
void calcolaMedia(double x, double y)
{
	double media;
	media=(x+y)/2;
	cout<<media;
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
 
