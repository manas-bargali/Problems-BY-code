#include <iostream>
using namespace std;


void selectionSort(int arr[],int size){
    for(int i=0;i<(size-1);i++){// n-1 conditions
        // last is sorted -i comparisons
        int min_index=i;
        for(int j=i+1;j<(size);j++){
            if(arr[j]<arr[min_index]){
                //swap 
                min_index=j;
                
            }
            if(min_index!=i){
                // not the same index is min 
                //swap 
                int temp=arr[min_index];
                arr[min_index]=arr[i];
                arr[i]=temp;
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
  selectionSort(array,n);

 
  return 0;

}
