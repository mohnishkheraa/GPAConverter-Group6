#include "calc_sum.h"

#include <iostream>
#include<cctype>
using namespace std;
int convert(int n) {//This coverts grades to integer 
    
    char ch[n];//creates a character array of size n
    for(int i=0;i<n;i++)//entering the grades
    {
        cout<<"enter the "<<i+1<<"th subject ";
           cin>>ch[i];
           ch[i]=toupper(ch[i]);
	if (ch[i]<65||ch[i]>70 ){
	cout<<"enter character from a to f\n";
	i--;
	}

    }
    int arr[n];
    for(int i=0;i<n;i++){
        if(ch[i]=='a'||ch[i]=='A')
        arr[i]=10;
        if(ch[i]=='b'||ch[i]=='B')
        arr[i]=9;
        if(ch[i]=='C'||ch[i]=='c')
        arr[i]=8;
        if(ch[i]=='D'||ch[i]=='d')
        arr[i]=7;
        if(ch[i]=='e'||ch[i]=='E')
        arr[i]=6;
        if(ch[i]=='F'||ch[i]=='f')
        arr[i]=0;
        

    }
calc_sum(arr,n);
return 0;
}
