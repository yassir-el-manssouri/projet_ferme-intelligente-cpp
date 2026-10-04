<div align="center">

# 🌾 Ferme Intelligente — Système de Gestion Agricole en C++ (POO)

[![C++](https://img.shields.io/badge/C++-17-00599C?style=for-the-badge&logo=cplusplus&logoColor=white)](https://isocpp.org/)
[![Paradigm](https://img.shields.io/badge/Paradigm-Object--Oriented_Programming-orange?style=for-the-badge)](https://en.wikipedia.org/wiki/Object-oriented_programming)
[![Dev-C++](https://img.shields.io/badge/IDE-Dev--C%2B%2B%20%2F%20MinGW-blue?style=for-the-badge)](https://www.bloodshed.net/)
[![License: MIT](https://img.shields.io/badge/License-MIT-green.svg?style=for-the-badge)](https://opensource.org/licenses/MIT)

Application console moderne en **C++ orienté objet** modélisant le pilotage automatisé et la gestion intelligente des ressources d'une exploitation agricole.

[Fonctionnalités](#-fonctionnalités) • [Stack Technique](#%EF%B8%8F-stack-technique) • [Installation](#-installation--configuration)

</div>

---

## 🌟 Fonctionnalités

- 💧 **Gestion Hydraulique & Irrigation (ReservoirEau) :** Contrôle du volume disponible vs capacité maximale. Déclenchement d'arrosages contrôlés avec vérification de débit.
- 🌡️ **Régulation Climatique Sous Serre (Serre) :** Paramétrage et suivi en temps réel de la température cible et du taux d'humidité relative. Ajustement dynamique de la consigne thermique.
- 🐄 **Suivi Vétérinaire & Cheptel (Animal) :** Modélisation individuelle des animaux (nom, statut de santé). Gestion dynamique du troupeau via les conteneurs STL.
- 🌾 **Gestion des Stocks Fourragers (StockNourriture) :** Contrôle des réserves de grain/nourriture. Distribution rationnée avec contrôle des seuils de rupture.
- 📊 **Tableau de Bord Économique & Statistiques (Statistiques) :** Cumul en continu des consommations d'eau (L) et d'aliments (kg). Calcul financier automatique et génération d'un rapport de synthèse clair.

---

## 🛠️ Stack Technique

- **Langage :** C++17 (Architecture Orientée Objet, STL, Surcharge, Encapsulation stricte)
- **Compilateur :** GCC / MinGW (via g++)
- **Outils de Build :** Makefile
- **IDE recommandé :** Dev-C++, Code::Blocks, CLion, VS Code

---

## 📂 Structure du Répertoire

```bash
FermeIntelligente/
├── Animal.h / .cpp           # Classe représentant les animaux du cheptel
├── ReservoirEau.h / .cpp     # Gestion de la réserve d'eau et irrigation
├── Serre.h / .cpp            # Régulation du climat (température / humidité)
├── StockNourriture.h / .cpp  # Gestion des rations et stocks d'aliments
├── Statistiques.h / .cpp     # Calcul des dépenses et bilan financier
├── main.cpp                  # Menu interactif et boucle d'exécution
├── Makefile.win              # Fichier Makefile pour compilation sous Windows
└── projet c++.dev            # Configuration projet Dev-C++
```

---

## 🚀 Installation & Configuration

### 1. Cloner le projet
```bash
git clone https://github.com/yassir-el-manssouri/projet_ferme-intelligente-cpp.git
cd projet_ferme-intelligente-cpp
```

### 2. Compilation & Exécution

**Option 1 : Compilation via g++ (MinGW / GCC / Clang)**
Ouvrez un terminal dans le répertoire du projet :
```bash
# Compilation de tous les modules sources
g++ -std=c++17 -Wall main.cpp Animal.cpp ReservoirEau.cpp Serre.cpp StockNourriture.cpp Statistiques.cpp -o ferme_intelligente.exe

# Lancement de l'application
./ferme_intelligente.exe
```

**Option 2 : Compilation via Makefile**
```bash
make -f Makefile.win
```

**Option 3 : Avec un IDE (Dev-C++, etc.)**
1. Ouvrez le fichier de projet `projet c++.dev` avec **Dev-C++**.
2. Appuyez sur **F9** (Compiler & Exécuter) ou cliquez sur **Build & Run**.

---

## 💻 Exemple d'Utilisation

```text
--- GESTION FERME INTELLIGENTE ---
1. Gestion Eau (Arroser/Remplir)
2. Gestion Serre (Climat)
3. Gestion Animaux (Voir etat)
4. Gestion Stocks (Nourrir)
5. Afficher Statistiques & Couts
0. Quitter
Votre choix : 5

=== RAPPORT FINANCIER ===
Eau consommee : 40 L (Cout : 20 E)
Nourriture    : 20 kg (Cout : 40 E)
-------------------------
COUT TOTAL    : 60 E
=========================
```

---

## 👤 Auteur

- **Yassir EL MANSSOURI** - [@yassir-el-manssouri](https://github.com/yassir-el-manssouri) | [LinkedIn](https://www.linkedin.com/in/yassir-el-manssouri/)

---


