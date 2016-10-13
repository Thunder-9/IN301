/*
 * estpremier.c
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
#include <math.h>
int main()
{
int x=10;
int i;
float borne= sqrt(x);
for (i=2;i<(borne+1);i++){
	if (x%i==0){ 
	printf(" %d n'est pas premier",x);return 0;
		

	
}}
	
	
	
	printf("%d est premier",x)	; 
	return 1;
}

