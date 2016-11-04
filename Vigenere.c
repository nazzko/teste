/*This program shifr text  with a key word */

#include<stdio.h>
#include<cs50.h>
#include<string.h>

    if (key==NULL)            //check whether the key word written
    {
        printf ("write something!");
    	return 1;
    }     
    for (i = 1; i < strlen(key); i++)
    {
    	//check whether all the input characters are symbols of the alphabet
       if (!isalpha(key[i]))    
           {#include<stdlib.h>
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
    
               printf ("Please write only letters in key ");
               return 1;
           }
    }
    string text = get_string();
      
    if (text==NULL)       //check  if text is written                          |
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
    		 
                 //26 is a number of letters in  alphabet
    			printf("%c", ((((text[y] - 'A') + ((toupper(key[z++%strlen(key)]))-'A')%26) % 26) + 'A'));
				 
            //checking in small letters
    		if (islower(text[y]))                                                      
                
    			printf("%c", ((((text[y] - 'a') + ((tolower(key[z++%strlen(key)]))-'a')%26) % 26) + 'a'));

           }
            else
     		printf("%c", text[y]);

           }
    printf("\n");
    return 0;   
        
}