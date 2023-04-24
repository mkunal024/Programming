#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main()
{
	int i,j ,k , f,s ,n,m;
	string first , second;
	char yes , ar[3][3];
	cout<<"WELCOME! TO start a game press 'y' :";
	cin>>yes;
		cout<<"\n\n";
	if('y'==yes)
	{
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				cout<<"|______|";
				ar[i][j]= '_';
			}
			
			cout<<"\n\n";
	    	}
	    	cout<<"First player name : ";
	    	cin>>first;
	    	cout<<"Second player name : ";
	    	cin>>second;
	    	cout<<"\n\n";
	    	cout<<first <<"-\t'X' and "<<second <<"-\t'O'\n";
	    
		
	    	system("cls");
	    	
	    	for(k=1;k<=9;k++)
	    	{   
			if(k%2!=0)
	    	{
	    	cout<<first <<" your chance\n";
	    	cout<<"Press row then column like 1 enter than 2 enter means first row and second column \n";
	    	cout<<"Row = ";
	    	cin>>n;
	    	cout<<"Column = ";
	    	cin>>m;
	    	
	    		if(ar[n-1][m-1]=='O' || ar[n-1][m-1]=='X')
	    		{ 
	                cout<<"Error! Already occupy \n";
	    			cout<<"Row = ";
	              	cin>>n;
	    	        cout<<"Column = ";
	             	cin>>m;
	             
	             	 ar[n-1][m-1]='X'; 
	                	system("cls");
	             	}
	             
	             	else
	             	{
	    	  system("cls");
	                ar[n-1][m-1]='X'; 
	            }
	         
	         for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				cout<<"|_" << ar[i][j]<<"_|";
			}
				cout<<"\n\n";
	    	}
	    }
	    
	    else
	    {
	    	cout<<second <<" your chance\n";
	    	cout<<"Press row then column like 1 enter than 2 enter means first row and second column \n";
	    	cout<<"Row = ";
	    	cin>>n;
	    		cout<<"Column = ";
	    	cin>>m;
	    		
	    		
	    		if(ar[n-1][m-1]=='O' || ar[n-1][m-1]=='X')
	    		{   
	    		  
	    		   
				   
	    			cout<<"Error! Already occupy \n";
	    			cout<<"Row = ";
	              	cin>>n;
	    	        cout<<"Column = ";
	             	cin>>m;
	             	
	             	ar[n-1][m-1]='O';
			        system("cls"); 
	             }
	             
				
	    	else
	    	{
	    		system("cls");
		 ar[n-1][m-1]='O'; 
	          	}
	        
	         
	         for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				cout<<"|_" << ar[i][j]<<"_|";
			}
				cout<<"\n\n";
	    	}
	    
	}
	    if(k>=5)
	    {
	    	if(ar[0][0]=='X' && ar[1][1] =='X' && ar[2][2]=='X')
	    	{
	    		cout<< first << " Congrats! Winner\n";
	    		break;
			}
			else if (ar[0][0]=='X' && ar[0][1] == 'X' && ar[0][2]=='X')
			{
				cout<< first << " Congrats! Winner\n";
					break;
			}
				else if (ar[1][0]=='X' && ar[1][1] =='X' && ar[1][2]=='X')
			{
				cout<< first << " Congrats! Winner\n";
					break;
			}
				else if (ar[2][0]=='X' && ar[2][1] =='X' && ar[2][2]=='X')
			{
				cout<< first << " Congrats! Winner\n";
					break;
			}
				else if (ar[0][2]=='X' && ar[1][1] =='X' && ar[2][0]=='X')
			{
				cout<< first << " Congrats! Winner\n";
					break;
			}
				else if (ar[0][0]=='X' && ar[1][0] =='X' && ar[2][0]=='X')
			{
				cout<< first << " Congrats! Winner\n";
					break;
				}
					else if (ar[0][1]=='X' && ar[1][1] =='X' && ar[2][1]=='X')
			{
				cout<< first << " Congrats! Winner\n";
					break;
			}
				else if (ar[0][2]=='X' && ar[1][2] =='X' && ar[2][2]=='X')
			{
				cout<< first << " Congrats! Winner\n";
					break;
			}
			
			else
			{
				if(ar[0][0]=='O' && ar[1][1] =='O' && ar[2][2]=='O')
	    	{
	    		cout<< second << " Congrats! Winner\n";
	    			break;
			}
			else if (ar[0][0]=='O' && ar[0][1] =='O' && ar[0][2]=='O')
			{
				cout<< second << " Congrats! Winner\n";
					break;
			}
				else if (ar[1][0]=='O' && ar[1][1] =='O' && ar[1][2]=='O')
			{
				cout<< second << " Congrats! Winner\n";
					break;
			}
				else if (ar[2][0]=='O' && ar[2][1] =='O' && ar[2][2]=='O')
			{
				cout<< second << " Congrats! Winner\n";
					break;
			}
				else if (ar[0][2]=='O' && ar[1][1] =='O' && ar[2][0]=='O')
			{
				cout<< second << " Congrats! Winner\n";
					break;
			}
				else if (ar[0][0]=='O' && ar[1][0] =='O' && ar[2][0]=='O')
			{
				cout<< second << " Congrats! Winner\n";
					break;
				}
					else if (ar[0][1]=='O' && ar[1][1] =='O' && ar[2][1]=='O')
			{
				cout<< second << " Congrats! Winner\n";
					break;
			}
				else if (ar[0][2]=='O' && ar[1][2] =='O' && ar[2][2]=='O')
			{
				cout<< second << " Congrats! Winner\n";
					break;
			}
			}
		}
			if(k==9)
			{
				cout<<"Draw";
			}
		
	    }
	    
}
getch();
}
