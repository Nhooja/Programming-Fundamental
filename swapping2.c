/*
Student Name: Nhooja Sayami
Subject: Programming Fundamental
Roll: 
Lab No:
Programme: 
Date:
*/

#include<stdio.h>


int main(){
		int	a, b;
		
		printf("Enter the value of a and b\n");
			scanf("%d %d", &a, &b);
 
		printf("Before Swapping\na = %d\nb = %d\n",a,b);
 
			a	=	a + b;
			b	=	a - b;
			a	=	a - b;
 
		printf("After Swapping\na = %d\nb = %d\n",a,b);
		return 0;
}
