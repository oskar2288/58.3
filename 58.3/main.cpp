//Autor: Marcin Przyby³
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main(int argc, char** argv)
{
 int liczbaRekordow=0;
 ifstream file1;
  ifstream file2; 
   ifstream file3;  
 ofstream fileOut; 
 char* endptr; 
 long liczba, max1, max2, max3; 
 string liczba1, liczba2, liczba3, liczba4, liczba5, liczba6; 
 long liczbaI, liczbaII, liczbaIII;
 file1.open("dane_systemy1.txt"); 
  file2.open("dane_systemy2.txt"); 
   file3.open("dane_systemy3.txt"); 
 fileOut.open("wyjscie.txt"); 
 bool pierwszy = true;  
 bool rekord1 = false;
 bool rekord2 = false;
 bool rekord3 = false;
 
 
 if(file1.good() &&	file2.good() && file3.good()) 
     while(!file1.eof())        
     {
					rekord1=false;
             		file1>>liczba1 >> liczba2;  
              		liczbaI =  strtol(liczba2.c_str(), &endptr, 2);
                 
                    if(pierwszy)
             	   {
              	        max1 = liczbaI;
                        pierwszy = false;
                        rekord1 = true; 
             	   }
             	               		 	
             		  
                   if(liczbaI > max1)
				   { 
                    	max1 = liczbaI; 
                    	rekord1 = true;
                   }
                                      
                   if(rekord1)
                   {
                   	liczbaRekordow++;
				   }
				   
   
				   
          }
                    while(!file2.eof())        
     {

     					rekord2=false;	
     	               file2>>liczba3 >> liczba4; 

     	               liczbaII =  strtol(liczba4.c_str(), &endptr, 4);

     	            if(pierwszy)
             	   {
              	        max2 = liczbaII;
                        pierwszy = false;
                        rekord2 = true;
             	   }
             	     
                   		
                	if(liczbaII > max2)
				   { 
                    	max2 = liczbaII; 
                    	rekord2 = true;
                   }
     	
     	
     	                   
                   if(rekord2)
                   {
                   	liczbaRekordow++;
				   }
				   
				   
				   
				   
     }
          while(!file3.eof())        
     {

	 			rekord3=false;
               file3>>liczba5 >> liczba6; 
			     
               liczbaIII =  strtol(liczba6.c_str(), &endptr, 8);

              
            	   if(pierwszy)
             	   {

              	        max3 = liczbaIII;
                        pierwszy = false;
                        rekord3 = true;
             	   }
             	   
 
                 
                   
                   		
                    if(liczbaIII > max3)
				   { 
                    	max3 = liczbaIII; 
                    	rekord3 = true;
                   }
                   
                   
                   if(rekord3)
                   {
                   	liczbaRekordow++;
				   }
                   
                   

      }
 fileOut<< "58.3: " << liczbaRekordow <<endl; 
 file1.close();
  file2.close();
   file3.close();
 fileOut.close();
 cout<<"liczba rekordow :  "<<liczbaRekordow;
 return 0;
}
