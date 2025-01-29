#include <iostream.h>
#include <conio.h>

#define min(a, b) (((a) < (b)) ? (a) : (b))

void main() {
    clrscr();
    
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[100];  // Limiting the array size to 100 elements
    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Merge Sort logic
    for (int size = 1; size < n; size *= 2) {
        for (int left = 0; left + size < n; left += 2 * size) {
            int mid = left + size - 1;
            int right = min(left + 2 * size - 1, n - 1);

            int n1 = mid - left + 1, n2 = right - mid;
            int L[50], R[50];  // Limiting the sub-array sizes

            for (int i = 0; i < n1; i++) L[i] = arr[left + i];
            for (int i = 0; i < n2; i++) R[i] = arr[mid + 1 + i];

            int i = 0, j = 0, k = left;
            while (i < n1 && j < n2) arr[k++] = (L[i] <= R[j]) ? L[i++] : R[j++];
            while (i < n1) arr[k++] = L[i++];
            while (j < n2) arr[k++] = R[j++];
        }
    }

    // Print the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    getch();
}