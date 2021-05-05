There is a unique ATM in Wonderland. Imagine this ATM as an array of numbers. You can withdraw cash only from either ends of the array. Sarah wants to withdraw X amount of cash from the ATM. What are the minimum number of withdrawals Sarah would need to accumulate X amount of cash. If it is not possible for Sarah to withdraw X amount, return -1.

Input Format
The first line contains an integer, N, denoting the number of elements in ATM.
Each line i of the N subsequent lines (where 0 <= i < N) contains an integer describing the cash in ATM.
The next line contains an integer, X, denoting the total amount to withdraw.


Constraints
1 <= N <= 10^5
1 <= ATM[i] <= 10^5
1 <= X <= 10^5

Sample Input	Sample Output	Explanation
2
1
1
3
	-1
	The total amount of cash in the ATM is 2, hence Sarah cannot withdraw an amount of 3.
Languages: C#,Python 3,Java,C++,C,Go,Perl,Bash,Plain JavaScript,R,PHP,Ruby,Python,Clojure


Given an equation "x=y", for example, "111=12", you need to add pluses inside x to make the equation correct. In our example "111=12", we can add one plus "11+1=12" and the equation becomes correct. You need to find the minimum number of pluses to add to x to make the equation correct. If there is no answer print -1.


Note that the value of y won't exceed 5000. The numbers in the corrected equation may contain arbitrary amounts of leading zeros.

Input Format
The first line contains a string, A as described in the problem statement.


Constraints
1 <= len(A) <= 10^3

Sample Input	Sample Output	Explanation
23=5
	1
	It can be accomplished with only one "+" by doing "2+3=5".
Languages: C#,Python 3,Java,C++,C,Go,Perl,Bash,Plain JavaScript,R,PHP,Ruby,Python,Clojure




Let's define a Beautiful Function F(x) in such a way : Add 1 to the value of x, if the result of addition contains any trailing zeros then remove them all.


Examples:

F(11) = 12

F(19) = 2 (20 -> 2)

F(99) = 1 (100 -> 10 -> 1)


Let's define a number to be reachable from x, if we can apply the Beautiful Function some number of times(possibly zero) to x and get that number as result.

Ex. 102 is reachable from 10099 as (F(F(10099))) = F(101) = 102.


You are given a number N. Calculate how many numbers are reachable from N.

Input Format
The first line contains an integer, N, denoting the given number.


Constraints
1 <= N <= 10^9

Sample Input	Sample Output	Explanation
1
	9
	1,2,3,4,5,6,7,8,9 are reachable from 1.
Languages: C#,Python 3,Java,C++,C,Go,Perl,Bash,Plain JavaScript,R,PHP,Ruby,Python,Clojure
