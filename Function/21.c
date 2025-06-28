#include <stdio.h>
#include <math.h>

// Function to take input from user
void TakeInput(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

// Function to calculate mean
double CalcMean(int arr[], int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum / n;
}

// Function to calculate standard deviation
double Calc_Std_deviation(int arr[], int n) {
    double mean = CalcMean(arr, n);
    double sum_sq_diff = 0;
    for (int i = 0; i < n; i++) {
        sum_sq_diff += (arr[i] - mean) * (arr[i] - mean);
    }
    return sqrt(sum_sq_diff / n);
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    TakeInput(arr, n);

    double mean = CalcMean(arr, n);
    double std_dev = Calc_Std_deviation(arr, n);

    printf("Mean: %.2lf\n", mean);
    printf("Standard Deviation: %.2lf\n", std_dev);

    return 0;
}