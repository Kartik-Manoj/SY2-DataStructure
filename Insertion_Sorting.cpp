/*When playing card games, players often use an approach similar to 
insertion sort to organize their cards. They pick one card at a time and
insert it into the correct position in their hand, maintaining a sorted 
sequence. Write a program that demonstrates how to organize (sort) cards
in a hand using insertion sort.*/
#include<iostream>
using namespace std;
int main(){
	int n;
    cout << "Enter Number Of Cards in hand:" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the card values:" << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 1; i < n; i++){
        int key = arr[i];
        int j = i-1;
        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
        cout << "Sorting Cards" << i << ": ";
        for(int k = 0; k < n; k++){
            cout << arr[k] << " ";
        }
        cout << endl;
    }
    cout << "Overall Organized Cards:" << endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

