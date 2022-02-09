SELECT P.name as name , PR.name
FROM products as P , providers as PR
WHERE P.id_providers=PR.id and P.id_categories=6;