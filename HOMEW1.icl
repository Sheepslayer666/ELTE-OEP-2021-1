module HOMEW1
import StdEnv

//Digit to 
// Write a function that will take a digit (Int)
// and return the respective word for it (String).
// For example input of 1 should output One; input of 0 should output Zero; input of 5 should output Five.
// Anything that is not the digit (0-9) should output "Not a digit"

digit_to_string :: Int -> String
digit_to_string num
| num == 0 = "Zero"
| num == 1 = "One"
| num == 2 = "Two"
| num == 3 = "Three"
| num == 4 = "Four"
| num == 5 = "Five"
| num == 6 = "Six"
| num == 7 = "Seven"
| num == 8 = "Eight"
| num == 9 = "Nine"
="Not a digit"

//Start = digit_to_string 4 //"Four"
//Start = digit_to_string 0 //"Zero"
//Start = digit_to_string 5 //"Five"
//Start = digit_to_string 10 //"Not a digit"
//Start = digit_to_string -1 //"Not a digit"
//Start = digit_to_string 42 //"Not a digit"

//Prime check
// Write a function that takes Int and checks if this number is prime or not.
// handle the case of negative numbers (negative numbers are not primes).
// 0 and 1 are not prime numbers.


is_prime :: Int -> Bool
is_prime 2 = True
is_prime 1 = False
is_prime 0 = False
is_prime n
|n > 0 = posit 2 n
|n < 0 = False

posit :: Int Int -> Bool
posit i n 
| i == n-1 = True
= div (i) (n) && posit (i+1) (n)

div :: Int Int -> Bool
div d1 d2 = d2 rem d1 <> 0 

//Start = is_prime 5 // True
//Start is_prime 0 // False
// Start is_prime 1 // False
// Start is_prime 2 // True
// Start is_prime 2017 // True

//Palindorm check
// Write a function that takes Int argument and checks if this number is a palindrome.
// Palindrome is a number that is the same when we read from left to right or from right to left.


is_palindrome :: Int -> Bool
is_palindrome n = check (setter n)

check :: [Int] -> Bool
check num = num == reverse num 

setter :: Int -> [Int]
setter 0 = []
setter x = [x rem 10] ++ setter (x/10)

// Start = is_palindrome 0 // True
//Start = is_palindrome 55 // True
// Start = is_palindrome 49594 // True
//Start = is_palindrome 1337 // False