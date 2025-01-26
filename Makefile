# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/16 13:24:45 by cglavieu          #+#    #+#              #
#    Updated: 2025/01/23 15:13:05 by cglavieu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DEBUG			=	true

# *** LIBRARY **************************************************************** #
NAME			=	libft.a

# *** TESTER ***************************************************************** #
TEST			=	lfttest

# *** COMPILATION ************************************************************ #
CC				=	gcc
ifeq ($(DEBUG),true)
CFLAG			=	-Wall -Wextra -Werror -g -O0 -fsanitize=address
else
CFLAG			=	-Wall -Wextra -Werror
endif
# *** HEADERS **************************************************************** #
INCDIR			=	./inc/
TESTINCDIR		=	./test/inc/

# *** SOURCES **************************************************************** #
SRCDIR			=	./src/
# *** FT_FILE		*** #
FILEDIRNAME		=	ft_file/
FILEDIRPATH		=	$(addprefix $(SRCDIR),$(FILEDIRNAME))
FILESOURCES		=	ft_filelinecount.c	ft_fileopen.c
FILEFILESPATH	=	$(addprefix $(FILEDIRPATH),$(FILESOURCES))
# *** FT_IS		*** #
ISDIRNAME		=	ft_is/
ISDIRPATH		=	$(addprefix $(SRCDIR),$(ISDIRNAME))
ISSOURCES		=	ft_isalnum.c		ft_isblank.c		ft_isgraph.c 	\
					ft_ispunct.c		ft_isxdigit.c		ft_isalpha.c 	\
					ft_iscntrl.c		ft_islower.c		ft_isspace.c 	\
					ft_isascii.c		ft_isdigit.c		ft_isprint.c 	\
					ft_isupper.c		ft_isvalidint.c		ft_isvaliddbl.c
ISFILESPATH		=	$(addprefix $(ISDIRPATH),$(ISSOURCES))
# *** FT_MEM	*** #
MEMDIRNAME		=	ft_mem/
MEMDIRPATH		=	$(addprefix $(SRCDIR),$(MEMDIRNAME))
MEMSOURCES		=	ft_bzero.c			ft_calloc.c			ft_memccpy.c 	\
					ft_memchr.c			ft_memcpy.c			ft_memmove.c	\
					ft_memset.c
MEMFILESPATH		=	$(addprefix $(MEMDIRPATH),$(MEMSOURCES))
# *** FT_PRT	*** #
PRTDIRNAME		=	ft_print/
PRTDIRPATH		=	$(addprefix $(SRCDIR),$(PRTDIRNAME))
PRTSOURCES		=	ft_putchar_fd.c		ft_putchar.c		ft_putendl_fd.c	\
					ft_putendl.c		ft_putnbr_fd.c		ft_putnbr.c		\
					ft_putstr_fd.c		ft_putstr.c
PRTFILESPATH	=	$(addprefix $(PRTDIRPATH),$(PRTSOURCES))
# *** FT_STR	*** #
STRDIRNAME		=	ft_string/
STRDIRPATH		=	$(addprefix $(SRCDIR),$(STRDIRNAME))
STRSOURCES		=	ft_strcat.c			ft_strccount.c		ft_strchr.c		\
					ft_strcmp.c			ft_strcpy.c			ft_strdup.c		\
					ft_strjoin.c		ft_strlen.c		\
					ft_strncat.c		ft_strncmp.c		ft_strncpy.c	\
					ft_strrchr.c		ft_toupper.c		ft_tolower.c
STRFILESPATH	=	$(addprefix $(STRDIRPATH),$(STRSOURCES))
# *** FT_TYP	*** #
TYPDIRNAMES		=	ft_type/
TYPDIRPATH		=	$(addprefix $(SRCDIR),$(TYPDIRNAMES))
TYPSOURCES		=	ft_atof.c			ft_atoi.c			ft_itoa.c	
TYPFILESPATH	=	$(addprefix $(TYPDIRPATH),$(TYPSOURCES))

# *** GNL		*** #
GNLDIRNAME		=	get_next_line/
GNLDIRPATH		=	$(addprefix $(SRCDIR),$(GNLDIRNAME))
GNLSOURCES		=	get_next_line.c
GNLFILESPATH	=	$(addprefix $(GNLDIRPATH),$(GNLSOURCES))

# *** TESTER	*** #
TESTDIRNAME		=	test/
TESTDIRPATH		=	$(addprefix $(SRCDIR),$(TESTDIRNAME))
TESTSOURCES		=	main.c				powertest.c			ft_is_test.c	\
					ft_mem_test.c							ft_string_test.c\
					gnl_test.c
TESTFILESPATH	=	$(addprefix $(TESTDIRPATH),$(TESTSOURCES))

