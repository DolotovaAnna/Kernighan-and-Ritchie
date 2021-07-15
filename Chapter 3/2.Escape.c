#include <stdio.h>

int MAX_STR_LEN = 100;

void escape(char s[], char t[]);

int main()
{
	char s[MAX_STR_LEN];
	char t[] = "Hello 			\"world!\n";
	escape(s, t);

	printf ("%s", s);

	return 0;
}

void escape(char s[], char t[])
{
	int i = 0;
	int j = 0;
	while (t[i] != '\0')
	{
		switch (t[i])
		{
			case '\t':
						s[j++] = '\\';
						s[j++] = 't';
						break;
		    
		    case '\b':
				    	s[j++] = '\\';
						s[j++] = 'b';
						break; 
	        
	        case '\\':
			        	s[j++] = '\\';
						s[j++] = '\\';
						break;

			case '\n':
						s[j++] = '\\';
						s[j++] = 'n';
						break;	
			case '\"':
						s[j++] = '\\';
						s[j++] = '\"';
						break;  

			default:
						s[j++] = t[i];   		
	    }

	    ++i;
	}
}