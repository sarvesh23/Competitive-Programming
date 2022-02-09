SELECT c.name as name,SUM(amount) as sum
FROM products as p,categories as c
WHERE p.id_categories = c.id
GROUP BY c.name
ORDER BY c.name;