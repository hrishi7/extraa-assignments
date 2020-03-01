
#include <iostream>

using namespace std;

int main()
{
    int arr[] = {11,7,2,13,15,4};
    int index = 0;
    int sum = 0;
    doSum:
        sum += arr[index++];

    int sizeOfArr = sizeof(arr)/sizeof(arr[0]);
    if(index < sizeOfArr){
        goto doSum;
    }else{
        cout<<sum<<endl;
    }

    return 0;
}
