/*
Problem: Customers Who Never Order
Problem Number: 183
Platform: LeetCode
Difficulty: Easy
Topic: DBMS, SQL, LEFT JOIN, NULL

Approach:
1. Select customer names from the Customers table.
2. Use LEFT JOIN to include every customer.
3. Match Customers.id with Orders.customerId.
4. Filter records where Orders.customerId IS NULL.
5. These customers have never placed an order.

SQL Query:
*/

SELECT c.name AS Customers
FROM Customers c
LEFT JOIN Orders o
    ON c.id = o.customerId
WHERE o.customerId IS NULL;

/*
Key Concepts:
- LEFT JOIN: Preserves all records from the left table.
- NULL: Represents the absence of a matching order.
- IS NULL: Filters customers without matching orders.

Time Complexity: Depends on the database execution plan and indexes.
*/
