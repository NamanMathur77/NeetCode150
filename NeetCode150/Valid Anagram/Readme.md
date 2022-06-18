Problem - https://leetcode.com/problems/valid-anagram/

Pseudocode - 

#1 Check if the length of both given strings is same if not then return false.

#2 create a map for counting the number of occurence of the words in first string.

#3 loop through the second string and delete the count of words from the map with respect to the corresponding word.

#4 loop through the map if any count is > 0 then return false.

#5 return true.
