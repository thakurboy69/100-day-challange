//Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.


#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max_so_far = arr[0];
    int current_max = arr[0];

    for (int i = 1; i < n; i++) {
        
        if (current_max + arr[i] > arr[i])
            current_max = current_max + arr[i];
        else
            current_max = arr[i];

        
        if (current_max > max_so_far)
            max_so_far = current_max;
    }

    printf("Maximum subarray sum: %d\n", max_so_far);
    return 0;
}