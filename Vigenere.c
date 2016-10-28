#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main(int argc, string argv[])
{
    int i,y,z;
    
    if (argc !=2)
    {
       	printf ("try again!");
    	return 1;
    }
    string k = argv[1];
    
    if (k==NULL)
    {
        printf ("write something!");
    	return 1;
    }
   
    
    for (i = 1; i < strlen(k); i++)
    {
       if (!isalpha(k[i]))
           {
               printf ("try again!");
               return 1;
           }
    }
    string text = get_string();
      
    if (text==NULL)
           {
               printf ("Print some words");
               return 1;
           }
    for ( y = 0,z = 0; y < strlen(text);y++)
           {
    	if (isalpha(text[y]))
            {
    		 if (isupper(text[y]))
    			printf("%c", ((((text[y] - 'A') + ((toupper(k[z++%strlen(k)]))-'A')%26) % 26) + 'A'));
            
    		if (islower(text[y]))
    			printf("%c", ((((text[y] - 'a') + ((tolower(k[z++%strlen(k)]))-'a')%26) % 26) + 'a'));

           }
            else
     		printf("%c", text[y]);

           }
       		 printf("\n");
    		return 0;
        
}