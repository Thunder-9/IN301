/*
 * limit.c
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
#include  <math.h>
int main(int argc, char **argv)
{
int i =3;
int sn=1;
double sn2=0.25;
double somme=sn+sn2;
double E= pow(10,-6);
	while(fabs(sn2-sn)>E){
		
		sn=sn2;
		sn2=1/(pow(i,2));
		i+=1;
		somme+=sn2;
		
}
		
	printf("somme =%f",somme);	
	
	
	
return 0;
}

