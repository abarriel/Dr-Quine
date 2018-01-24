COLLEEN = Colleen
GRACE = Grace
SULLY = Sully

.PHONY: all clean fclean re $(COLLEEN) $(GRACE) $(SULLY)

all: $(COLLEEN) $(GRACE) $(SULLY)

$(COLLEEN):
	gcc -Wall -Wextra ${COLLEEN}.c -o ${COLLEEN}

$(GRACE):
	gcc -Wall -Wextra ${GRACE}.c -o ${GRACE}	

$(SULLY):
	gcc -Wall -Wextra ${SULLY}.c -o ${SULLY}	

clean:
	@rm -f $(COLLEEN).o $(GRACE).o $(SULLY).o

fclean: clean
	@rm -f $(COLLEEN) $(GRACE) $(SULLY)

re: fclean all