# Compiler et linker
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Fichiers sources et objets
SRC = Account.cpp tests.cpp
OBJ_DIR = obj
OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))

# Nom de l'exécutable
NAME = account_test

# Règle par défaut
all: $(NAME)

# Compilation de l'exécutable
$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compilation des fichiers objets
$(OBJ_DIR)/%.o: %.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Création du dossier obj si nécessaire
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

# Nettoyage des fichiers objets
clean:
	rm -rf $(OBJ_DIR)

# Nettoyage complet (objets + exécutable)
fclean: clean
	rm -f $(NAME)

# Recompilation complète
re: fclean all

# Phony targets pour éviter des conflits avec des fichiers portant ces noms
.PHONY: all clean fclean re
