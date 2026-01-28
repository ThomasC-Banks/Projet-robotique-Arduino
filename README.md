## 🤖 Projet bonus — Radar de détection avec Arduino

Ce projet est basé sur un tutoriel de radar interactif utilisant une **carte Arduino Uno**, un **capteur à ultrasons HC-SR04**, et un **servo moteur SG90** pour balayer l’environnement et détecter des objets en temps réel. Les données sont envoyées en série à un programme **Processing** qui affiche une interface graphique de type *radar*. :contentReference[oaicite:6]{index=6}

### 🔧 Matériel utilisé

- 📦 Carte **Arduino Uno**
- 🌀 **Capteur ultrasonique HC-SR04**
- 🔁 **Servo moteur SG90** pour le balayage
- 🖨️ **Supports imprimés en 3D** pour le montage mécanique
- 🔌 Fils de connexion / Breadboard
- 💻 **Arduino IDE** pour le code embarqué
- 🖥️ **Processing IDE** pour la visualisation radar :contentReference[oaicite:7]{index=7}

### 🧠 Fonctionnement

1. Le **servo moteur fait pivoter** le capteur à ultrasons sur un angle défini (ex. 15° → 165°).
2. À chaque position, le HC-SR04 mesure la distance à l’obstacle le plus proche.
3. La distance et l’angle sont envoyés via le port **série** à l’ordinateur.
4. Un programme **Processing** lit ces données et génère une **visualisation radar** en temps réel. :contentReference[oaicite:8]{index=8}

👉 Ce montage permet une détection d’objets dans un champ angulaire et une représentation graphique proche d’un vrai radar. :contentReference[oaicite:9]{index=9}

---

## 📸 Fabrication & impression 3D

Tu as réalisé **les pièces imprimées en 3D** pour :
- Le **support capteur** (pour fixer et orienter le HC-SR04)
- Le **rotateur** du servo (pour une rotation fluide)
- Le **boîtier Arduino + câblage**

Ce travail mécanique montre que tu maîtrises à la fois :
- l’électronique embarquée
- la programmation
- **la conception 3D et l’impression** (atout très fort pour un portfolio)

---

## 🖥️ Visualisation radar

La visualisation est réalisée avec **Processing** :  
les données (angle + distance) envoyées par Arduino sont transformées en **points sur une interface graphique** en forme de radar.

👉 Résultat : tu vois en temps réel les objets détectés apparaître sur un radar simulé à l’écran. :contentReference[oaicite:10]{index=10}


## ✍️ Signature
Projet réalisé par **Thomas Cordé**  
💻 Jeune développeur web
```
 ____  _ _    ____  _  _   __   _  _   __   ____ 
(  _ \( \/ )  (_  _)/ )( \ /  \ ( \/ ) / _\ / ___)
 ) _ ( )  /     )(  ) __ ((  O )/ \/ \/    \\___ \
(____/(__/     (__) \_)(_/ \__/ \_)(_/\_/\_/(____/
```