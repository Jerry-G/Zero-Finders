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

double finder(double low, double high){
  int counter = 0;
  //acceptable error
  double error = (double)1e-9;
  while( sign(f(low)) != sign(f(high)) ){
    if( abs(f(low)) < error) return low;
    if( abs(f(high)) < error) return high;

    double mid = (double)abs(high+low)/(double)2.0;

    if( abs(f(mid)) < error ) return mid;

    ( sign(f(low)) != sign(f(mid)) ) ? high=mid: low=mid;

    if(counter>10000)break;
    counter++;
  }
  return std::numeric_limits<double>::quiet_NaN();

}

int main(){
  printf("%.9f\n",finder(0,1000));
  return 0;
}

