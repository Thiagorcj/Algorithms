#include <iostream>
#include <vector>
using namespace std;

vector<int> Insertion_Sort(vector<int> arr){
  int aux;
  for(int i=1;i<arr.size();i++){
    aux = arr[i];
    for(int j=i-1;j>=0;j--){
      if(arr[j]>=aux){
        arr[j+1]=arr[j];
        if(j==0){
          arr[j]=aux;
        }
      }
      else if(arr[j]<aux){
        arr[j+1]=aux;
        break;
      }
}
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
  cout << "Array inicial: ";
  print_array(arr);
  vector<int> ordered_array = Insertion_Sort(arr);
  print_array(ordered_array);
}  