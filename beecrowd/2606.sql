SELECT p.id as id,p.name as name
FROM products as p , categories as c
WHERE p.id_categories=c.id
and c.name LIKE 'super%';