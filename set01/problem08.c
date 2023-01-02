#include <stdio.h>

int input_array_size();
void input_array(int n, int a[n]);
int sum_n_array(int n, int a[n]);
void output(int n, int a[n], int sum);

int main() {
  int n, sum = 0;
  n = input_array_size();
  int a[n];
  input_array(n, a[n]);
  sum = sum_n_array(n, a[n]);
  output(n, a[n], sum);
}
int input_array_size() {
  int n;
  printf("input the number\n");
  scanf("%d", &n);
  return n;
}
void input_array(int n, int a[n]) {
  for (int i = 0; i < n; i++) 
  {
    printf("input the number\n");
    scanf("%d", &a[n]);
  }
}
int sum_n_array(int n, int a[n]) {
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum = sum + a[n];
  }
  return sum;
}
void output(int n, int a[n], int sum) {
  printf("the sum of");
  for (int i = 0; i < n; i++) {
    printf("%d", a[n]);
  }
  printf("is %d", sum);
}