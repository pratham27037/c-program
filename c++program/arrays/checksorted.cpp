#include <iostream>

using namespace std;

int main()
{
    int arr[10];
    cout << "enter elements in array(10)";
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    int flag =0;
    for(int i=1 ;i<10;i++){
        if(arr[i]<arr[i-1]){
            flag = 1;
        }
    }
    if(flag == 0){
        cout<<"array is sorted";
    }
    else{
        cout<<"array is not sorted";
    }

    return 0;
}