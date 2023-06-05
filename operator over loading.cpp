#include<iostream>
using namespace std;


class Rectangle
{
	private:
		
	double length; 
	double width;
	
	public:
		
		Rectangle():length(0),width(0)
		{
			cout<<"default once"<<endl;
			
		}
		Rectangle(double t_w,double t_l):length(t_l),width(t_w)
		{
		
			
			
		//	cout<<"paramitrized once"<<endl;
		}
		void display(){
		
			cout<<"results"<<length<<endl<<width<<endl;
		}
		Rectangle operator + (Rectangle obj){
		double temp1 = width + obj.width;
		 double temp2 = length + obj.length;
		
		return Rectangle(temp1,temp2);
		}
		
};
int main(){
	Rectangle r1(2,3),r2(5,6),sum;
	sum=r1+r2;
	sum.display();
	
}
