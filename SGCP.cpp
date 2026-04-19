#include <bits/stdc++.h>
using namespace std;

// 1. Reverse a string
string reverseString(string s) {
    int left = 0;
    int right = s.length() - 1;
    while (left < right) {
        swap(s[left], s[right]);
        left++;
        right--;
    }
    return s;
}

// 2. FizzBuzz
void fizzBuzz(int n) {
    for (int i = 1; i <= n; i++) {
        if (i % 15 == 0)
            cout << "FizzBuzz";
        else if (i % 3 == 0)
            cout << "Fizz";
        else if (i % 5 == 0)
            cout << "Buzz";
        else
            cout << i;
        cout << "\n";
    }
}

// 3. Find the largest number in an array
int findLargest(int numbers[], int size) {
    int largest = numbers[0];
    for (int i = 1; i < size; i++) {
        if (numbers[i] > largest)
            largest = numbers[i];
    }
    return largest;
}

// 4. Palindrome check
bool isPalindrome(string word) {
    int left = 0;
    int right = word.length() - 1;
    while (left < right) {
        if (tolower(word[left]) != tolower(word[right]))
            return false;
        left++;
        right--;
    }
    return true;
}

// 5. Sum all elements of an array
int sumArray(int numbers[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++)
        total += numbers[i];
    return total;
}

// 6. Count vowels in a string (a, e, i, o, u)
int countVowels(string text) {
    int vowelCount = 0;
    for (char ch : text) {
        char lower = tolower(ch);
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
            vowelCount++;
    }
    return vowelCount;
}

// 7. Factorial of n (n! = 1 * 2 * ... * n)
long long factorial(int n) {
    if (n == 0) return 1;
    long long result = 1;
    for (int i = 1; i <= n; i++)
        result *= i;
    return result;
}

// 8. Extract only even numbers from an array
vector<int> getEvens(int numbers[], int size) {
    vector<int> evens;
    for (int i = 0; i < size; i++) {
        if (numbers[i] % 2 == 0)
            evens.push_back(numbers[i]);
    }
    return evens;
}

// 9. Generate first n Fibonacci numbers (0, 1, 1, 2, ...)
vector<int> fibonacci(int n) {
    vector<int> sequence;
    if (n >= 1) sequence.push_back(0);
    if (n >= 2) sequence.push_back(1);
    for (int i = 2; i < n; i++) {
        int next = sequence[i - 1] + sequence[i - 2];
        sequence.push_back(next);
    }
    return sequence;
}

// 10. Find the smallest number in an array
int findMinimum(int numbers[], int size) {
    int smallest = numbers[0];
    for (int i = 1; i < size; i++) {
        if (numbers[i] < smallest)
            smallest = numbers[i];
    }
    return smallest;
}

int main() {
    cout << "Let's test our 10 functions!\n\n";

    // 1. Reverse a string
    cout << "1. Reversing \"hello\": " << reverseString("hello") << "\n";

    // 2. FizzBuzz up to 15
    cout << "\n2. FizzBuzz (1 to 15):\n";
    fizzBuzz(15);

    // 3. Largest in array
    int numbers3[] = {3, 7, 2, 9, 1};
    int size3 = sizeof(numbers3) / sizeof(numbers3[0]);
    cout << "\n3. Largest in [3,7,2,9,1] = " << findLargest(numbers3, size3) << "\n";

    // 4. Palindrome check
    cout << "\n4. Is \"racecar\" a palindrome? " << (isPalindrome("racecar") ? "Yes" : "No");
    cout << "\n   Is \"hello\" a palindrome? " << (isPalindrome("hello") ? "Yes" : "No");
    cout << "\n   Is \"Racecar\" (ignoring case) a palindrome? " << (isPalindrome("Racecar") ? "Yes" : "No") << "\n";

    // 5. Sum of array
    int numbers5[] = {1, 2, 3, 4, 5};
    int size5 = sizeof(numbers5) / sizeof(numbers5[0]);
    cout << "\n5. Sum of [1,2,3,4,5] = " << sumArray(numbers5, size5) << "\n";

    // 6. Count vowels
    cout << "\n6. Vowels in \"Hello World\": " << countVowels("Hello World") << "\n";

    // 7. Factorial
    cout << "\n7. 5! = " << factorial(5);
    cout << "\n   0! = " << factorial(0) << "\n";

    // 8. Even numbers from array
    int numbers8[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size8 = sizeof(numbers8) / sizeof(numbers8[0]);
    vector<int> evens = getEvens(numbers8, size8);
    cout << "\n8. Even numbers from 1..10: ";
    for (int e : evens) cout << e << " ";
    cout << "\n";

    // 9. Fibonacci sequence (first 10 numbers)
    vector<int> fib = fibonacci(10);
    cout << "\n9. First 10 Fibonacci numbers: ";
    for (int f : fib) cout << f << " ";
    cout << "\n";

    // 10. Minimum in array
    int numbers10[] = {5, 2, 8, 1, 9, 3};
    int size10 = sizeof(numbers10) / sizeof(numbers10[0]);
    cout << "\n10. Minimum of [5,2,8,1,9,3] = " << findMinimum(numbers10, size10) << "\n";

    return 0;
}