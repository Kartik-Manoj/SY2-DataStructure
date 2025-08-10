/*Write a program to track rainfall data for 3 cities over 4 months. 
 Using a 2D array, we can store the data, calculate the average rainfall 
 for each city, and display the rainfall data in a tabular format.*/
#include<iostream>
using namespace std;
int main()
{
    cout<<"PRN:B24CE1087\n";
    float rain[3][4];
    float total=0.0, average=0; 
    cout<<"Enter Rainfall for 3 cities:\n";
    for(int c=0;c<3;c++)
   {
     cout<<"Enter data for city"<<c+1<<":\n";
     printf("\n");
     for(int m=0;m<4;m++)
     {
		 cout<<"\tMonth"<<m+1<<":";
		 cin>>rain[c][m];
      }
    printf("\n");
}
cout<<"Rainfall Tracking\n";
cout<<"SNo.\tCity\t\tM1\t\tM2\t\tM3\t\tM4\t\tAvg Rainfall(in mm)\n";
for(int c=0;c<3;c++)
{
	total=0.0;
	cout<<c+1<<"\tCity"<<c+1<<"\t\t";
	 for(int m=0;m<4;m++)
	 {
		 cout<<rain[c][m]<<"\t\t";
		 total+=rain[c][m];
	 }
average=total/4;
cout<<average<<"\n";
}
}

