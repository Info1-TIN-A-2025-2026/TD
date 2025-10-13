# TD 20251013 - Calcul du prix d'un contrat d'option CALL

## Cahier des charges :


Dans le domaine de la finance, et plus particulièrement dans le secteur des options, il existe deux types de contrats :
- contrat d'achat, nommé CALL
- contrat de vente, nommé PUT.

Chaque type de contrat peut être acheté ou vendu, selon la stratégie financière envisagée.

Un contrat est caractérisé par trois éléments principaux : 
- la valeur de l'action,
- la durée du contrat,
- la valeur du strike (prix cible à la fin du contrat).

L'objectif de ce travail est d'estimer le prix d'un contrat d'option **CALL** dans des conditions figées :
- on veut saisir les informations suivantes :
  - le prix actuel de l'action,
  - le prix du strike,
  - le temps restant jusqu'à expiration du contrat,
- les éléments suivants sont des contantes :
  - le taux d'intérêt annuel sans risque est fixé à 1.5%
  - la volatilité annuelle du prix de l'action est fixée à 27.4%
- le programme affiche le prix du contrat CALL.

Note: les données saisies doivent être vérifiées (quant à leur valeur numérique).

## Données

Pour le calcul de la Fonction de répartition de la loi normale centrée réduite, vous devez utiliser l'approximation de Abramowitz & Stegun.

## Activités

- analysez le cahier des charges,
- identifiez les données nécessaires,
- rédigez l'algorithme en pseudo-code,
- écrivez le fichier YAML pour les tests automatiques,
- écrivez le code C,
- vérifiez que les tests passent,
- corrigez si nécessaire.

## Connaissances utiles

- rédaction de pseudo-code,
- gestion des unités,
- saisie au clavier et contrôle des valeurs,
- opérations mathématiques sur les flottants,
- affichage formaté.

# Références

- [formule de Black-Scholes](https://fr.wikipedia.org/wiki/Mod%C3%A8le_Black-Scholes)
- [approximation de Abramowitz & Stegun](https://help.cqg.com/cqgic/25/default.htm#!Documents/mathematicsapproximationequationsolvinganddifferentiation.htm)
- [calculateur Black-Scholes en ligne](https://www.math.drexel.edu/~pg/fin/VanillaCalculator.html)
- [simulateur complet](https://optionstrat.com/build/long-call/AAPL/.AAPL260918C240)
