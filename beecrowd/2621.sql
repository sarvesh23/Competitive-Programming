SELECT p.name as name 
FROM products as p, providers as pr
WHERE p.id_providers = pr.id and p.amount>=10 and p.amount<=20 
and pr.name LIKE 'P%';