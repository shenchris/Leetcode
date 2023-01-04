Oringinal_Solution: The brute force approach. Loop through each element x and find if there is another value y that x+y==target.
Time complexity: O(n^2)
Space complexity: O(1), There is no extra space needed.


Two_pass_Hash_Table.cpp: two iterations, In the first iteration, add each element's value as a key and its index as a value to the hash table. Then, in the second iteration, check if each element's complement exists in the hash table.
