#include <iostream>
using namespace std;

int add(int arr[], int a);

int main(){
int arr[7];
cout<<"please enter 7 integers and then press enter ";

for(int i = 0; i < 8; ++i) {
cin>> arr[i];
}
int num = add(arr, 7);
cout<<"the sum of the numbers you selected are: " <<num<<endl;

return 0;
}
int add (int arr[], int a){
int sum = 0;

for(int i = 0; i<a; i++){
sum += arr[i];
}
return sum;
}
