#include "calc_gpa.h"
#include <iostream>
using namespace std;
int calc_sum(int arr[],int n){//this function calculates the sum of all the gpa
    float gpasum=0; //sum of gpa's of all the subjects
    
    for(int i=0;i<n;i++){ //loop to calculate the sum
        gpasum=gpasum+arr[i];
    }
    
    calc_gpa(gpasum,n);
    return 0;

}