# *** BINARIES *************************************************************** #
OBJDIR			=	./obj/
# *** FT_FILE		*** #
FILOBJDIR		=	$(addprefix $(OBJDIR),$(FILEDIRNAME))
FILEOBJECTS		=	$(FILESOURCES:.c=.o)
FILEOBJFILES	=	$(addprefix $(FILOBJDIR),$(FILEOBJECTS))
# *** FT_IS		*** #
ISOBJDIR		=	$(addprefix $(OBJDIR),$(ISDIRNAME))
ISOBJECTS		=	$(ISSOURCES:.c=.o)
ISOBJFILES		=	$(addprefix $(ISOBJDIR),$(ISOBJECTS))
# *** FT_MEM	*** #
MEMOBJDIR		=	$(addprefix $(OBJDIR),$(MEMDIRNAME))
MEMOBJECTS		=	$(MEMSOURCES:.c=.o)
MEMOBJFILES		=	$(addprefix $(MEMOBJDIR),$(MEMOBJECTS))
# *** FT_PRT	*** #
PRTOBJDIR		=	$(addprefix $(OBJDIR),$(PRTDIRNAME))
PRTOBJECTS		=	$(PRTSOURCES:.c=.o)
PRTOBJFILES		=	$(addprefix $(PRTOBJDIR),$(PRTOBJECTS))
# *** FT_STR	*** #
STROBJDIR		=	$(addprefix $(OBJDIR),$(STRDIRNAME))
STROBJECTS		=	$(STRSOURCES:.c=.o)
STROBJFILES		=	$(addprefix $(STROBJDIR),$(STROBJECTS))
# *** FT_TYP	*** #
TYPOBJDIR		=	$(addprefix $(OBJDIR),$(TYPDIRNAMES))
TYPOBJECTS		=	$(TYPSOURCES:.c=.o)
TYPOBJFILES		=	$(addprefix $(TYPOBJDIR),$(TYPOBJECTS))
# *** GNL		*** #
GNLOBJDIR		=	$(addprefix $(OBJDIR),$(GNLDIRNAME))
GNLOBJECTS		=	$(GNLSOURCES:.c=.o)
GNLOBJFILES		=	$(addprefix $(GNLOBJDIR),$(GNLOBJECTS))
# *** TEST		*** #
TESTOBJDIR		=	$(addprefix $(OBJDIR),$(TESTDIRNAME))
TESTOBJECTS		=	$(TESTSOURCES:.c=.o)
TESTOBJFILES	=	$(addprefix $(TESTOBJDIR),$(TESTOBJECTS))
# *** ALL		*** #
ALLOBJF			=	$(ISOBJFILES)	$(MEMOBJFILES)	$(PRTOBJFILES) \
					$(STROBJFILES)	$(TYPOBJFILES)	$(GNLOBJFILES) \
					$(FILEOBJFILES)
TESTOBJF		=	$(TESTOBJFILES)

# *** RULES ****************************************************************** #
all				:	$(NAME)

test			:	$(NAME) $(TEST)

$(NAME)			:	$(ALLOBJF)
					@ar rc $@ $^

$(TEST)			:	$(TESTOBJF) $(NAME)
					$(CC) $(CFLAG) -L . -lft $^ -o $@

# *** FT_FILE		*** #
$(FILOBJDIR)%.o	:	$(FILEDIRPATH)%.c
					@mkdir -p $(OBJDIR) $(FILOBJDIR)
					@$(CC) $(CFLAG) -I $(INCDIR) -c $< -o $@
# *** FT_IS		*** #
$(ISOBJDIR)%.o	:	$(ISDIRPATH)%.c
					@mkdir -p $(OBJDIR) $(ISOBJDIR)
					@$(CC) $(CFLAG) -I $(INCDIR) -c $< -o $@
# *** FT_MEM	*** #
$(MEMOBJDIR)%.o	:	$(MEMDIRPATH)%.c
					@mkdir -p $(OBJDIR) $(MEMOBJDIR)
					@$(CC) $(CFLAG) -I $(INCDIR) -c $< -o $@
# *** FT_PRT	*** #
$(PRTOBJDIR)%.o	:	$(PRTDIRPATH)%.c
					@mkdir -p $(OBJDIR) $(PRTOBJDIR)
					@$(CC) $(CFLAG) -I $(INCDIR) -c $< -o $@
# *** FT_STR	*** #
$(STROBJDIR)%.o	:	$(STRDIRPATH)%.c
					@mkdir -p $(OBJDIR) $(STROBJDIR)
					@$(CC) $(CFLAG) -I $(INCDIR) -c $< -o $@
# *** FT_TYP	*** #
$(TYPOBJDIR)%.o	:	$(TYPDIRPATH)%.c
					@mkdir -p $(OBJDIR) $(TYPOBJDIR)
					@$(CC) $(CFLAG) -I $(INCDIR) -c $< -o $@
# *** GNL		*** #
$(GNLOBJDIR)%.o	:	$(GNLDIRPATH)%.c
					@mkdir -p $(OBJDIR) $(GNLOBJDIR)
					@$(CC) $(CFLAG) -I $(INCDIR) -c $< -o $@
# *** GNL		*** #
$(TESTOBJDIR)%.o	:	$(TESTDIRPATH)%.c
					@mkdir -p $(OBJDIR) $(TESTOBJDIR)
					@$(CC) $(CFLAG) -I $(INCDIR) -c $< -o $@

clean			:
					@rm -rf $(OBJDIR)

fclean			:	clean
					@rm -f $(NAME)
					@rm -f $(TEST)

re				:	fclean all
