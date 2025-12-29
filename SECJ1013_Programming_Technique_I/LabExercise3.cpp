#include <iostream>
using namespace std;

int main() 
{
  int num1 ;
  int num2 ;
  cin >> num1 >> num2 ;
  
  if (num1<num2)
  {
      int i = num1;
      if (i%2==0) 
	  	i++;
		   
      do
      {
      	cout << i << " ";
      	i+=2;
	  } while (i <= num2);
}
  
  else 
  {
      int i =num1;
      if (i%2!=0) 
	  	i--;
      
      	do{      
		  cout << i << " ";    
          i -= 2;  
        }while (i>=num2);  
  }
    return 0;
}

