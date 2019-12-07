#include <iostream>
using namespace std;
int main()
{
int sum = 0;
int arr[] = {10, 22, 13, 99, 4, 5};
for(int i = 0; i < 6; ++i) {
sum+= arr[i];
}
cout<<sum<<endl;
return 0;
}

