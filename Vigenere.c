#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main(int argc, string argv[])
{
    int i,y,z;
    
    if (argc !=2)           //check if argument isn't 2
    {
       	printf ("try again!");
    	return 1;
    }
    string key = argv[1];
    
    if (k==NULL)            //check whether the code word written
    {
        printf ("write something!");
    	return 1;
    }
   
    
    for (i = 1; i < strlen(key); i++)
    {
       if (!isalpha(key[i]))     //check whether all the input characters are symbols of the alphabet
           {
               printf ("try again!");
               return 1;
           }
    }
    string text = get_string();
      
    if (text==NULL)       //check  if text is written
           {
               printf ("Print some words");
               return 1;
           }
    for ( y = 0,z = 0; y < strlen(text);y++)
           {
    	if (isalpha(text[y]))       //check whether all the input characters are symbols of the alphabet
            {
    		 if (isupper(text[y]))  //checking in large letters
                 
    			printf("%c", ((((text[y] - 'A') + ((toupper(key[z++%strlen(key)]))-'A')%26) % 26) + 'A'));
            
    		if (islower(text[y]))   //checking in small letters
                
    			printf("%c", ((((text[y] - 'a') + ((tolower(key[z++%strlen(key)]))-'a')%26) % 26) + 'a'));

           }
            else
     		printf("%c", text[y]);

           }
       		 printf("\n");
    		return 0;   
        
}