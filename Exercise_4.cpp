// Difference Between array

#include<iostream>
using namespace std;
int main(){
	

	int n, Max_value=0, Min_value;
	
	cout<<"Enter size of your array: ";
	cin>>n;
	
	int array[n];
	
	cout<<endl<<"Enter elements of your array: ";
	
	for (int i=0; i<n; i++){
		
		cin>>array[i];
	}
	
//Maximum Value
	
	for(int i=0; i<n; i++){
	     
	if(array[i]>Max_value) {
		
		Max_value = array[i];
	}
	
}

  Min_value = Max_value;

//Minimum value

	for(int i=0; i<n; i++){
	     
	if(array[i]<Min_value) {
		
		Min_value = array[i];
	}
	
}


  int result = Max_value - Min_value;
  
  cout<<endl<<"DIfference between Maximum ans Minimum value of Array is: "<<result;
	return 0;
}
