#include<iostream>
#include<string.h>
using namespace std;
void giaiNen(char S2[], char S1[]);
int main()
{
	char S[101], KQ[501]="";
	gets(S);
	giaiNen(S,KQ);
	puts(KQ);
	return 0;
}
void giaiNen(char S[], char KQ[])
{
	int lenS = strlen(S);
	int lenKQ = 0;
	int i = 0;
	while (i < lenS)
	{
		int so = 0;
		while (S[i]>='0' && S[i]<='9')
		{
			so = so * 10 + (S[i]-'0');
			i++;
		}
		char Temp[500];
		int k = 0;
		while (S[i]>='a' && S[i]<='z')
		{
			Temp[k++] = S[i++];
		}
		Temp[k] = '\0';
		for (int j = 0; j<so; j++)
			strcat(KQ,Temp);
	}
}

