<div align=center>

# 🌾 Ferme Intelligente — Système de Gestion Agricole en C++ (POO)

[![C++](https://img.shields.io/badge/C++-17-00599C?style=for-the-badge&logo=cplusplus&logoColor=white)](https://isocpp.org/)
[![Paradigm](https://img.shields.io/badge/Paradigm-Object--Oriented_Programming-orange?style=for-the-badge)](https://en.wikipedia.org/wiki/Object-oriented_programming)
[![Dev-C++](https://img.shields.io/badge/IDE-Dev--C%2B%2B%20%2F%20MinGW-blue?style=for-the-badge)](https://www.bloodshed.net/)
[![License: MIT](https://img.shields.io/badge/License-MIT-green.svg?style=for-the-badge)](https://opensource.org/licenses/MIT)

Application console moderne en **C++ orienté objet** modélisant le pilotage automatisé et la gestion intelligente des ressources d'une exploitation agricole : irrigation, contrôle climatique sous serre, suivi du cheptel, alimentation et bilan financier des consommations.

[Fonctionnalités](#-fonctionnalités) • [Architecture POO](#-architecture-orientée-objet) • [Structure](#-structure-du-projet) • [Compilation](#-compilation--exécution) • [Auteur](#-auteur)

</div>

---

## 🌟 Fonctionnalités

- 💧 **Gestion Hydraulique & Irrigation (ReservoirEau) :**
  - Contrôle du volume disponible vs capacité maximale.
  - Déclenchement d'arrosages contrôlés avec vérification de débit.
  - Surcharge de méthodes (*function overloading*) : remplissage partiel (emplir(float)) ou complet (emplir()).

- 🌡️ **Régulation Climatique Sous Serre (Serre) :**
  - Paramétrage et suivi en temps réel de la température cible et du taux d'humidité relative.
  - Ajustement dynamique de la consigne thermique selon les besoins agronomiques.

- 🐄 **Suivi Vétérinaire & Cheptel (Animal) :**
  - Modélisation individuelle des animaux (nom, statut de santé : Bon, Moyen, etc.).
  - Gestion dynamique du troupeau via les conteneurs STL (std::vector<Animal>).

- 🌾 **Gestion des Stocks Fourragers (StockNourriture) :**
  - Contrôle des réserves de grain/nourriture.
  - Distribution rationnée avec contrôle des seuils de rupture.

- 📊 **Tableau de Bord Économique & Statistiques (Statistiques) :**
  - Cumul en continu des consommations d'eau (L) et d'aliments (kg).
  - Calcul financier automatique basé sur les coûts unitaires (€0.50/L d'eau, €2.00/kg d'aliment).
  - Génération d'un rapport de synthèse clair pour l'exploitant.

---

## 📐 Architecture Orientée Objet

Le projet applique rigoureusement les fondamentaux de la conception logicielle en **C++** :

- **Encapsulation stricte :** Attributs déclarés en private avec contrôle d'accès par des méthodes publiques (public).
- **Séparation Interface / Implémentation :** Fichiers d'en-tête (.h) pour les prototypes et fichiers source (.cpp) pour la logique métier.
- **Polymorphisme statique (Surcharge) :** Plusieurs signatures pour une même action (ReservoirEau::remplir).
- **Const-Correctness :** Utilisation systématique du mot-clé const pour les méthodes d'affichage et de consultation garantissant l'intégrité des états internes.
- **STL (Standard Template Library) :** Utilisation de std::vector et std::string pour une gestion mémoire robuste et moderne.

### Diagramme de Classes

`
+-------------------+        +--------------------+
|   ReservoirEau    |        |       Serre        |
+-------------------+        +--------------------+
| - capaciteMax     |        | - temperatureCible |
| - niveauActuel    |        | - humiditeCible    |
+-------------------+        +--------------------+
| + arroser()       |        | + setTemperature() |
| + remplir()       |        | + afficherClimat() |
| + remplir(float)  |        +--------------------+
| + afficherEtat()  |
+-------------------+

+-------------------+        +--------------------+
|      Animal       |        |  StockNourriture   |
+-------------------+        +--------------------+
| - nom             |        | - qteTotale        |
| - etatSante       |        +--------------------+
+-------------------+        | + distribuer()     |
| + afficherEtat()  |        | + afficherStock()  |
+-------------------+        +--------------------+

                  +----------------------+
                  |     Statistiques     |
                  +----------------------+
                  | - eauConso           |
                  | - nourritureConso    |
                  | - PRIX_EAU (const)   |
                  | - PRIX_NOURRITURE    |
                  +----------------------+
                  | + ajouterConsoEau()  |
                  | + ajouterConsoNour() |
                  | + afficherRapport()  |
                  +----------------------+
`

---

## 📂 Structure du Projet

`ash
FermeIntelligente/
├── Animal.h / Animal.cpp                   # Classe représentant les animaux du cheptel
├── ReservoirEau.h / ReservoirEau.cpp       # Gestion de la réserve d'eau et irrigation
├── Serre.h / Serre.cpp                     # Régulation du climat (température / humidité)
├── StockNourriture.h / StockNourriture.cpp # Gestion des rations et stocks d'aliments
├── Statistiques.h / Statistiques.cpp       # Calcul des dépenses et bilan financier
├── main.cpp                                # Menu interactif et boucle d'exécution
├── Makefile.win                            # Fichier Makefile pour compilation sous Windows
├── projet c++.dev                          # Configuration projet Dev-C++
└── README.md                               # Documentation du projet
`

---

## 🚀 Compilation & Exécution

### Option 1 : Compilation via g++ (MinGW / GCC / Clang)

Ouvrez un terminal dans le répertoire du projet :

`ash
# Compilation de tous les modules sources
g++ -std=c++17 -Wall main.cpp Animal.cpp ReservoirEau.cpp Serre.cpp StockNourriture.cpp Statistiques.cpp -o ferme_intelligente.exe

# Lancement de l'application
./ferme_intelligente.exe
`

### Option 2 : Compilation via Makefile

`ash
make -f Makefile.win
`

### Option 3 : Avec un IDE (Dev-C++, Code::Blocks, CLion, VS Code)
1. Ouvrez le fichier de projet projet c++.dev avec **Dev-C++** (ou ouvrez le dossier dans votre IDE préféré).
2. Appuyez sur **F9** (Compiler & Exécuter) ou cliquez sur **Build & Run**.

---

## 💻 Exemple d'Utilisation

`	ext
--- GESTION FERME INTELLIGENTE ---
1. Gestion Eau (Arroser/Remplir)
2. Gestion Serre (Climat)
3. Gestion Animaux (Voir etat)
4. Gestion Stocks (Nourrir)
5. Afficher Statistiques & Couts
0. Quitter
Votre choix : 5

=== RAPPORT DE CONSOMMATION ===
Eau totale utilisee : 40 Litres
Nourriture distribuee : 20 kg
-----------------------------------
Cout Eau : 20 €
Cout Nourriture : 40 €
COUT TOTAL OPERATIONNEL : 60 €
===================================
`

---

## 👤 Auteur

- **Yassir EL MANSSOURI**
  - **GitHub :** [@yassir-el-manssouri](https://github.com/yassir-el-manssouri)
  - **LinkedIn :** [Yassir El Manssouri](https://www.linkedin.com/in/yassir-el-manssouri/)

---

## 📄 Licence

Ce projet est distribué sous licence MIT.
