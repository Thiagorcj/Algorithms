#include <iostream>
#include <vector>
using namespace std;

vector<int> Insertion_Sort(vector<int> arr){
  int aux, j;
  for(int i=1;i<arr.size();i++){
    aux = arr[i];
    j=i-1;
    while (aux<arr[j]&&j>=0){
        arr[j+1]=arr[j];
        j--;
  }
    arr[j+1] = aux;
  }
  return arr;
}

void print_array(vector<int> arr){
  cout << "["<<arr[0];
  for(int i=1;i<arr.size();i++)
    cout<< "," << arr[i] ;
  cout<<']'<<endl;
}

int main() {
  vector<int> arr={5,4,3,2,1};
  cout << "Array: ";
  print_array(arr);
  cout << "Ordered array: ";
  vector<int> ordered_array = Insertion_Sort(arr);
  print_array(ordered_array);
}  
