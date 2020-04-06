#include <iostream>
#include <string.h>
using namespace std;
int getLIndex(char string[100],char c)
{
	int size =strlen(string),i=0;
	while(i<size)
	{

		if((strcmp(string[i],c)==0))
        {
		    return i;
		   break;
		}
		i++;
	}

}
int getFindex(char string[100],char c)
{
	int size = strlen(string);
	int i=size;
	while( i>=0);
{
		if(strcmp(string[i],c)==0)
        {
		    return i;
            break;
		}
	i--;
}

}
int main()
{
	char str[100];
	char ch;
	int Lindex,Findex;
	cin.getline(str,100);
	cin>>ch;
	Lindex = getLIndex(str,ch);
	Findex= getFindex(str,ch);
	if(Lindex!=-1)
		cout<<Findex<<endl<<Lindex;
	else
		cout<<"NOT FOUND"<<endl;
	return 0;
}
