//Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.


#include <stdio.h>

int main() {
    int n, k;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter subarray size (k): ");
    scanf("%d", &k);

    
    if (k > n || k <= 0) {
        printf("Invalid subarray size.\n");
        return 1;
    }

    int window_sum = 0;
    int max_sum;

    
    for (int i = 0; i < k; i++) {
        window_sum += arr[i];
    }

    max_sum = window_sum;


    for (int i = k; i < n; i++) {
        window_sum += arr[i] - arr[i - k]; 
        if (window_sum > max_sum) {
            max_sum = window_sum;
        }
    }

    
    printf("Maximum sum of subarrays of size %d is: %d\n", k, max_sum);

    return 0;
}