#include <stdio.h>  
  
int main() {  
    int x = 2, y = 3, z = 4;  
    int result = x + y * z; // result = 14  
    printf("Result1(Witout operators): %d\n", result);  
      
    int a = 5, b = 6, c = 7;  
    int result2 = (a + b) * c; // result2 = 77  
    printf("Result2(Paranthesis): %d\n", result2);  
      
    int d = 8, e = 9, f = 10;  
    int result3 = d + e % f; // result3 = 17  
    printf("Result3(Divisiom): %d\n", result3);  
      
    int g = 11, h = 12, i = 13;  
    int result4 = g * h / i; // result4 = 10  
    printf("Result4(Multiplication): %d\n", result4);  
      
    int j = 14, k = 15, l = 16;  
    int result5 = j == k || l > k; // result5 = 1 (true)  
    printf("Result5(Greater/Equal to): %d\n", result5);  
      
    return 0;  
}  

