SELECT P.name as name , PR.name as name
FROM products as P , providers as PR
WHERE P.id_providers = PR.id and PR.name = 'Ajax SA';