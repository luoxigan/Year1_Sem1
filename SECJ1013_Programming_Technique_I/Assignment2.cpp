#include<iostream>
#include<string>
using namespace std;

bool isPalindrome(string str)
{
	int start=0;
	int end=str.length()-1;
	
	while(start<end)
	{
		if(str[start]!=str[end])
		return false;
		
		start++;
	    end--;
	}
	return true;
 } 
 
int main()
{
	string input;
	char choice;
	
	do
	{
     	cout<<"\nEnter the string (50 characters or less): ";
    	cin>>input;

		if(input.length()>50)
		{
			cout<<"The string is too long.Please try again.";
			continue;
		}
		
		if(isPalindrome(input))
		{
			cout<<endl<<input<<" is a palindrome."<<endl;
		}
		else
		{
			cout<<endl<<input<<" is not a palindrome."<<endl;
		}
		
		cout<<endl<<"Would you like to check another string?"<<endl;
		cin>>choice;
		
	}while(choice=='Y'||choice=='y');
	
	return 0;
}


