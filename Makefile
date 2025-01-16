# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/16 13:24:45 by cglavieu          #+#    #+#              #
#    Updated: 2025/01/16 15:50:40 by cglavieu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# *** LIBRARY **************************************************************** #
NAME			=	libft.a

# *** COMPILATION ************************************************************ #
CC				=	gcc
CFLAG			=	-Wall -Wextra -Werror

# *** HEADERS **************************************************************** #
INCDIR			=	./inc/

# *** SOURCES **************************************************************** #
SRCDIR			=	./src/
# *** FT_IS		*** #
ISDIRNAME		=	ft_is/
ISDIRPATH		=	$(addprefix $(SRCDIR),$(ISDIRNAME))
ISSOURCES		=	ft_isalnum.c		ft_isblank.c		ft_isgraph.c 	\
					ft_ispunct.c		ft_isxdigit.c		ft_isalpha.c 	\
					ft_iscntrl.c		ft_islower.c		ft_isspace.c 	\
					ft_isascii.c		ft_isdigit.c		ft_isprint.c 	\
					ft_isupper.c
ISFILESPATH		=	$(addprefix $(ISDIRPATH),$(ISSOURCES))
# *** FT_MEM	*** #
MEMDIRNAME		=	ft_mem/
MEMDIRPATH		=	$(addprefix $(SRCDIR),$(MEMDIRNAME))
MEMSOURCES		=	ft_bzero.c			ft_calloc.c			ft_memccpy.c 	\
					ft_memchr.c			ft_memset.c
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
STRSOURCES		=	ft_strcat.c			ft_strchr.c			ft_strcmp.c		\
					ft_strcpy.c			ft_strdup.c			ft_strlen.c		\
					ft_strncat.c		ft_strncmp.c		ft_strncpy.c	\
					ft_strrchr.c		ft_toupper.c		ft_tolower.c
STRFILESPATH	=	$(addprefix $(STRDIRPATH),$(STRSOURCES))
# *** FT_TYP	*** #
TYPDIRNAMES		=	ft_type/
TYPDIRPATH		=	$(addprefix $(SRCDIR),$(TYPDIRNAMES))
TYPSOURCES		=	ft_atoi.c			ft_itoa.c
TYPFILESPATH	=	$(addprefix $(TYPDIRPATH),$(TYPSOURCES))

# *** GNL		*** #
GNLDIRNAME		=	get_next_line/
GNLDIRPATH		=	$(addprefix $(SRCDIR),$(GNLDIRNAME))
GNLSOURCES		=	get_next_line.c
GNLFILESPATH	=	$(addprefix $(GNLDIRPATH),$(GNLSRC))
# *** BINARIES *************************************************************** #
OBJDIR			=	./obj/
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
GNLOBJECTS		=	$(GNLSRC:.c=.o)
GNLOBJFILES		=	$(addprefix $(GNLOBJDIR),$(GNLOBJECTS))
# *** ALL		*** #
ALLOBJF			=	$(ISOBJFILES)	$(MEMOBJFILES)	$(PRTOBJFILES) \
					$(STROBJFILES)	$(TYPOBJFILES)	$(GNLOBJFILES)

# *** RULES ****************************************************************** #
all				:	$(NAME)

$(NAME)			:	$(ALLOBJF)
					@ar rc $@ $^

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

clean			:
					@rm -rf $(OBJDIR)

fclean			:	clean
					@rm -f $(NAME)

re				:	fclean all
