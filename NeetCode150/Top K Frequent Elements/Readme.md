problem - https://leetcode.com/problems/top-k-frequent-elements/

Pseudocode - 

#1 prepare a hashmap for occurence of numbers in the given list.

#2 prepare a priority queue and push the elements in it as <no. of occurneces, element>

#3 pop the elements from the priority queue to a answer array, k times or till the queue is emplty.