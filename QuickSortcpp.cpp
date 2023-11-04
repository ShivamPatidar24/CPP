//#include <iostream>
//using namespace std;
//
//int partition(int a[], int l, int r) {
//    int t;
//    int p = a[l];
//    int i = l;
//    int j = r;
//
//    while (i <= j) {
//        while (a[i] < p) {
//            i++;
//        }
//        while (a[j] > p) {
//            j--;
//        }
//        if (i <j) {
//            t = a[i];
//            a[i] = a[j];
//            a[j] = t;
//            i++;
//            j--;
//        }
//    }
//
//     a[l] = a[j];
//    a[j] = p;
//    return j;
//}
//
//void quick(int arr[], int l, int r) {
//    int pivot;
//    
//    if (l >= r) {
//    
//        }
//        pivot = partition(arr, l, r - 1);
//        quick(arr, l, pivot - 1);
//        quick(arr, pivot, r);
//    
//}
//
//int main() {
//    int a[20], x;
//
//    cout << "Enter the number of elements : ";
//    cin >> x;
//
//    for (int i = 0; i < x; i++) {
//        cin >> a[i];
//    }
//
//    quick(a, 0, x-1);
//
//    cout << "Sorted array: ";
//    for (int i = 0; i < x; i++) {
//        cout << a[i] << " ";
//    }
//    cout << endl;
//
//    return 0;
//}
//

#include <iostream>
using namespace std;

int partition(int a[], int l, int r) {
    int t;
    int p = a[l];
    int i = l;
    int j = r;

    while (i < j) {
        while (a[i] <= p && i < r) {
            i++;
        }
        while (a[j] > p) {
            j--;
        }
        if (i < j) {
            t = a[i];
            a[i] = a[j];
            a[j] = t;
        }
    }

    a[l] = a[j];
    a[j] = p;
    return j;
}

void Quick(int arr[], int l, int r) {
    if (l < r ) {
        int pivot = partition(arr, l, r );
        Quick(arr, l, pivot - 1);
        Quick(arr, pivot + 1, r);
    }
}

int main() {
    int a[20], x;

    cout << "Enter the number of elements: ";
    cin >> x;

    for (int i = 0; i < x; i++) {
        cin >> a[i];
    }

    Quick(a, 0, x-1);

    cout << "Sorted array: ";
    for (int i = 0; i < x; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}

