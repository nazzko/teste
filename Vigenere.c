/*This program shifr text  with a key word 
Compile on https://run.cs50.net/ */

#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
// n is a number of letters in  alphabet
#define n 26 
#define C 'A'
#define c 'a'


int main(int argc, string argv[])
{
    int i,y,z;
    
    if (argc !=2)	//check if argument isn't 2
    {
       	printf ("try again!");
    	return 1;
    }
    string k = argv[1];
    
    if (k==NULL)	  //check whether the key word written
    {
        printf ("Please write only letters in key");
    	return 1;
    }
   
    
    for (i = 1; i < strlen(k); i++)
    {
        //check whether all the input characters are symbols of the alphabet
       if (!isalpha(k[i]))
           {
               printf ("try again!");
               return 1;
           }
    }
    string text = get_string();
      
    if (text==NULL)	//check  if text is written 
           {
               printf ("Print some words");
               return 1;
           }
    for ( y = 0,z = 0; y < strlen(text);y++)
           {
               //check whether all the input characters are symbols of the alphabet
    	if (isalpha(text[y]))
            {
                //checking in large letters
    		 if (isupper(text[y]))
                    
    			printf("%c", ((((text[y] - C) + ((toupper(k[z++%strlen(k)]))-C)%n) % n) + C));
             	//checking in small letters
    		if (islower(text[y]))
    			printf("%c", ((((text[y] - c) + ((tolower(k[z++%strlen(k)]))-c)%n) % n) + c));

           }
            else
     		printf("%c", text[y]);

           }
       		 printf("\n");
    		return 0;
        
}