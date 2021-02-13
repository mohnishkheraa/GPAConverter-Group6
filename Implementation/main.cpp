#include<iostream>
#include "convert.h"
static int count =1;
using namespace std;
void introduction(){

cout<<"\t\t\t\t\t  \tWELCOME\n\n";

cout<<"*****************************************THIS IS A GPA CALCULATOR*******************************************************\n\n";

cout<<"PLEASE ENTER GRADES FROM A TO F.....\n\n";
}
int main()
{ int sem;


cout<<"enter number of semester ";
cin>>sem;
for(int i=0;i<sem;i++){

    //This program calculates ccgpa
    int n; //This is number of subjects
    if(count==1)
    introduction();
    cout<<"\n\ncurrent semester is "<<i+1;
    cout<<"\n\nEnter the number of subjects ";
    
    cin>>n;
	while(n<=0){
	cout<<"\nenter a positive number:\n";
	cin>>n;
}
    count++;
    convert(n);
}
}
