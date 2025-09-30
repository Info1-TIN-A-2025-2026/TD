# TD 20250930 - Loi de la gravitation universelle

## Cahier des charges
- saisir les masses et distances,
- vérifier la validité des données saisies,
- calculer la force d'attraction gravitationnelle entre deux corps,
- afficher le résultat en notations scientifique et en unités adaptées.

## Analyse

Choix pour la conception : 
- l'utilisateur saisie les masses en **kg** et la distance en **m**.
- la force calculé est en **N**.

Loi de la gravitation universelle https://fr.wikipedia.org/wiki/Loi_universelle_de_la_gravitation

L'affichage se fera au format scientifique avec 2 chiffres après la virgule
(exemple : +1.98e+20)

### Inputs
- **m1** : masse du corps 1 en kg (double, >0),
- **m2** : masse du corps 2 en kg (double >0),
- **r** : distance entre les deux corps en m (double >0).

### Variables intermédiaires

N/A

### Constants
- **G** : constante gravitationnelle = 6.67 × 10^-11 m^3 kg^-1 s^-2 (double).

### Outputs
- **F** : force d'attraction gravitationnelle en N (double).

## PSEUDO-CODE

```:
begin

// Constants
constant G = 6.67e-11 // gravitationnal constant in m^3 kg^-1 s^-2

// Variables
double m1, m2 // mass in kg
double r // distance in m
double F // force in N

display "Enter the mass m1 in [kg]: "
read m1
if m1 <= 0 then
  display "Error: mass m1 must be positive."
  stop
end if
display "Enter the mass m2 in [kg]: "
read m2
if m2 <= 0 then
  display "Error: mass m2 must be positive."
  stop
end if
display "Enter the distance r in [m]: "
read r
if r <= 0 then
  display "Error: distance r must be positive."
  stop
end if

// Compute the gravitational force
F = G * (m1 * m2) / (r * r)
display "The gravitational force F is: ", F, " N"

// Display in scientific notation
display "F=", F in scientific notation  

end
```

## Remarques
- Les unités des masses doivent être converties en kilogrammes (kg) avant le calcul.
- Les unités des distances doivent être converties en mètres (m) avant le calcul.
- La force d'attraction gravitationnelle est exprimée en newtons (N).
- Pour l'affichage en notation scientifique, utilisez le format approprié selon le langage de programmation utilisé.


## Tests automatiques

Valeurs en kg :
- Masse Terre : 5.972E24,
- Masse Lune : 7.348E22,
- Masse Soleil : 1.988E30,
- Masse ISS : 4.2E5.

Valeurs en m :
- Distance Terre-Lune : 3.844E8,
- Distance Soleil-Terre : 1.496E11,
- Distance Terre-ISS : 6.7E5.

Tests :
- Terre-Lune : m1=5.972E24, m2=7.348E22, r=3.844E8 -> F≈1.98E20 N,
- Terre-Soleil : m1=5.972E24, m2=1.988E30, r=1.496E11 -> F≈3.54E22 N,
- Terre-ISS : m1=5.972E24, m2=4.2E5, r=6.7E5 -> F≈3.73E6 N.