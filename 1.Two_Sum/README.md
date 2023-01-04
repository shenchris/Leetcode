Oringinal_Solution: The brute force approach. Loop through each element x and find if there is another value y that x+y==target.
<br />
Time complexity: O(n^2)
<br />
Space complexity: O(1), There is no extra space needed.
<br /><br />

Two_pass_Hash_Table.cpp: two iterations, In the first iteration, add each element's value as a key and its index as a value to the hash table. Then, in the second iteration, check if each element's complement exists in the hash table.
<br />
Time complexity: O(n)
<br />
Space complexity: O(n), There is no extra space needed.

