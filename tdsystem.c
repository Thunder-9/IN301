/*
 * tdsystem.c
 * 
 * Copyright 2017 user <user@user-VirtualBox>
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

#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


void main(){
int tmp;

int titi;
int toto;
toto=open("toto",O_RDONLY);
titi=open("titi",O_CREAT | O_WRONLY | S_IRUSR | IWUSR);
while (read(toto,&tmp,1)){
	write(titi,&tmp,1);
	}
close(toto);
close(titi);
}

	
	



