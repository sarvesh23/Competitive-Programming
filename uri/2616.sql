SELECT c.id, c.name
FROM customers c
WHERE c.id NOT IN
    (SELECT id_customers
    FROM locations)
ORDER BY c.id;