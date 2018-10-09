#include <iostream> //printing
#include <limits>   //NaN

//function to be solved
double f(double x){
  return x*x-10005;
}

//sign of number
int sign(double x){
  if (x > 0) return 1;
  if (x < 0) return -1;
  return 0;
}

//absolute value
double abs(double x){
  return (x<0)? -x : x;
}

//numerical derivative of f
double fPrime(double x){
  double h = (double)1e-3;
  return (f(x+h)-f(x))/h;
}

double NewtonFinder(double guess){

  double error = (double)1e-9;
  double currentRoot = guess;

  //if not found within 10000 return NaN 
  for (int i = 0; i < 10000; ++i) {
    if( abs( f(currentRoot) ) < error) return currentRoot;
    currentRoot -= f(currentRoot)/fPrime(currentRoot);
  }

  return std::numeric_limits<double>::quiet_NaN();

}


int main(){
  printf("%.9f\n",NewtonFinder(1000));
  return 0;
}

