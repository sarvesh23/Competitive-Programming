SELECT m.id as id , m.name as name
FROM movies as m , prices as p
WHERE m.id_prices=p.id and
 p.value = (SELECT MIN(value) FROM prices);