problem - https://leetcode.com/problems/product-of-array-except-self/

Pseudocode - 

# 1st approach (wrong as asked in question we cannot use divide)

#1 Calculate the whole product of the array.

#2 loop through the given array and divide the whole product by the current element and store the result in a vector retrun the vector.

# 2nd approach

#1 Calculate the prefix product of the whole given vector store it in the prefixsum vector.

#2 Calculate the postfix product of the whole given vector and multiply the respective index element by the prefixsum vector and store it in the pretfixsum vector.

#3 return the prefix sum vector.