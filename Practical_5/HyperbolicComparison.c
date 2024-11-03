#include<stdio.h>
#include<math.h>

//Maclaurin Series
double arctanh1(double x, double precision){
    double result = 0.0, val = x;
    
    for(int i=0; fabs(val) > precision ; i++){
        val = (pow(x, (2 * i + 1)) / (2 * i + 1));
        result += val;
    }
    return result;
}



//Natural logarithm
double arctanh2(double x){
    return 0.5 * (log(1 + x) - log(1 - x));
}


//Comparison function
int compare(double arctanh1, double arctanh2){
    arctanh1 = round(arctanh1 * 1e10) / 1e10;
    arctanh2 = round(arctanh2 * 1e10) / 1e10;
    return fabs(arctanh1 - arctanh2) <= 1e-10;
}




int main(){
    
    double precision;
     printf("Enter the delta : ");
     scanf("%lf", &precision);
    
    
    
    
    //x -> -0.9 to 0.9 sampled every 0.01
    
    for(double x=-0.9 ; x < 0.91 ;x += 0.01){

        if(compare(arctanh1(x, precision), arctanh2(x))){
            printf("%0.2lf - is a Match\n", x);
        }
        else{
            printf("%0.2lf - is not a Match\n", x);
        }
        
    }
    
    
    
}