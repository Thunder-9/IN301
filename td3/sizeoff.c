/*
 * sizeoff.c
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
#include <stdlib.h>
int main(int argc, char **argv)
{	
	unsigned int a=sizeof(char);
	unsigned int b=sizeof(int);
	unsigned int c=sizeof(double);
	unsigned int d=sizeof(char*);
	unsigned int e=sizeof(void*);
	unsigned int f=sizeof(int*);
	unsigned int g=sizeof(double*);	
	unsigned int h=sizeof(int**);
	unsigned int i=sizeof(int[10]);
	unsigned int j=sizeof(char[7][3]);
	char tab[10];
	char (*p)[10] = &tab;
	unsigned int y=sizeof(p);
	unsigned int x=sizeof(*p);
	unsigned int z=sizeof((*p)[2]);
	unsigned int w=sizeof(&(*p)[2]);	
	
	printf("%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,\n",a,b,c,d,e,f,g,h,i,j);
	printf("%u,%u,%u,%u,",y,x,z,w);
	return 0;
}

