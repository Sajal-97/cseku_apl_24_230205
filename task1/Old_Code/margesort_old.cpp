#include<iostream>
#include<vector>
using namespace std;
void marge(int arr[], int si, int mid, int ei) {
    vector<int> ans;
    int i = si;
    int j = mid+1;
    while(i <= mid && j <= ei) {
        if(arr[i] <= arr[j]) {
            ans.push_back(arr[i]);
            i++;
        } else {
            ans.push_back(arr[j]);
            j++;
        }
    }

    while(i <= mid) {
        ans.push_back(arr[i]);
        i++;
    }

    while(j <= ei) {
        ans.push_back(arr[j]);
        j++;
    }

    for(int k=0, indx=si; indx<= ei; k++, indx++) {
        arr[indx] = ans[k];
    }
}
void margesort(int arr[], int si, int ei) {
    if(si >= ei) {
        return;
    }
    int mid = si + (ei-si)/2;

    margesort(arr, si, mid);
    margesort(arr, mid+1, ei);

    marge(arr, si, mid, ei);
}

int main() {
    int array_size;
    cout << "Enter array size: ";
    cin >> array_size;

    int arr[array_size];

    cout << "Enter the numbers: " << endl;
    for(int i=0; i<array_size; i++) {
        cin >> arr[i];
    }
    margesort(arr, 0, array_size-1);
    for(int i=0; i<array_size; i++) {
        cout << arr[i] << " ";
    }
}
