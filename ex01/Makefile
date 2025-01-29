# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcohen <tcohen@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/27 23:02:18 by tcohen            #+#    #+#              #
#    Updated: 2025/01/29 20:51:48 by tcohen           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Contact.cpp PhoneBook.cpp utils.cpp
OBJ_DIR = obj
OBJ = $(SRC:%.cpp=$(OBJ_DIR)/%.o)
EXEC = phonebook


# Règles par défaut
all: $(EXEC)

# Créer le répertoire obj si nécessaire
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

# Compilation du programme principal
$(EXEC): $(OBJ)
	$(CXX) $(OBJ) -o $(EXEC)

# Compilation des fichiers objets
$(OBJ_DIR)/%.o: %.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Nettoyage des fichiers objets et du programme
clean:
	rm -rf $(OBJ_DIR)

# Suppression des fichiers objets et du programme
fclean: clean
	rm -f $(EXEC)

# Recompile tout
re: fclean all

.PHONY: all clean fclean re
