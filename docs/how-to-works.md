#to be done !!
# Fonctionnement de Projet Non Guidé

Ce document explique le fonctionnement du projet et comment les outils CMake, CTest, Doxygen et GitHub Actions sont intégrés pour assurer un développement efficace
 et une gestion transparente du projet.

## Intégration Continue avec GitHub Actions

GitHub Actions est utilisé pour automatiser le processus d'intégration continue (CI). Voici comment le workflow est configuré :

1. **Vérification du code source** : GitHub Actions récupère le code source à chaque push sur la branche `main`.
2. **Installation des dépendances** : CMake et Doxygen sont installés pour la compilation et la génération de documentation.
3. **Configuration CMake** : CMake est utilisé pour configurer le projet dans le dossier `build`.
4. **Compilation du projet** : CMake est invoqué pour construire le projet avec `cmake --build .`.
5. **Exécution des tests unitaires** : CTest est utilisé pour exécuter les tests unitaires. Si les tests réussissent, le processus se poursuit.
6. **Génération de la documentation** : Doxygen est configuré pour générer automatiquement la documentation à partir des commentaires de code.
7. **Poussée de la documentation** : Si tous les tests réussissent, la documentation est poussée vers le dépôt GitHub.

## Utilisation de CMake

CMake simplifie la gestion du projet en générant des fichiers de configuration de build adaptés au système d'exploitation 
et à votre environnement de développement. Voici comment il est utilisé dans ce projet :

- **Configuration de projet** : Le fichier `CMakeLists.txt` à la racine configure le projet, spécifiant les sources, les tests et la documentation.
- **Création de cibles** : Les cibles sont créées pour compiler les sources, exécuter les tests et générer la documentation.

## Conclusion

L'intégration de CMake, CTest, Doxygen et GitHub Actions permet de maintenir un processus de développement fluide et efficace.
 CMake simplifie la configuration du projet, CTest garantit la qualité du code avec des tests unitaires,
 Doxygen automatise la documentation, et GitHub Actions assure l'intégration continue, garantissant que le code
 fonctionne correctement avant d'être fusionné dans la branche principale.

