CFLAGS = -Wall -Wextra -Werror

TARGET = rush02
SRCS = check.c dict_split.c linked_list.c convert.c ft_io.c main.c print.c valid_str.c
OBJS = check.o dict_split.o linked_list.o convert.o ft_io.o main.o print.o valid_str.o

all: $(OBJS)
	gcc $(CFLAGS) -o rush02 $(OBJS)

%o: %.c
	gcc $(CFLAGS) -c $< -o rush02.h

$(TARGET): $(OBJS)
	gcc -o $(TARGET) $(CFLAGS) $^

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re:
	fclean all
