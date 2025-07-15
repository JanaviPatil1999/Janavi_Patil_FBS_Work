#include<stdio.h>
//6. Write a C program to find the square and cube of a given number.
int SquareNumber(int side);
int main(){
	int side;
	printf("Enter the side: ",side);
	scanf("%d",&side);
	
	int cube=FindingCube(side);
	printf("Cube: %d\n",cube);
	int square=findingSquare(side);
	printf("Square: %d",square);
	
}
int FindingCube(int side){
	int cube;
	cube=side*side*side;
	return cube	;		
}
int findingSquare(int side){
	int square;
	square=side*side;
	return square;	
	}