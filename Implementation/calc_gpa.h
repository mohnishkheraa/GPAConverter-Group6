#include<iostream>
#include "calc_percentage.h"
using namespace std;
int calc_gpa(float gpasum, int n){//This function calculates the gpa and percentile
float percentile;//FINAL PERCENTILE
float gpa;//FINAL GPA
gpa=gpasum/n;

cout<<"YOUR GPA IS :"<<gpa<<"\n";
calc_percentage(gpa);
return 0;

}