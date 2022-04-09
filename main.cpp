#include<iostream>
#include<fstream>
#include"input.h"
#include"proses.h"
#include"output.h"
int main() 
{
	Input x;
	x.cetak();
	x.toFile();
	
	Proses y;
	y.getData();
	y.proses();
	
  
  	Output z;
  	z.getData();
  	z.cetak();
  	
}