/*For example, imagine you have a set of servers that handle requests 
for a web application. The key to load balancing is using the hash value
of a client's IP address or a request ID to determine which server should
handle the request. The hash function is typically designed so that the 
data is evenly distributed across the servers, ensuring that no single server is overloaded. Write a program of a load balancing system*/

#include<iostream>
#include<string>
using namespace std;
int main(){
	int n,r;
	int server[n];
	cout<<"Enter the number of servers:";
	cin>>n;
	cout<<"Enter the number of request:";
	cin>>r;
    cout<<"Enter request IDs:";
    for(int i=0;i<n;i++){
		server[i]=0;
	}
    for(int i=0;i<r;i++){
		int req;
		cin>>req;
		int index=req%n;
		
		while(server[index]!=0){
			index=(index+1)%n;
		}
		server[index]=req;
		 cout<<"Request "<<req <<" assigned to Server "<<index+ 1<<endl;
    }

    return 0;
}

		
