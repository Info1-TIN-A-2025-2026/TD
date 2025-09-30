# TD 20250930 - Loi de la gravitation universelle

## Cahier des charges
- saisir les masses et distances,
- vérifier la validité des données saisies,
- calculer la force d'attraction gravitationnelle entre deux corps,
- afficher le résultat en notations scientifique et en unités adaptées.

## PSEUDO-CODE

```:
begin

// Variables
float m1, m2 // mass in kg
float r // distance in m
float F // force in N

// Constants
constant G = 6.67e-11 // gravitationnal constant in m^3 kg^-1 s^-2

display "Enter the mass m1 in [kg]: "
read m1
if m1 <= 0 then
  display "Error: mass must be positive."
  stop
end if
display "Enter the mass m2 in [kg]: "
read m2
if m2 <= 0 then
  display "Error: mass must be positive."
  stop
end if
display "Enter the distance r in [m]: "
read r
if r <= 0 then
  display "Error: distance must be positive."
  stop
end if

// Calcul de la force d'attraction gravitationnelle
F = G * (m1 * m2) / (r * r)
display "The gravitational force F is: ", F, " N"

// Affichage en notation scientifique
display "In scientific notation: ", F in scientific notation  

end
```

## Remarques
- Les unités des masses doivent être converties en kilogrammes (kg) avant le calcul.
- Les unités des distances doivent être converties en mètres (m) avant le calcul.
- La force d'attraction gravitationnelle est exprimée en newtons (N).
- Pour l'affichage en notation scientifique, utilisez le format approprié selon le langage de programmation utilisé.
