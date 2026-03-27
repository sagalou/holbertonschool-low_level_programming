C - Singly Linked Lists
📝 DescriptionCe projet porte sur l'apprentissage et l'implémentation des listes simplement chaînées en langage C. L'objectif est de comprendre comment gérer une collection dynamique de données en utilisant des structures et des pointeurs, tout en comparant cette approche aux tableaux classiques.

🎯 Objectifs d'apprentissageÀ la fin de ce projet, je serai capable d'expliquer :Quand et pourquoi utiliser des listes chaînées plutôt que des tableaux.Comment construire et manipuler une liste chaînée.Comment parcourir, ajouter et supprimer des éléments dans une liste de type list_t.

💻 Configuration RequiseSystème d'exploitation : Ubuntu 20.04 LTSCompilateur : gcc (options : -Wall -Werror -Wextra -pedantic -std=gnu89)Éditeurs autorisés : vi, vim, emacsStyle de code : Respect strict du style Betty.

🏗️ Structure de DonnéesToutes les fonctions de ce projet utilisent la structure suivante (à inclure dans lists.h)

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;


🛠️ Prototypes des FonctionsFichierPrototypeDescription0-print_list.csize_t print_list(const list_t *h);Affiche tous les éléments d'une liste list_t.

🚀 UtilisationPour compiler les fichiers (exemple pour la tâche 0) :Bashgcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_list.c -o a
./a

⚠️ ContraintesPas de variables globales.Maximum 5 fonctions par fichier.Fonctions autorisées : malloc, free, exit et _putchar.Les fichiers main.c de test ne doivent pas être poussés sur le dépôt.Le fichier lists.h doit être protégé par un include guard.

Auteur Sagalou
