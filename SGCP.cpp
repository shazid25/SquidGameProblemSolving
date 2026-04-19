//1. Reverse a String

#include <bits/stdc++.h>
using namespace std;

string reverseString(string s) {
    int n = s.length();
    for (int i = 0; i < n / 2; i++) {
        char temp = s[i];
        s[i] = s[n - 1 - i];
        s[n - 1 - i] = temp;
    }
    return s;
}


//2. FizzBuzz

#include <bits/stdc++.h>
using namespace std;

void fizzBuzz(int n) {
    for (int i = 1; i <= n; i++) {
        if (i % 15 == 0) cout << "FizzBuzz" << endl;
        else if (i % 3 == 0) cout << "Fizz" << endl;
        else if (i % 5 == 0) cout << "Buzz" << endl;
        else cout << i << endl;
    }
}



//3.Find the Largest Number in an Array


#include <bits/stdc++.h>
using namespace std;

int findLargest(int nums[], int size) {
    int maxVal = nums[0];
    for (int i = 1; i < size; i++) {
        if (nums[i] > maxVal) {
            maxVal = nums[i];
        }
    }
    return maxVal;
}

//4. Check for Palindrome

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    int n = s.length();
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - 1 - i]) return false;
    }
    return true;
}


//5. Sum of Array Elements

#include <bits/stdc++.h>
using namespace std;

int sumArray(int nums[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += nums[i];
    }
    return total;
}

//6. Count Vowels

#include <bits/stdc++.h>
using namespace std;

int countVowels(string s) {
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        char c = tolower(s[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }
    return count;
}

//7. Factorial Calculation

#include <bits/stdc++.h>
using namespace std;

long long factorial(int n) {
    long long res = 1;
    for (int i = 1; i <= n; i++) {
        res *= i;
    }
    return res;
}

//8. Even Number List

#include <bits/stdc++.h>
using namespace std;

void printEvens(int nums[], int size) {
    for (int i = 0; i < size; i++) {
        if (nums[i] % 2 == 0) {
            cout << nums[i] << " ";
        }
    }
    cout << endl;
}



//10. Find the Minimum in an Array

#include <bits/stdc++.h>
using namespace std;

int findMinimum(int nums[], int size) {
    int minVal = nums[0];
    for (int i = 1; i < size; i++) {
        if (nums[i] < minVal) {
            minVal = nums[i];
        }
    }
    return minVal;
}


//12. Check Prime Number
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}