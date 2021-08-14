/*Take three numbers input from keyboard and print their values in descending order. (Like variable a, b
and c has values 7, 10 and 5 then values will be printed in order 10, 7, 5)*/
#include<iostream>
using namespace std; 

int main(){
    int arr[3];
    int i,j,temp=0;
    cout<<"Enter 3 numbers"<<endl;
    for(int i=0; i<3; i++){
        cin>>arr[i];
    }
    
    for(i=0;i<3;i++)
	{		
		for(j=i+1;j<3;j++)
		{
			if(arr[i]<arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
    cout<<"Values in descending order :"<<endl;
	for(int i=0; i<3; i++){
        
        cout<<arr[i]<<"\t";
    }
    
}