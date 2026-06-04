// Problem 8: Check Palindrome  [Easy]
// Description: Write a function isPalindrome(str) that returns true if the string reads the same forwards and backwards.
// Example:
// Input: 'racecar'  → Output: trueInput: 'hello'    → Output: false
// Hint: Compare the string to its reverse.


function isPalindrome(str) {
  const reversedStr = str.split('').reverse().join('');
  return str === reversedStr;
}

console.log(isPalindrome('racecar'));
console.log(isPalindrome('hello'));  