#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
#include<cstdio>

using namespace std;

int d=45;

int main() {

      // ******Build in Data types******
     
     //int a,b,c,d;
     //cout<<"Type the first number: \n";
     //cin>>a;
     
     //cout<<"Type the second number: \n";
     //cin>>b;
     
     //cout<<"Type the third number: \n";
     //cin>>c;

     //d=a+b+c;
     //cout<<"The sum of three numbers is: "<<d<<endl;
     //cout<<"The global d is: "<<::d<<endl;

     // ******Float, double and long double Literals******

      // float e=34.4f;
      // long double f=34.4l;

      // cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
      // cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
      // cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
      // cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
      // cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
      // cout<<"The value of e is: "<<e<<endl<<"The value of f is: "<<f<<endl; 

      // ******Reference Variables******

      // Rohan Das ----> Monty ----> Rohu ----> Dangerous Coder
      // float x = 455;
      // float & y = x;
      // cout<<x<<endl;
      // cout<<y<<endl;

      // ******Typecasting******
      int a = 45;
      float b = 45.46;

      cout<<"The Value of a is: "<<(float)a<<endl;
      cout<<"The Value of a is: "<<float(a)<<endl;

      cout<<"The Value of b is: "<<(int)b<<endl;
      cout<<"The Value of b is: "<<int(b)<<endl;

      int c = int(b);

      cout<<c<<endl;

      cout<<"The expression is: "<<a + b<<endl;
      cout<<"The expression is: "<<a + int(b)<<endl;
      cout<<"The expression is: "<<a + (int)b<<endl;

      return 0; 
}
