#include<iostream>
#include<string>
using namespace std;
int searchtxt(string,string);
int main()
{
	string text, search;
	cout<<"Enter the paragraph that you want to search in:"<<endl;
	getline(cin,text);
	int s=text.length();
    cout<<"Enter the second string: "<<endl;
    getline(cin, search);
    int result=searchtxt(text, search);
	if(result!=-1)
	{
		cout<<"your search result is located:  "<<result<<" index of this paragraph \n";
	}
}
int searchtxt(string text,string search)
{
	bool flag=false;
    bool valid = false;
	int i=0,j=0;
    for(int z=0; z<search.length();z++)
    {
        if(search[z]==' ')
        {
            valid = true;
            break;
        }
        else
        valid = false;
    }
    if(valid==true)
    {
	do{	
	while(text[i]!='\0')
	{
		
		if(text[i]==search[j])
		{
			
			flag=true;
			search[j]=i;
			i++;
			j++;
			continue;
		}
		else
		{
			while(text[i]!=search[j])
		{
			i++;
		}
		}	
	}}while(flag==false);
    }

    else
    {
        cout<<"Please enter a proper phrase";
    }
    if(flag==true)
	return search[0];
	else
	return -1;


}