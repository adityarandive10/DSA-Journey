/*
========================================================
Problem       : 586. Customer Placing the Largest Number of Orders
Platform      : LeetCode
Difficulty    : Easy
Topic         : Database, SQL, Aggregation
Approach      : GROUP BY, COUNT, ORDER BY, LIMIT
Time          : O(N log N)
Space         : O(N)
========================================================
*/

SELECT customer_number
FROM Orders
GROUP BY customer_number
ORDER BY COUNT(*) DESC
LIMIT 1;
