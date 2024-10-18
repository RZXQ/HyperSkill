USE sql_store;

-- Use the IN operator to match any value in a list of values
-- This query selects customers residing in either 'VA', 'GA', or 'FL'
SELECT *
FROM customers
WHERE state IN ('VA', 'GA', 'FL');

-- Another example of using the IN operator
-- This query selects products that have a quantity in stock of 49, 38, or 72
SELECT *
FROM products
WHERE quantity_in_stock IN (49, 38, 72);

-- Use the NOT IN operator to exclude values from a list
-- This query selects customers who do not reside in 'VA', 'GA', or 'FL'
SELECT *
FROM customers
WHERE state NOT IN ('VA', 'GA', 'FL');