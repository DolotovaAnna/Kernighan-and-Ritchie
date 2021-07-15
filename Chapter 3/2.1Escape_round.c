#include <stdio.h>

int MAX_STR_LEN = 100;

void escape(char s[], char t[]);

int main()
{
	char s[MAX_STR_LEN];
	char t[] = "Hello\t\tworld!\n";
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
		if (t[i] == '\\')
		{
			switch (t[i+1])
			{
				case 't':
							s[j++] = '\t';
							i += 2;
							break;
			    
			    case 'b':
					    	s[j++] = '\b';
							i += 2;
							break; 
		        
		        case '\\':
				        	s[j++] = '\\';
							i += 2;
							break;

				case 'n':
							s[j++] = '\n';
							i += 2;
							break;	
				case '\"':
							s[j++] = '\"';
							i += 2;
							break;  

				default:
							s[j++] = t[i++];
							break;
		    }
		}
		else
		{
			s[j++] = t[i++];
		}
	}
}