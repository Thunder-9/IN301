/*
 * permut.c
 * 
 * Copyright 2016 Tristan <tristan@Thunder>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>

void permut(int *x,int *y){
	int z;
	z=*x;
	*x=*y;
	*y=z;
		
		
		
	
		
}
void reinitPointeur(int** p){
*p = NULL;
}

int main(){
	
//	int a=5;
//	int b=15;
	
//permut(&a,&b); 

//printf("a=%d,b=%d",a,b);	
int a = 1;
int *p = &a;
reinitPointeur(&p);	
printf("%p",p);
return 0;
	
}
