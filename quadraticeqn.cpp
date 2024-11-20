#include<iostream>
#include<math.h>
using namespace std;

void SolveQuadraticEqn(double a , double b, double c)
{
    if (a == 0){
        cout<< "This is not a quadratic equation. "<<endl;
        return ;
    }
    double dis = b * b - 4 * a * c;

    if ( dis > 0){
        //real roots
        double root1 = -b - sqrt(dis) / (2 * a);
        double root2 = -b + sqrt(dis) / (2 * a);
        cout<< "The roots are real and distinct : "<<root1 <<", "<<root2 <<", "<<endl;

    }
    
    else if (dis == 0){
        double root = - b/(2 * a );
        cout<<"The root is real and repeated :"<<root <<endl;
    }

    else {
        // dis < 0 -->> real part and imaginary part 
        double realPart = -b / (2 * a );
        double imaginaryPart = sqrt(-dis) /(2 * a );
        cout <<"The roots are complex: "<<realPart <<" + "<<imaginaryPart<<" i "<<", "<<realPart<<" - "<<imaginaryPart<<" i"<<endl; 
    }

    
}


int main(){
    double a, b , c;
    cout<<"Enter coefficients a , b, c: ";
    cin>>a>> b>> c;
    SolveQuadraticEqn(a, b, c);
    return 0;

}