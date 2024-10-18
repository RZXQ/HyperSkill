USE sql_store;

-- Order of operators: NOT > AND > OR

-- Use the AND operator to combine conditions
-- This query selects customers born after January 1, 1990, and having more than 1000 points
SELECT *
FROM customers
WHERE birth_date > '1990-01-01'
  AND points > 1000;

-- Use the OR operator to match any of the conditions
-- This query selects customers born after January 1, 1990, or those with more than 1000 points and residing in the state 'va'
SELECT *
FROM customers
WHERE birth_date > '1990-01-01'
   OR (points > 1000 AND state = 'va');

-- Use the NOT operator to negate a condition
-- This query selects customers who were not born after January 1, 1990, and do not have more than 1000 points
SELECT *
FROM customers
WHERE NOT (birth_date > '1990-01-01' OR points > 1000);

-- Alternative to the NOT operator (equivalent to the previous query)
-- Negate each operand inside the condition
SELECT *
FROM customers
WHERE birth_date <= '1990-01-01'
  AND points <= 1000;

-- Query with a mathematical operation in the condition
-- Select items from order_items with order_id 6 where the total price (unit_price * quantity) is greater than 30
SELECT *
FROM order_items
WHERE order_id = 6
  AND unit_price * quantity > 30;