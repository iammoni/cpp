#include <iostream>
#include<cmath> //for round function

using namespace std;

float roundoff(float var,unsigned char prec){
    float pow_10=pow(10.0f,(float)prec);
    return round(var*pow_10)/pow_10;
}

int main() {
   cout<<roundoff(234.5618,3);
}