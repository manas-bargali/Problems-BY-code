#include <iostream>
using namespace std;


void bubbleSort(int arr[],int size){
    for(int i=0;i<(size-1);i++){// n-1 conditions
        // last is sorted -i comparisons
        for(int j=0;j<(size-1-i);j++){
            if(arr[j]>arr[j+1]){
                //swap 
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }


        }
      }
    //Traverse the sorted array
    for (int x = 0; x < size; x++) {
      cout << arr[x]<<"\n";
    }
   

    
}

int main() {
  int n;
  cout << "Enter length of an Array :";
  cin >> n;

  int array[n] = {};
 
 
  for (int i = 0; i < n; i++) {
    cout << "enter element in array :" ;
    cin >> array[i];
  }

  // Traverse Array
  cout << "Traverse the set array :"<<"\n";
  for (int i = 0; i < n; i++) {
    cout << array[i]<<"\n";
  }
  cout<<"Sorted Array : ";
  bubbleSort(array,n);

 
  return 0;

}
