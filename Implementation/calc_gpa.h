#include<iostream>
#include "calc_percentage.h"
using namespace std;
int calc_gpa(float gpasum, int n){//This function calculates the gpa and percentile
float percentile;//FINAL PERCENTILE
static float cgpa=0;
static int count=1;
float gpa;//FINAL GPA
gpa=gpasum/n;
cgpa=cgpa+gpa;
if(count!=1)
cgpa=cgpa/2;
count++;
cout<<"YOUR GPA IS :"<<gpa<<"\n";
cout<<"Your cgpa is :"<<cgpa<<"\n";
calc_percentage(gpa);
return 0;

}
