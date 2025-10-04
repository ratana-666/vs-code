#include<iostream>
using namespace std;

void insert_num(int *arr , int pos , int val , int &n){ //n = number of arrays
    if(pos > n){
        cout << "(ERROR!!)"<<endl;
        return;
    }

    for(int i = n ; i > pos ; i--){
        arr[i] = arr[i-1];
    }
    arr[pos] = val;
    n++;
}

void delete_ele(int *arr , int pos , int &n){
    if(pos > n){
        cout << "(ERROR!!)"<<endl;
        return;
    }

    for(int i = pos ; i < n - 1 ; i++){
        arr[i] = arr[i+1];
    }
    n--;
}

int main(){
    int arrays[100] = {5 ,4 ,3 ,2 ,1};
    int n = 5;

    cout<< "arrays before modify : ";
    for(int i = 0 ; i < n ; i++){
        cout<< arrays[i] << " ";
    }

    insert_num(arrays, 2 , 10 , n);
    cout<<"\nafter insert number : " ;
    for(int i = 0 ; i < n ; i++){
        cout<< arrays[i] << " ";
    }

    delete_ele(arrays , 4 , n);
    cout<<"\nafter delete element : ";
    for(int i = 0 ; i < n ; i++){
        cout<< arrays[i] << " "; 
    }

}
