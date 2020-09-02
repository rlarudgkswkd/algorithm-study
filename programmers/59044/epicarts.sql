SELECT AI.NAME, AI.DATETIME
FROM ANIMAL_INS AI
LEFT JOIN ANIMAL_OUTS AO ON AI.ANIMAL_ID = AO.ANIMAL_ID
WHERE AO.ANIMAL_ID is NULL
ORDER BY AI.DATETIME 
LIMIT 3
