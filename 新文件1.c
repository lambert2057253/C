#include <stdio.h>
void Inverted_Right();
void Right_Triangle();


int main()
{
    Right_Triangle();
    Inverted_Right();
    
    return 0;
	
} 
void Right_Triangle()
{
    int cnt1;
	int cnt2;
	int Max_White = 7;
	char Mark2 = '*';
	for(cnt1 = 0 ; cnt1 <= Max_White ; cnt1++)
	{
	    printf("\n");
		for(cnt2 = 0 ; cnt2<=cnt1 ; cnt2++)
		{
			printf("%c",Mark2);
		}
	}  
}
void Inverted_Right()
{
    int cnt1;
	int cnt2;
	char Mark2 = '*';
	for(cnt1 = 8 ; cnt1 > 0 ; cnt1--)
	{
		printf("\n");
		for(cnt2 = 1 ; cnt2<=cnt1 ; cnt2++)
		{
			printf("%c",Mark2);
		}
	} 	
}
