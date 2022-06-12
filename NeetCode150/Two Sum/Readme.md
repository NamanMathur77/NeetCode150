problem - https://leetcode.com/problems/two-sum/

Pseudocode - 

#1 Loop through the given array storing the occurence of number in the visited map which contains the number as well as the index of the number.
#2 calculate the remaining number required for the target.
#3 check in the visited map if the remaining number is present then push the remaining number index and the current index in the answer vector.
#4 return answer vector