
#include <iostream>

using namespace std;

int searchPosition(int arr[], int element,int start,int end){
    if(start > end ){
        return -1;
    }
    int mid = (start + end) / 2;
    if(arr[mid] == element){
        return mid;
    }else if(arr[mid] > element){
        return searchPosition(arr,element,start,mid - 1);
    } else{
        return searchPosition(arr,element,mid + 1, end);
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int searchElement = 67;
    int sizeOfarr = sizeof(arr)/sizeof(arr[0]);
    int position = searchPosition(arr,searchElement,0,sizeOfarr - 1);
    if(position == -1){
        cout<<"Oppsss Element Not Found"<<endl;
    }else{
        cout<<"position counted from 0 is "<<position<<endl;
    }
    return 0;
}
