/*
 * sont amis.c
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

int sontamis(int n,int m)
{
	
	int i;
	int sommeN=0;
	int sommeM=0;
	
	
	for(i=1;i<n;i++){
		if (n%i==0)
			sommeN+=i;
		
}

	if (sommeN==m){
		for (i=1;i<m;i++){
			if (m%i==0)
				sommeM+=i;
		}
	if (sommeM==n){
		printf("%d et %d sont amis",n,m); return 1;}}
		
printf("%d et %d ne sont pas amis",n,m); return 0;}

int main() {
	
nmax=284;
int n;
int m;

	for(n=1;n<nmax+1;n++){
		for (m=n;m<nmax;m++){
			if sontamis(n,m)==1 printf("[%d,%d] \n",i,j);}}
			
return 0;			


}


	
	
	
	



		
	
	
	
	
	
	
	
