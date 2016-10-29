#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main(int argc, string argv[])
{
    int i,y,z;
    
    if (argc !=2)           //�������� �� ��������� �������� �������� ��������
    {
       	printf ("try again!");
    	return 1;
    }
    string key = argv[1];
    
    if (k==NULL)            //�������� �� ������ ����� ��������
    {
        printf ("write something!");
    	return 1;
    }
   
    
    for (i = 1; i < strlen(key); i++)
    {
       if (!isalpha(key[i]))     //�������� �� �� ������ ������� � ���������� �������
           {
               printf ("try again!");
               return 1;
           }
    }
    string text = get_string();
      
    if (text==NULL)       //�������� �� ��������� �����, ���� ������� ����������
           {
               printf ("Print some words");
               return 1;
           }
    for ( y = 0,z = 0; y < strlen(text);y++)
           {
    	if (isalpha(text[y])) //�������� �� �� ������ ������� � ���������� �������
            {
    		 if (isupper(text[y]))  //�������� �� ������ �����
                 
    			printf("%c", ((((text[y] - 'A') + ((toupper(key[z++%strlen(key)]))-'A')%26) % 26) + 'A'));
            
    		if (islower(text[y]))   //�������� �� ���� �����
                
    			printf("%c", ((((text[y] - 'a') + ((tolower(key[z++%strlen(key)]))-'a')%26) % 26) + 'a'));

           }
            else
     		printf("%c", text[y]);

           }
       		 printf("\n");
    		return 0;   
        
}